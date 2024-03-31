#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include"class.h"
#include"mergeSortRecipe.h"

//���۸�Ӹߵ��������Ʒ
void output_recipe_high_to_low(recipe* head, float minPrice, float maxPrice)
{
    // ���ȶԲ�Ʒ����Ӹߵ�������
    r_mergeSortLower(&head);
    // ������������ڼ۸������ڵĲ�Ʒ����
    recipe* current = head;
    while (current != NULL && current->price >= minPrice) {
        if (current->price <= maxPrice) 
        {
            printf("��Ʒ���ƣ�%s\t�۸�%.2f\n", current->name, current->price);
        }
        current = current->next;
    }
}
//���۸�ӵ͵��������Ʒ
void output_recipe_low_to_high(recipe* head, float minPrice, float maxPrice) {
    // ���ȶԲ�Ʒ����ӵ͵�������
    r_mergeSortUpper(&head);

    // ������������ڼ۸������ڵĲ�Ʒ����
    recipe* current = head;
    while (current != NULL && current->price <= maxPrice) {
        if (current->price >= minPrice) {
            printf("��Ʒ���ƣ�%s\t�۸�%.2f\n", current->name, current->price);
        }
        current = current->next;
    }
}