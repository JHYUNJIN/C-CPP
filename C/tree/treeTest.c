#include<stdio.h>
#include<stdlib.h>
#include"tree.h"

void main() {
	// A*B-C/D 수식을 트리로 만들어보기
	treeNode* n7 = makeRootNode('D', NULL, NULL);
	treeNode* n6 = makeRootNode('C', NULL, NULL);
	treeNode* n5 = makeRootNode('B', NULL, NULL);
	treeNode* n4 = makeRootNode('A', NULL, NULL);
	treeNode* n3 = makeRootNode('/', n6, n7);
	treeNode* n2 = makeRootNode('*', n4, n5);
	treeNode* n1 = makeRootNode('-', n2, n3);
	
	printf("\n전위 순회 : ");
	preOrder(n1);

	printf("\n중위 순회 : ");
	inOrder(n1);

	printf("\n후위 순회 : ");
	postOrder(n1);

	getchar();
	return 0;


}