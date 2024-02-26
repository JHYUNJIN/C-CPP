#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data; // �������� �����Ͱ� ����� ��� ����
	struct Node* left; // ���� �ڽ��� ������ ������ ����
	struct Node* right; // ������ �ڽ��� ������ ������ ����
}BinNode;

// show(), ����, ����, ����
// ���� ��ȸ : ���ι湮, �����ڽ�, �������ڽ�
void preShow(BinNode* node);

// ���� ��ȸ : �����ڽ�, ���ι湮, ������ �ڽ�
// ����Ž��Ʈ������ �ֿ��� ��ȸ�� ����ϸ� ���ĵ� ������� Ž���� �� �ִ�.
void midShow(BinNode* node);

//���� ��ȸ : �����ڽ�, �������ڽ�, ���ι湮
void postShow(BinNode* node);

//�߰�
BinNode* add(BinNode* root, int element);

//����
void removeElement(BinNode* node, int element);

//�˻�
void search(BinNode* root, int element);
//����Լ��� �˻�
void search_r(BinNode* node, int element);

int main() {
	BinNode* root;
	root = NULL;
	root = add(root, 10); // ���ֿ� ���Ե� �����Ͱ� root ��尡 �ȴ�.

	add(root, 5);
	add(root, 7);
	add(root, 15);
	add(root, 13);
	add(root, 11);
	add(root, 12);
	printf("���� ��ȸ : ");
	preShow(root);
	printf("\n");
	printf("���� ��ȸ : ");
	midShow(root);
	printf("\n");
	//printf("���� ��ȸ : ");
	//postShow(root);
	//printf("\n");
	removeElement(root, 7);
	removeElement(root, 13);
	removeElement(root, 5);
	printf("���� ��ȸ : ");
	midShow(root);
	printf("\n");
	search(root, 12);
	search(root, 100);
	printf("\n");
	search_r(root, 10);

	return 0;
}

//���� ��ȸ : ���ι湮, ���� �ڽ�, ������ �ڽ�
void preShow(BinNode* node) {
	if (node != NULL) {
		printf("[%d] ", node->data);
		preShow(node->left);
		preShow(node->right);
	}
}

void midShow(BinNode*node) {
	if (node != NULL) {
		midShow(node->left);
		printf("[%d] ", node->data);
		midShow(node->right);
	}
}

void postShow(BinNode* node) {
	if (node != NULL) {
		postShow(node->left);
		postShow(node->right);
		printf("[%d] ",node->data);
	}
}



// �߰�
BinNode* add(BinNode* root, int element) {
	if (root == NULL) { // ����ִ� Ʈ�����
		// �߰��ϰ��� �ϴ� ��尡 root��尡 �� ���̴�.
		root = (BinNode*)malloc(sizeof(BinNode));
		root->data = element;
		root->left = NULL;
		root->right = NULL;
	}
	else if (root->data==element) {
		printf("ERROR!! �ߺ��� �Է� �Ұ�\n");
	}
	else if (root->data < element) {
		root->right = add(root->right, element);
	}
	else if (root->data > element) {
		root->left = add(root->left, element);
	}

	return root;
};


