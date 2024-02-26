#include<stdio.h>
#include"q.h"
void main() {
	QueueType* Q1 = createQueue();  // Å¥ »ý¼º
	element data;

	printf(" »ðÀÔ A >> "); enqueue(Q1, 'A'); printf(Q1);
	printf(" »ðÀÔ B >> "); enqueue(Q1, 'B'); printf(Q1);
	printf(" »ðÀÔ C >> "); enqueue(Q1, 'C'); printf(Q1);

	printf(" »èÁ¦ >> "); data = dequeue(Q1); printf(Q1);
	printf(" »èÁ¦ >> "); data = dequeue(Q1); printf(Q1);
	printf(" »èÁ¦ >> "); data = dequeue(Q1); printf(Q1);

	printf(" »ðÀÔ D >> "); enqueue(Q1, 'D'); printf(Q1);
	printf(" »ðÀÔ E >> "); enqueue(Q1, 'E'); printf(Q1);
	printf(" »ðÀÔ F >> "); enqueue(Q1, 'F'); printf(Q1);

	//getchar();
	return 0;


}


