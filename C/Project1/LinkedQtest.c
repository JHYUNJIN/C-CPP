#include "LinkedQ.h"

int main(void) {
	LQueueType* LQ = createLinkedQueue();
	element data;
	printf("\n ���� A>>");  enLQueue(LQ, 'A'); printLQ(LQ);
	printf("\n ���� B>>");  enLQueue(LQ, 'B'); printLQ(LQ);
	printf("\n ���� C>>");  enLQueue(LQ, 'C'); printLQ(LQ);
	printf("\n ����  >>");  data = deLQueue(LQ); printLQ(LQ);
	printf("\t���� ������: %c", data);
	printf("\n ����  >>");  data = deLQueue(LQ); printLQ(LQ);
	printf("\t���� ������: %c", data);
	printf("\n ����  >>");  data = deLQueue(LQ); printLQ(LQ);
	printf("\t\t���� ������: %c", data);
	printf("\n ���� D>>");  enLQueue(LQ, 'D'); printLQ(LQ);
	printf("\n ���� E>>");  enLQueue(LQ, 'E'); printLQ(LQ);
	getchar();  return 0;
}