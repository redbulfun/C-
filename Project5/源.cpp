#include<stdio.h>
#include"��ͷ.h"
void x();
int main()
{
	struct List l = { "hongshaorou",10 };
	printf_s("%s\t%d",l.name,l.price);
	x();
	return 0;
}