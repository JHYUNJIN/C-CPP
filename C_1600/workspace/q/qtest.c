#include<stdio.h>
#include"q.h"
void main() {
	QueueType* Q1 = createQueue();  // ť ����
	element data;

	printf(" ���� A >> "); enqueue(Q1, 'A'); printf(Q1);
	printf(" ���� B >> "); enqueue(Q1, 'B'); printf(Q1);
	printf(" ���� C >> "); enqueue(Q1, 'C'); printf(Q1);

	printf(" ���� >> "); data = dequeue(Q1); printf(Q1);
	printf(" ���� >> "); data = dequeue(Q1); printf(Q1);
	printf(" ���� >> "); data = dequeue(Q1); printf(Q1);

	printf(" ���� D >> "); enqueue(Q1, 'D'); printf(Q1);
	printf(" ���� E >> "); enqueue(Q1, 'E'); printf(Q1);
	printf(" ���� F >> "); enqueue(Q1, 'F'); printf(Q1);

	//getchar();
	return 0;


}


