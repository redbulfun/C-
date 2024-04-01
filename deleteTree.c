#define _CRT_SECURE_NO_WARNINGS
#include "classTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// �Բ�Ʒ����Ϊ�жϱ�׼�Ӳ˵�����ɾ���ڵ㣨�Ѽ��飩
bool delete_recipe_name(t_recipe** root, char* name) {
    if (*root == NULL) {
        return FALSE;
    }

    if (strcmp(name, (*root)->r_node->name) < 0) {
        delete_recipe_name(&((*root)->left), name);
    }
    else if (strcmp(name, (*root)->r_node->name) > 0) {
        delete_recipe_name(&((*root)->right), name);
    }
    else // �ҵ���Ҫɾ���Ľڵ�
    {
        t_order* temp;
        // û���ӽڵ��ֻ��һ���ӽڵ�����
        if ((*root)->left == NULL) {
            temp = *root;
            *root = (*root)->right;
            free(temp);
            return TRUE;
        }
        else if ((*root)->right == NULL) {
            temp = *root;
            *root = (*root)->left;
            free(temp);
            return TRUE;
        }
        else
        {
            // �������ӽڵ��������ҵ�����������С�Ľڵ������ǰ�ڵ�
            t_recipe* minValueNode = (*root)->right;
            while (minValueNode->left != NULL)
            {
                minValueNode = minValueNode->left;
            }
            strcpy((*root)->r_node->name, minValueNode->r_node->name);
            delete_recipe_name(&((*root)->right), minValueNode->r_node->name);
        }
    }
}
// �Զ�����Ϊ�жϱ�׼�Ӷ�������ɾ���ڵ�
bool delete_order_id(t_order** root, char* order_id) {
    if (*root == NULL) {
        return FALSE;
    }

    if (strcmp(order_id, (*root)->o_node->order_id) < 0) {
        delete_order_id(&((*root)->left), order_id);
    }
    else if (strcmp(order_id, (*root)->o_node->order_id) > 0) {
        delete_order_id(&((*root)->right), order_id);
    }
    else // �ҵ���Ҫɾ���Ľڵ�
    {
        t_order* temp;
        // û���ӽڵ��ֻ��һ���ӽڵ�����
        if ((*root)->left == NULL) {
            temp = *root;
            *root = (*root)->right;
            free(temp);
            return TRUE;
        }
        else if ((*root)->right == NULL) {
            temp = *root;
            *root = (*root)->left;
            free(temp);
            return TRUE;
        }
        else
        {
            // �������ӽڵ��������ҵ�����������С�Ľڵ������ǰ�ڵ�
            t_order* minValueNode = (*root)->right;
            while (minValueNode->left != NULL)
            {
                minValueNode = minValueNode->left;
            }
            strcpy((*root)->o_node->order_id, minValueNode->o_node->order_id);
            delete_order_id(&((*root)->right), minValueNode->o_node->order_id);
        }
    }
}
// ���̼�����Ϊ�жϱ�׼���̼�����ɾ���ڵ�
bool delete_Merchant_name(t_Merchant** root, char* name) {
    if (*root == NULL) {
        return FALSE;
    }

    if (strcmp(name, (*root)->M_node->name) < 0) {
        delete_Merchant_name(&((*root)->left), name);
    }
    else if (strcmp(name, (*root)->M_node->name) > 0) {
        delete_Merchant_name(&((*root)->right), name);
    }
    else // �ҵ���Ҫɾ���Ľڵ�
    {
        t_order* temp;
        // û���ӽڵ��ֻ��һ���ӽڵ�����
        if ((*root)->left == NULL) {
            temp = *root;
            *root = (*root)->right;
            free(temp);
            return TRUE;
        }
        else if ((*root)->right == NULL) {
            temp = *root;
            *root = (*root)->left;
            free(temp);
            return TRUE;
        }
        else
        {
            // �������ӽڵ��������ҵ�����������С�Ľڵ������ǰ�ڵ�
            t_Merchant* minValueNode = (*root)->right;
            while (minValueNode->left != NULL)
            {
                minValueNode = minValueNode->left;
            }
            strcpy((*root)->M_node->name, minValueNode->M_node->name);
            delete_Merchant_name(&((*root)->right), minValueNode->M_node->name);
        }
    }
}
