#define _CRT_SECURE_NO_WARNINGS
#include "class.h"

//�󵥸��������ۺ��
void sumPrice(order* head, recipe* head_r, enum card c, double* d)
{
	head->sum_price = 0;
	while (head_r != NULL)
	{
		head->sum_price = head->sum_price + head_r->price;
		head_r = head_r->next;
	}
	head->sum_price = head->sum_price * d[c];
}