// ����
void removeElement(BinNode* node, int element) {
	if (node == NULL) { // ����ִ� Ʈ�����
		printf("ERROR!! Ʈ���� ����ֽ��ϴ�. ������ ��尡 �����ϴ�.\n");
		return;
	}

	//������ ��� ã��
	BinNode* curr = node; // ������ ��带 ����� ����
	BinNode* parent = NULL;
	BinNode* child = NULL;

	while (curr != NULL) {
		if (curr->data < element) { // ���� ��庸�� �����ϰ��� �ϴ� ��Ұ� �� ũ�ٸ�
			parent = curr;
			curr = curr->right; // �����ʿ��� ��� ����
		}
		else if (curr->data > element) { // ���� ��庸�� �����ϰ��� �ϴ� ��Ұ� �� �۴ٸ�
			parent = curr;
			curr = curr->left;
		}
		else { // ã�Ҵٸ�.
			break;
		}
	}
	// �����ϰ��� �ϴ� ��带 ã�� ���ߴٸ� curr���� NULL ���� ����ִ�.
	if (curr == NULL) {
		printf("ERROR!! ������ �� �����ϴ�. �ش� ��带 ã�� ���߽��ϴ�.");
		return;
	}

	//�����ϰ��� �ϴ� ��尡 ���������
	if (curr->left == NULL && curr->right == NULL) { // ���������
		if (parent == NULL) { // ��������̸鼭 ��Ʈ�� ���
			node = NULL;
		}
		else { // ��������̸鼭 ��Ʈ�� �ƴ� ���
			if (parent->right == curr) {
				parent->right = NULL;
			}
			else {
				parent->left = NULL;
			}
		}
	}

	// ���� �����ϰ��� �ϴ� ��尡 �ڽ� 1���� ������ �ִٸ�.
	else if (curr->left == NULL || curr->right == NULL) {
		if (curr->left != NULL) { // ������ ��尡 ���� �ڽĸ� ���� ���
			child = curr->left;
		}
		else { // ������ ��尡 ������ �ڽĸ� ���� ���
			child = curr->right;
		}

		if (parent == NULL) { // �ڽ��� �ϳ��� ��Ʈ�� �����ϰ��� �ϴ� ���
			node = child;
		}
		else {
			if (curr == parent->right) { // �θ��� ������ �ڽ��̶��
				parent->right = child;
			}
			else { // �θ��� �����ڽ��̶��
				parent->left = child;
			}
		}
	}

	//�����ϰ��� �ϴ� ��尡 �ڽ� 2���� ������ �ִٸ�
	else {
		BinNode* s_parent = curr; // ����� �θ���
		BinNode* s = curr->left;

		//����� ��带 ã�Ƽ� s�� ����ش�.
		//���� ����Ʈ������ �ִ밪 ã��

		while (s->right != NULL) {
			s_parent = s;
			s = s->right;
		}
		//while���� ������
		//s���� ����� ��尡, s_parent���� ����� ����� �θ� ����ִ�.
		//s�� ��� ���� curr->data�� �Ű��ش�.
		curr->data = s->data; // �θ��带 ������ ��� �� �θ����� �ڸ��� �ڽĳ��� �� �ִ��� �������ִ� �ڵ�
		// ����� ����� �θ��� �ڽ��� NULL������ �ٲپ��ְ�
		s_parent->right = NULL;
		curr = s;
	}
}

//�˻�,�ݺ���
void search(BinNode * root, int element) {
	BinNode* curr = root; // ��Ʈ���� �˻�����
	while (curr!=NULL) {
		if (element < curr->data) {
			curr = curr->left; // �������� �������鼭 ��� Ž��
		}
		else if (element > curr->data) {
			curr = curr->right;
		}
		else {// ���ٸ�
			break;
		}
	}
	// while���� ����Ǹ�, curr���� ���� ã�� ���� ���� Node �Ǵ� NULL�� �� ���� ���̴�.
	if (curr == NULL) {
		printf("ERROR!! �ش� ��带 ã�� �� �����ϴ�.");
		return;
	}
	// �� if���� �ɸ��� �ʾҴٸ�, �ش��带 ã�Ҵٴ� �ǹ��̹Ƿ�
	printf("�ش� ��� %d�� ã�ҽ��ϴ�!\n", curr->data);
}

	//�˻�,����Լ�
void search_r(BinNode* node, int element) {
	if (node == NULL) {
		printf("�ش� ��尡 �˻����� �ʾҽ��ϴ�.\n");
		return;
	}
	else if (node->data < element) {
		search_r(node->right, element);
	}
	else if (node->data > element) {
		search_r(node->left, element);
	}
	else {
		printf("�ش� ��� %d�� ã�ҽ��ϴ�!\n", node->data);
	}
}