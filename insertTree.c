#define _CRT_SECURE_NO_WARNINGS
#include "classTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// �Բ�Ʒ����Ϊ�жϱ�׼��˵����в���ڵ㣨�Ѽ��飩
bool insertTree_recipe_name(t_recipe** root, recipe* insert) {
    if (*root == NULL) {
        *root = creatTree_recipe(insert);
        return TRUE;
    }
    // �ݹ�Ѱ�Ҳ���λ��
    t_recipe* current = *root;
    while (1) {
        if (strcmp((insert)->name, current->r_node->name) < 0) {
            // �����Ʒ������С�ڵ�ǰ�ڵ��Ʒ������
            if (current->left == NULL) {
                // ��������Ϊ��ʱ�������½ڵ㲢�������������
                current->left = creatTree_recipe(insert);
                return TRUE;
            }
            else {
                current = current->left;
            }
        }
        else { // strcmp((*insert)->name, current->r_node->name) > 0
            // �����Ʒ�����ƴ��ڵ�ǰ�ڵ��Ʒ������
            if (current->right == NULL) {
                // ��������Ϊ��ʱ�������½ڵ㲢�������������
                current->right = creatTree_recipe(insert);
                return TRUE;
            }
            else {
                current = current->right;
            }
        }
    }
}
// �Զ����Ķ�����Ϊ�жϱ�׼�򶩵����в���ڵ�
bool insertTree_order_id(t_order** root, order* insert) {
    if (*root == NULL) {
        *root = creatTree_order(insert);
        return TRUE;
    }
    // �ݹ�Ѱ�Ҳ���λ��
    t_order* current = *root;
    while (1)
    {
        if (strcmp((insert)->order_id, current->o_node->order_id) < 0)
        {
            // ���붩���Ķ�����С�ڵ�ǰ�ڵ㶩���Ķ�����
            if (current->left == NULL)
            {
                // ��������Ϊ��ʱ�������½ڵ㲢�������������
                current->left = creatTree_order(insert);
                return TRUE;
            }
            else
            {
                current = current->left;
            }
        }
        else // strcmp((insert)->order_id, current->o_node->order_id) > 0
        {
            // ���붩���Ķ����Ŵ��ڵ�ǰ�ڵ㶩���Ķ�����
            if (current->right == NULL) {
                // ��������Ϊ��ʱ�������½ڵ㲢�������������
                current->right = creatTree_order(insert);
                return TRUE;
            }
            else {
                current = current->right;
            }
        }
    }
}
// ���̼�����Ϊ�жϱ�׼���̼����в���ڵ�
bool insertTree_Merchant_name(t_Merchant** root, Merchant* insert) {
    if (*root == NULL) {
        *root = creatTree_Merchant(insert);
        return TRUE;
    }
    // �ݹ�Ѱ�Ҳ���λ��
    t_Merchant* current = *root;
    while (1)
    {
        if (strcmp((insert)->name, current->M_node->name) < 0)
        {
            // ������̼�����С�ڵ�ǰ�ڵ���̼�����
            if (current->left == NULL)
            {
                // ��������Ϊ��ʱ�������½ڵ㲢�������������
                current->left = creatTree_Merchant(insert);
                return TRUE;
            }
            else
            {
                current = current->left;
            }
        }
        else // strcmp((insert)->name, current->M_node->name) > 0
        {
            // ������̼����ƴ��ڵ�ǰ�ڵ���̼�����
            if (current->right == NULL) {
                // ��������Ϊ��ʱ�������½ڵ㲢�������������
                current->right = creatTree_Merchant(insert);
                return TRUE;
            }
            else {
                current = current->right;
            }
        }
    }
}