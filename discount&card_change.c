#define _CRT_SECURE_NO_WARNINGS
#include "class.h"

//���Ļ�Ա�ۿ�
void discount_change(double* d, enum card c)
{
	double n = 0;
	scanf("%lf", &n);
	d[c] = n;
}


//�����û���Ա����
void card_class_change(User* head, int n)
{
	User* current = head;
	char n[100] = { "\n" };
	scanf("%s", n);
	while (current != NULL)
	{
		if (strcmp(current->name, n) == 0)
		{
			break;
		}
		else
		{
			current = current->next;
		}
	}
	if (current == NULL)
	{
		printf("���˻������ڣ�\n");
		return;
	}
	else
	{
		current->card_class = n;
	}
}