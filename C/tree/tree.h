#pragma once
typedef char element;
typedef struct treeNode {
	element data;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;



treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode);
void preOrder(treeNode* root); // ���� ��ȸ �Լ�
void inOrder(treeNode* root); // ���� ��ȸ
void postOrder(treeNode* root); // ���� ��ȸ
