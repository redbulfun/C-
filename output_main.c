#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include"class.h"
#include"mergeSortRecipe.h"
#include"output_recipe_price_range.h"

int main() {
    // ����һЩ��Ʒ�ڵ�
    recipe* dish1 = (recipe*)malloc(sizeof(recipe));
    strcpy(dish1->name, "������˿");
    dish1->price = 25.0;
    dish1->next = NULL;

    recipe* dish2 = (recipe*)malloc(sizeof(recipe));
    strcpy(dish2->name, "��������");
    dish2->price = 30.0;
    dish2->next = NULL;

    recipe* dish3 = (recipe*)malloc(sizeof(recipe));
    strcpy(dish3->name, "������");
    dish3->price = 35.0;
    dish3->next = NULL;

    // ������Ʒ����
    dish1->next = dish2;
    dish2->next = dish3;

    // ��ӡ�����˵�
    printf("�����˵���\n");
    recipe* current = dish1;
    while (current != NULL) {
        printf("��Ʒ���ƣ�%s\t�۸�%.2f\n", current->name, current->price);
        current = current->next;
    }

    // ��ӡ�۸������ڵĲ�Ʒ���ӵ͵���
    printf("\n�۸������ڵĲ�Ʒ���ӵ͵��ߣ�30-35����\n");
    output_recipe_low_to_high(dish1, 30.0, 35.0);

    // ��ӡ�۸������ڵĲ�Ʒ���Ӹߵ���
    printf("\n�۸������ڵĲ�Ʒ���Ӹߵ��ͣ�30-35����\n");
    output_recipe_high_to_low(dish1, 30.0, 35.0);

    // �ͷ��ڴ�
    free(dish1);
    free(dish2);
    free(dish3);

    return 0;
}

