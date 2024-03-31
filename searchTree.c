#define _CRT_SECURE_NO_WARNINGS
#include "classTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�Բ�Ʒ����Ϊ�жϱ�׼�Ӳ˵����в��ҽڵ�,���ز�Ʒ�����еĽڵ�
recipe* search_recipe_name(t_recipe* root, const char* recipe_name) {
    //������ڵ�Ϊ�գ����߲�Ʒ����Ϊ�գ����ؿ�ָ��
    if (root == NULL || recipe_name == NULL) {
        return NULL;
    }
    //ѭ�������˵����ڵ�
    while (root != NULL) {
        //����ҵ�ƥ��Ĳ�Ʒ���ƣ����ز�Ʒ�ڵ�
        if (strcmp(recipe_name, root->r_node->name) == 0) {
            return root->r_node;
        }
        else if (strcmp(recipe_name, root->r_node->name) < 0) {
            root = root->left;
        }
        else //strcmp(recipe_name, root->r_node->name) > 0
        {
            root = root->right;
        }
    }
    // ���δ�ҵ�ƥ��Ĳ�Ʒ���ƣ����ؿ�ָ��
    return NULL;
}
//�Զ�����Ϊ�жϱ�׼�Ӷ������в��ҽڵ�,���ض��������еĽڵ�
order* search_order_id(t_order* root, const char* order_id) {
    //������ڵ�Ϊ�գ����߶�����Ϊ�գ����ؿ�ָ��
    if (root == NULL || order_id == NULL) {
        return NULL;
    }
    //ѭ���������ڵ�
    while (root != NULL) {
        //����ҵ�ƥ��Ķ����ţ����ض����ڵ�
        if (strcmp(order_id, root->o_node->order_id) == 0) {
            return root->o_node;
        }
        else if (strcmp(order_id, root->o_node->order_id) < 0) {
            root = root->left;
        }
        else //strcmp(order_id, root->o_node->order_id)>0
        {
            root = root->right;
        }
    }
    // ���δ�ҵ�ƥ��Ķ����ţ����ؿ�ָ��
    return NULL;
}
// ���̼�����Ϊ�жϱ�׼���̼����в��ҽڵ�,�����̼������еĽڵ�
Merchant* search_Merchant_name(t_Merchant* root, const char* Merchant_name)
{
    //������ڵ�Ϊ�գ������̼�����Ϊ�գ����ؿ�ָ��
    if (root == NULL || Merchant_name == NULL) {
        return NULL;
    }
    //ѭ���������ڵ�
    while (root != NULL) {
        //����ҵ�ƥ����̼����ƣ������̼ҽڵ�
        if (strcmp(Merchant_name, root->M_node->name) == 0) {
            return root->M_node;
        }
        else if (strcmp(Merchant_name, root->M_node->name) < 0) {
            root = root->left;
        }
        else //strcmp(Merchant_name, root->M_node->name)>0
        {
            root = root->right;
        }
    }
    // ���δ�ҵ�ƥ����̼����ƣ����ؿ�ָ��
    return NULL;
}