//#define _CRT_SECURE_NO_WARNINGS 1
//void invert(struct Node* head) {
//	struct Node* p0, * p1, * temp, * p2;
//	p0 = head->next;
//	p1 = p0->next;
//	temp = p0;
//	while (p1 != NULL) {
//		p2 = p1->next;	//必须放在前面，否则死循环
//		p1->next = p0;
//		p0 = p1;
//		p1 = p2;
//	}
//	head->next = p0;
//	temp->next = NULL;
//
//}