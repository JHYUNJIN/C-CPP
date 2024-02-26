#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data; // 실질적인 데이터가 저장될 멤버 변수
	struct Node* left; // 왼쪽 자식을 저장할 포인터 변수
	struct Node* right; // 오른쪽 자식을 저장할 포인터 변수
}BinNode;

// show(), 전위, 중위, 후위
// 전위 순회 : 본인방문, 왼쪽자식, 오른쪽자식
void preShow(BinNode* node);

// 중위 순회 : 왼쪽자식, 본인방문, 오른쪽 자식
// 이진탐색트리에서 주우이 순회를 사용하면 정렬된 순서대로 탐색할 수 있다.
void midShow(BinNode* node);

//후위 순회 : 왼쪽자식, 오른쪽자식, 본인방문
void postShow(BinNode* node);

//추가
BinNode* add(BinNode* root, int element);

//삭제
void removeElement(BinNode* node, int element);

//검색
void search(BinNode* root, int element);
//재귀함수로 검색
void search_r(BinNode* node, int element);

int main() {
	BinNode* root;
	root = NULL;
	root = add(root, 10); // 초최에 삽입된 데이터가 root 노드가 된다.

	add(root, 5);
	add(root, 7);
	add(root, 15);
	add(root, 13);
	add(root, 11);
	add(root, 12);
	printf("전위 순회 : ");
	preShow(root);
	printf("\n");
	printf("중위 순회 : ");
	midShow(root);
	printf("\n");
	//printf("후위 순회 : ");
	//postShow(root);
	//printf("\n");
	removeElement(root, 7);
	removeElement(root, 13);
	removeElement(root, 5);
	printf("중위 순회 : ");
	midShow(root);
	printf("\n");
	search(root, 12);
	search(root, 100);
	printf("\n");
	search_r(root, 10);

	return 0;
}

//전위 순회 : 보인방문, 왼쪽 자식, 오른쪽 자식
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



// 추가
BinNode* add(BinNode* root, int element) {
	if (root == NULL) { // 비어있는 트리라면
		// 추가하고자 하는 노드가 root노드가 될 것이다.
		root = (BinNode*)malloc(sizeof(BinNode));
		root->data = element;
		root->left = NULL;
		root->right = NULL;
	}
	else if (root->data==element) {
		printf("ERROR!! 중복값 입력 불가\n");
	}
	else if (root->data < element) {
		root->right = add(root->right, element);
	}
	else if (root->data > element) {
		root->left = add(root->left, element);
	}

	return root;
};


// 삭제
void removeElement(BinNode* node, int element) {
	if (node == NULL) { // 비어있는 트리라면
		printf("ERROR!! 트리가 비어있습니다. 삭제할 노드가 없습니다.\n");
		return;
	}

	//삭제할 노드 찾기
	BinNode* curr = node; // 삭제할 노드를 담아줄 변수
	BinNode* parent = NULL;
	BinNode* child = NULL;

	while (curr != NULL) {
		if (curr->data < element) { // 현재 노드보다 삭제하고자 하는 요소가 더 크다면
			parent = curr;
			curr = curr->right; // 오른쪽에서 계속 진행
		}
		else if (curr->data > element) { // 현재 노드보다 삭제하고자 하는 요소가 더 작다면
			parent = curr;
			curr = curr->left;
		}
		else { // 찾았다면.
			break;
		}
	}
	// 삭제하고자 하는 노드를 찾지 못했다면 curr에는 NULL 값이 들어있다.
	if (curr == NULL) {
		printf("ERROR!! 삭제할 수 없습니다. 해당 노드를 찾지 못했습니다.");
		return;
	}

	//삭제하고자 하는 노드가 리프노드라면
	if (curr->left == NULL && curr->right == NULL) { // 리프노드라면
		if (parent == NULL) { // 리프노드이면서 루트일 경우
			node = NULL;
		}
		else { // 리프노드이면서 루트가 아닐 경우
			if (parent->right == curr) {
				parent->right = NULL;
			}
			else {
				parent->left = NULL;
			}
		}
	}

	// 만약 삭제하고자 하는 노드가 자식 1개를 가지고 있다면.
	else if (curr->left == NULL || curr->right == NULL) {
		if (curr->left != NULL) { // 삭제할 노드가 왼쪽 자식만 가진 경우
			child = curr->left;
		}
		else { // 삭제할 노드가 오른쪽 자식만 가진 경우
			child = curr->right;
		}

		if (parent == NULL) { // 자식이 하나인 루트를 삭제하고자 하는 경우
			node = child;
		}
		else {
			if (curr == parent->right) { // 부모의 오른쪽 자식이라면
				parent->right = child;
			}
			else { // 부모의 왼쪽자식이라면
				parent->left = child;
			}
		}
	}

	//삭제하고자 하는 노드가 자식 2개를 가지고 있다면
	else {
		BinNode* s_parent = curr; // 계승할 부모노드
		BinNode* s = curr->left;

		//계승할 노드를 찾아서 s에 담아준다.
		//왼쪽 서브트리에서 최대값 찾기

		while (s->right != NULL) {
			s_parent = s;
			s = s->right;
		}
		//while문이 끝나면
		//s에는 계승할 노드가, s_parent에는 계승할 노드의 부모가 들어있다.
		//s에 담긴 값을 curr->data에 옮겨준다.
		curr->data = s->data; // 부모노드를 삭제할 경우 그 부모노드의 자리에 자식노드들 중 최댓값을 대입해주는 코드
		// 계승할 노드의 부모의 자식을 NULL값으로 바꾸어주고
		s_parent->right = NULL;
		curr = s;
	}
}

//검색,반복문
void search(BinNode * root, int element) {
	BinNode* curr = root; // 루트부터 검색시작
	while (curr!=NULL) {
		if (element < curr->data) {
			curr = curr->left; // 왼쪽으로 내려가면서 계속 탐색
		}
		else if (element > curr->data) {
			curr = curr->right;
		}
		else {// 같다면
			break;
		}
	}
	// while문이 종료되면, curr에는 내가 찾는 값을 가진 Node 또는 NULL이 들어가 있을 것이다.
	if (curr == NULL) {
		printf("ERROR!! 해당 노드를 찾을 수 없습니다.");
		return;
	}
	// 위 if문에 걸리지 않았다면, 해당노드를 찾았다는 의미이므로
	printf("해당 노드 %d를 찾았습니다!\n", curr->data);
}

	//검색,재귀함수
void search_r(BinNode* node, int element) {
	if (node == NULL) {
		printf("해당 노드가 검색되지 않았습니다.\n");
		return;
	}
	else if (node->data < element) {
		search_r(node->right, element);
	}
	else if (node->data > element) {
		search_r(node->left, element);
	}
	else {
		printf("해당 노드 %d를 찾았습니다!\n", node->data);
	}
}