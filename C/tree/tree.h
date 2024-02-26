#pragma once
typedef char element;
typedef struct treeNode {
	element data;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;



treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode);
void preOrder(treeNode* root); // 전위 순회 함수
void inOrder(treeNode* root); // 중위 순회
void postOrder(treeNode* root); // 후위 순회
