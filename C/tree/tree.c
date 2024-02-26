#include<stdio.h>
#include<stdlib.h>
#include"tree.h"

// 루트노드를 기준으로 왼쪽, 오른쪽 서브 트리 연결
treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode) {
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
	root->data=data;
	root->left=leftNode;
	root->right=rightNode;

	return root;
}

//전위순회 (D->L->R)
void preOrder(treeNode* root) {
	if (root) {
		printf("%c",root->data); // D 현재작업노드
		preOrder(root->left); // L
		preOrder(root->right); // R
	}
}
//중위순회(L->D->R)
void inOrder(treeNode* root) {
	if (root) {
		inOrder(root->left); // L
		printf("%c", root->data);
		inOrder(root->right); // R

	}
}
//후위순회(L->R->D)
void postOrder(treeNode* root) {
	if (root) {
		postOrder(root->left);
		postOrder(root->right);
		printf("%c", root->data);
	}
}

