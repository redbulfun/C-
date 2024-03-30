#pragma once
#ifndef CLASSTREE_H
#define CLASSTREE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �˵����ڵ�
typedef struct t_recipe
{
    recipe* r_node;

    struct t_recipe* left;
    struct t_recipe* right;
} t_recipe;
// �������ڵ�
typedef struct t_order
{
    order* o_node;

    struct t_order* left;
    struct t_order* right;
}t_order;
// �̼����ڵ�
typedef struct t_Merchant
{
    Merchant* M_node;

    struct t_Merchant* left;
    struct t_Merchant* right;
}t_Merchant;

//������
// �����µĲ˵����ڵ�(�Ѽ��飩
t_recipe* creatTree_recipe(recipe* example);
// �����µĶ������ڵ�
t_order* creatTree_order(order* example);
// �����µ��̼����ڵ�
t_Merchant* creatTree_Merchant(Merchant* example);

//����ڵ�
// �Բ�Ʒ����Ϊ�жϱ�׼��˵����в���ڵ㣨�Ѽ��飩
void insertTree_recipe_name(t_recipe** root, recipe* insert);
// �Զ����Ķ�����Ϊ�жϱ�׼�򶩵����в���ڵ�
void insertTree_order_id(t_order** root, order* insert);
// ���̼�����Ϊ�жϱ�׼���̼����в���ڵ�
void insertTree_Merchant_name(t_Merchant** root, Merchant* insert);

//ɾ���ڵ�
// �Բ�Ʒ����Ϊ�жϱ�׼�Ӳ˵�����ɾ���ڵ㣨�Ѽ��飩
void delete_recipe_name(t_recipe** root, char* name);
// �Զ�����Ϊ�жϱ�׼�Ӷ�������ɾ���ڵ�
void delete_order_id(t_order** root, char* order_id);
// ���̼�����Ϊ�жϱ�׼���̼�����ɾ���ڵ�
void delete_Merchant_name(t_Merchant** root, char* name);





#endif