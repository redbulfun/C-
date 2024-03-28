#define _CRT_SECURE_NO_WARNINGS
#include"class.h"
#include<string.h>

//����������Ʒ�б�
void creatList_recipe_1(recipe** head, char* n, float p, int num)
{
    recipe* newNode = (recipe*)malloc(sizeof(recipe));   //�����½ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return;
    }

    strcpy(newNode->name, n);
    newNode->price = p;
    newNode->num = num;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        recipe* current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

//�����˵���Ĳ�Ʒ�б�
void creatList_recipe_2(recipe** head, char* n, float p)
{
    recipe* newNode = (recipe*)malloc(sizeof(recipe));   //�����½ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return;
    }

    strcpy(newNode->name, n);
    newNode->price = p;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        recipe* current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

//������Ʒ���б�
void creatList_r_classify(r_classify** head, char* n)
{
    r_classify* newNode = (r_classify*)malloc(sizeof(r_classify));//����ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return;
    }

    strcpy(newNode->name, n);
    newNode->r_head = NULL;

    //�Ƿ���Ӳ�Ʒ
    printf("1.��Ӳ�Ʒ\t2.�Ժ����\n");
    int flag = 0;//��־��
    scanf("%d", &flag);
    //��Ӳ�Ʒ
    if (flag == 1)
    {
        int i;
        for (i = 0;; i++)
        {
            char name[100];
            float price;
            printf("�������Ʒ���ƣ�");
            scanf("%s", name);
            if (name[0] == 0)
            {
                break;
            }
            printf("\n");
            printf("�������Ʒ�۸�");
            scanf("%f", price);
            printf("\n");
            creatList_recipe_2(&newNode->r_head, name, price);
        }
        newNode->total_number = i + 1;
    }

    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        r_classify* current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

//���������б�
void creatList_order(order** head, char* o_id, char* merchant_name, char* merchant_address, char* merchant_phone,
    char* deliver_name, char* deliver_phone, char* user_name, char* user_adderss, char* user_phone)
{
    order* newNode = (order*)malloc(sizeof(order));//����ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return;
    }

    strcpy(newNode->order_id, o_id);
    strcpy(newNode->m_name, merchant_name);
    strcpy(newNode->m_address, merchant_address);
    strcpy(newNode->m_phone, merchant_phone);
    strcpy(newNode->u_name, user_name);
    strcpy(newNode->u_address, user_adderss);
    strcpy(newNode->u_phone, user_phone);
    strcpy(newNode->d_name, deliver_name);
    strcpy(newNode->d_phone, deliver_phone);
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        order* current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

//�����̼�����
void creatList_merchant(Merchant** head, char* n, char* p, char* a, char* pn)
{
    Merchant* newNode = (Merchant*)malloc(sizeof(Merchant));//����ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return;
    }

    strcpy(newNode->name, n);
    strcpy(newNode->password, p);
    strcpy(newNode->address, a);
    strcpy(newNode->phone, pn);
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        Merchant* current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

//�����û�����
void creatList_user(User** head, char* n, char* p, char* a, char* pn)
{
    User* newNode = (User*)malloc(sizeof(User));//����ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return;
    }

    strcpy(newNode->name, n);
    strcpy(newNode->password, p);
    strcpy(newNode->address, a);
    strcpy(newNode->phone, pn);
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        User* current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

//��������Ա�б�
void creatList_deliveryperson(DeliveryPerson** head, char* n, char* p, char* pn)
{
    DeliveryPerson* newNode = (DeliveryPerson*)malloc(sizeof(DeliveryPerson));//����ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return;
    }

    strcpy(newNode->name, n);
    strcpy(newNode->password, p);
    strcpy(newNode->phone, pn);
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        DeliveryPerson* current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}