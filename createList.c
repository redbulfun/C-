#define _CRT_SECURE_NO_WARNINGS
#include "class.h"

//����������Ʒ�б�
recipe* creatList_recipe_1(char* n, float p, int num)
{
    recipe* newNode = (recipe*)malloc(sizeof(recipe));   //�����½ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return NULL;
    }

    strcpy(newNode->name, n);
    newNode->price = p;
    newNode->num = num;
    newNode->next = NULL;

    return newNode;
}

//�����˵���Ĳ�Ʒ�б�
recipe* creatList_recipe_2(char* n, float p)
{
    recipe* newNode = (recipe*)malloc(sizeof(recipe));   //�����½ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return NULL;
    }

    strcpy(newNode->name, n);
    newNode->price = p;
    newNode->next = NULL;

    return newNode;
}

//���������б�
r_classify* creatList_r_classify(char* n)
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
    printf("Add recipes or not (Y/N):\t");
    char flag = getchar();//��ȡ����
    getchar();

    flag = upper(flag);//ת��Ϊ��д
    //��Ӳ�Ʒ
    if (flag == 'Y')
    {
        int i;
        for (i = 1;; i++)
        {
            char name[100];
            float price;
            printf("\nPlease enter the name of the recipe(q to quit):\t");
            scanf("%s", name);
            if (name[0] == 'q')
            {
                break;
            }

            // enter the price of the recipe
            printf("\nPlease enter the price of the recipe:\t");
            scanf("%f", price);
            printf("\n");
            newNode->r_head = creatList_recipe_2(name, price);
        }
        newNode->total_number = i;
    }
    else
    {
        newNode->total_number = 0;
        free(newNode);
        newNode = NULL;
        return NULL;
    }

    newNode->next = NULL;

    return newNode;
}

//���������б�
order* creatList_order(char* merchant_name, char* merchant_address, char* merchant_phone,
    char* deliver_name, char* deliver_phone, char* user_name, char* user_adderss, char* user_phone)
{
    order* newNode = (order*)malloc(sizeof(order));//����ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return NULL;
    }

    // initit order information
    strcpy(newNode->m_name, merchant_name);
    strcpy(newNode->m_address, merchant_address);
    strcpy(newNode->m_phone, merchant_phone);
    strcpy(newNode->u_name, user_name);
    strcpy(newNode->u_address, user_adderss);
    strcpy(newNode->u_phone, user_phone);
    strcpy(newNode->d_name, deliver_name);
    strcpy(newNode->d_phone, deliver_phone);
    set_time(newNode->localTime);
    strftime(newNode->order_id, sizeof(newNode->order_id), "%Y%m%d %H%M%S", newNode->localTime);
    for (int i = 7, j = strlen(newNode->order_id); i < 11; i++,j++)
    {
        
        newNode->order_id[j] = newNode->u_phone[i];
        
    }
    newNode->next = NULL;

    return newNode;
}

//�����̼�����
Merchant* creatList_merchant(char* n, char* p, char* a, char* pn)
{
    Merchant* newNode = (Merchant*)malloc(sizeof(Merchant));//����ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return NULL;
    }

    strcpy(newNode->name, n);
    strcpy(newNode->password, p);
    strcpy(newNode->address, a);
    strcpy(newNode->phone, pn);
    newNode->next = NULL;

    return newNode;
}

//�����û�����
User* creatList_user(char* n, char* p, char* a, char* pn)
{
    User* newNode = (User*)malloc(sizeof(User));//����ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return NULL;
    }

    strcpy(newNode->name, n);
    strcpy(newNode->password, p);
    strcpy(newNode->address, a);
    strcpy(newNode->phone, pn);
    newNode->next = NULL;

    return newNode;
}

//��������Ա�б�
DeliveryPerson* creatList_deliveryperson(char* n, char* p, char* pn)
{
    DeliveryPerson* newNode = (DeliveryPerson*)malloc(sizeof(DeliveryPerson));//����ڵ�ռ�

    //���ڵ��Ƿ�����ɹ�
    if (!newNode)
    {
        return NULL;
    }

    strcpy(newNode->name, n);
    strcpy(newNode->password, p);
    strcpy(newNode->phone, pn);
    newNode->next = NULL;

    return newNode;
}
