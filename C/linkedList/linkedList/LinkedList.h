#pragma once

// ���Ḯ��Ʈ ������ ��� ����
typedef struct ListNode {
	char data[4];
	struct ListNode* pLink;
}listNode;

typedef struct {
	listNode* head;
}linkedList_h;

linkedList_h* createLinkedList(void);
void insertFirstNode(linkedList_h* L, char x);
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x);
void insertLastNode(linkedList_h* L, char* x);
void printList(linkedList_h* L);