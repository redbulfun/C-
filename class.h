#pragma once

//�˵��ṹ��
typedef struct recipe
{
    char name[100];          //��Ʒ����
    float price;               //��Ʒ�۸�
    int num;                 //��Ʒ����

    struct recipe* next;
}recipe;






