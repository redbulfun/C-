#pragma once
#ifndef _MERGESORTRECIPE_H
#define _MERGESORTRECIPE_H
#define _CRT_SECURE_NO_WARNINGS
#include"class.h"
// �ָ�����
void splitRecipe(recipe* source, recipe** front, recipe** back)
{
    recipe* fast;
    recipe* slow;

    if (source == NULL || source->next == NULL)
    {
        *front = source;
        *back = NULL;
    }
    else
    {
        slow = source;
        fast = source->next;

        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                slow = slow->next;
                fast = fast->next;
            }
        }

        *front = source;
        *back = slow->next;
        slow->next = NULL;
    }
}

//�Բ�Ʒ�۸������������

// �ϲ���������������������
void r_mergeUpper(recipe** result, recipe* a, recipe* b)
{
    if (a == NULL)
    {
        *result = b;
        return;
    }
    if (b == NULL)
    {
        *result = a;
        return;
    }

    if (a->price <= b->price)
    {
        *result = a;
        r_mergeUpper((&(*result)->next), a->next, b);
    }
    else
    {
        *result = b;
        r_mergeUpper((&(*result)->next), a, b->next);
    }

}


// ʹ�ù鲢����������������
void r_mergeSortUpper(recipe** head)
{
    recipe* current = *head;
    recipe* a;
    recipe* b;

    if (current == NULL || current->next == NULL)
    {
        return;
    }

    splitRecipe(current, &a, &b);

    r_mergeSortUpper(&a);
    r_mergeSortUpper(&b);

    r_mergeUpper(head, a, b);
}

//�Բ�Ʒ�۸���н�������

// �ϲ�����������������
void r_mergeLower(recipe** result, recipe* a, recipe* b)
{
    if (a == NULL)
    {
        *result = b;
        return;
    }
    if (b == NULL)
    {
        *result = a;
        return;
    }

    if (a->price >= b->price)
    {
        *result = a;
        r_mergeLower((&(*result)->next), a->next, b);
    }
    else
    {
        *result = b;
        r_mergeLower((&(*result)->next), a, b->next);
    }

}

// ʹ�ù鲢����������������
void r_mergeSortLower(recipe** head)
{
    recipe* current = *head;
    recipe* a;
    recipe* b;

    if (current == NULL || current->next == NULL)
    {
        return;
    }

    splitRecipe(current, &a, &b);

    r_mergeSortLower(&a);
    r_mergeSortLower(&b);

    r_mergeLower(head, a, b);
}
#endif //_MERGESORTRECIPE_H