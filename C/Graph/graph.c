#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

void createGraph(graphType* g) {
	int i, j;
	g->n = 0;
	for (i = 0; i < MAX_VERTEX; i++) {
		for (j = 0; j < MAX_VERTEX; j++)
			g->adjMatrix[i][j] = 0;	 // 30�� 30�� ��ο� 0�� ���� �־� ��		
	}
}

void insertVertex(graphType* g, int v) {
	if (((g->n) + 1) > MAX_VERTEX) {
		printf("\n �׷��� ������ ������ �ʰ�!");
		return;
	}
	g->n++;
}

void insertEdge(graphType* g, int u, int v) {
	if (u >= g->n || v >= g->n) {
		printf("\n �׷����� ���� ����");
		return;
	}
	g->adjMatrix[u][v] = 1;
}

void print_adjMatrix(graphType* g) {
	int i, j;
	for (i = 0; i < (g->n); i++) {
		printf("\n\t\t");
		for (j = 0; j < (g->n); j++)
			printf("%2d", g->adjMatrix[i][j]);
	}
}