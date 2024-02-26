#include<stdio.h>
#include<stdlib.h>
#include"tree.h"

// ��Ʈ��带 �������� ����, ������ ���� Ʈ�� ����
treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode) {
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
	root->data=data;
	root->left=leftNode;
	root->right=rightNode;

	return root;
}

//������ȸ (D->L->R)
void preOrder(treeNode* root) {
	if (root) {
		printf("%c",root->data); // D �����۾����
		preOrder(root->left); // L
		preOrder(root->right); // R
	}
}
//������ȸ(L->D->R)
void inOrder(treeNode* root) {
	if (root) {
		inOrder(root->left); // L
		printf("%c", root->data);
		inOrder(root->right); // R

	}
}
//������ȸ(L->R->D)
void postOrder(treeNode* root) {
	if (root) {
		postOrder(root->left);
		postOrder(root->right);
		printf("%c", root->data);
	}
}

