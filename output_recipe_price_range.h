#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include"class.h"
#include"mergeSortRecipe.h"

//���۸�Ӹߵ��������Ʒ
bool output_recipe_high_to_low(recipe* head, float minPrice, float maxPrice)
{
    //����boolֵflag���ж��Ƿ�ɹ����
    //����true���������۸��������в�Ʒ������false��������������޲�Ʒ
    bool flag = false;
    // ���ȶԲ�Ʒ����Ӹߵ�������
    r_mergeSortLower(&head);
    // ������������ڼ۸������ڵĲ�Ʒ����
    recipe* current = head;
    while (current != NULL && current->price >= minPrice) {
        if (current->price <= maxPrice)
        {
            printf("��Ʒ���ƣ�%s\t�۸�%.2f\n", current->name, current->price);
            flag = true;
        }
        current = current->next;
    }
    return flag;
}
//���۸�ӵ͵��������Ʒ
void output_recipe_low_to_high(recipe* head, float minPrice, float maxPrice) 
{
    //����boolֵflag���ж��Ƿ�ɹ����
    //����true���������۸��������в�Ʒ������false��������������޲�Ʒ
    bool flag = false;
    // ���ȶԲ�Ʒ����ӵ͵�������
    r_mergeSortUpper(&head);
    // ������������ڼ۸������ڵĲ�Ʒ����
    recipe* current = head;
    while (current != NULL && current->price <= maxPrice) {
        if (current->price >= minPrice) {
            printf("��Ʒ���ƣ�%s\t�۸�%.2f\n", current->name, current->price);
            flag = true;
        }
        current = current->next;
    }
    return flag;
}