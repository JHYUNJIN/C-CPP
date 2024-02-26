#include<stdio.h>
#include"queueA.h"
int main(void) {
	QueueType* Q1 = createQueue();  // 큐 생성
	element data;

	printf(" 삽입 A >> "); enqueue(Q1, 'A'); printf(Q1);
	printf(" 삽입 B >> "); enqueue(Q1, 'B'); printf(Q1);
	printf(" 삽입 C >> "); enqueue(Q1, 'C'); printf(Q1);

	printf(" 삭제 >> "); data=dequeue(Q1); printf(Q1);
	printf(" 삭제 >> "); data=dequeue(Q1); printf(Q1);
	printf(" 삭제 >> "); data=dequeue(Q1); printf(Q1);

	printf(" 삽입 D >> "); enqueue(Q1, 'D'); printf(Q1);
	printf(" 삽입 E >> "); enqueue(Q1, 'E'); printf(Q1);
	printf(" 삽입 F >> "); enqueue(Q1, 'F'); printf(Q1);

	//getchar();
	return 0;


}


