#define _CRT_SECURE_NO_WARNINGS
#include "class.h"

//�̻�����洢
void m_writeIntoFile_p(char* n, char* p)
{
    FILE* fp = fopen("merchantpassword.txt", "a+");
    if (fp == NULL)
    {
        printf("Failed to open file!\n");
        return;
    }
    fprintf(fp, "%s\t%s", n, p);
    fclose(fp);
    printf("LinkedList data written to '%s'\n", "merchantpassword.txt");
}

//�û�����洢
void u_writeIntoFile_p(char* n, char* p)
{
    FILE* fp = fopen("userpassword.txt", "a+");
    if (fp == NULL)
    {
        printf("Failed to open file!\n");
        return;
    }
    fprintf(fp, "%s\t%s", n, p);
    fclose(fp);
    printf("LinkedList data written to '%s'\n", "userpassword.txt");
}

//����Ա����洢
void d_writeIntoFile_p(char* n, char* p)
{
    FILE* fp = fopen("deliverpersonpassword.txt", "a+");
    if (fp == NULL)
    {
        printf("Failed to open file!\n");
        return;
    }
    fprintf(fp, "%s\t%s", n, p);
    fclose(fp);
    printf("LinkedList data written to '%s'\n", "deliverpersonpassword.txt");
}

//�����̼�����
void m_updatePassword(char* n, char* new_p)
{
    FILE* fp = fopen("merchantpassword.txt", "r+");
    if (fp == NULL)
    {
        printf("Failed to open file!\n");
        return;
    }

    char line[256] = { "\0" };
    char merchantName[50] = { "\0" };
    char password[50] = { "\0" };
    long filePos;
    int found = 0;

    //ÿ�б���
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        sscanf(line, "%s\t%s", merchantName, password);
        if (strcmp(merchantName, n) == 0)
        {
            filePos = ftell(fp) - (strlen(line) + 1); //����Ҫ�޸�����ĵ�ַ
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Merchant not found in file!\n");
        fclose(fp);
        return;
    }

    //���ļ�ָ���ƶ�������λ��
    fseek(fp, filePos, SEEK_SET);
    fprintf(fp, "%s\t%s\n", n, new_p); //��������
    fclose(fp);
    printf("Password updated for '%s'\n", n);
}

//�����û�����
void u_updatePassword(char* n, char* new_p)
{
    FILE* fp = fopen("userpassword.txt", "r+");
    if (fp == NULL)
    {
        printf("Failed to open file!\n");
        return;
    }

    char line[256] = { "\0" };
    char userName[50] = { "\0" };
    char password[50] = { "\0" };
    long filePos;
    int found = 0;

    //ÿ�б���
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        sscanf(line, "%s\t%s", userName, password);
        if (strcmp(userName, n) == 0)
        {
            filePos = ftell(fp) - (strlen(line) + 1); //����Ҫ�޸�����ĵ�ַ
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("User not found in file!\n");
        fclose(fp);
        return;
    }

    //���ļ�ָ���ƶ�������λ��
    fseek(fp, filePos, SEEK_SET);
    fprintf(fp, "%s\t%s\n", n, new_p); //��������
    fclose(fp);
    printf("Password updated for '%s'\n", n);
}

//��������Ա����
void d_updatePassword(char* n, char* new_p)
{
    FILE* fp = fopen("deliverpersonpassword.txt", "r+");
    if (fp == NULL)
    {
        printf("Failed to open file!\n");
        return;
    }

    char line[256] = { "\0" };
    char deliverpersonName[50] = { "\0" };
    char password[50] = { "\0" };
    long filePos;
    int found = 0;

    //ÿ�б���
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        sscanf(line, "%s\t%s", deliverpersonName, password);
        if (strcmp(deliverpersonName, n) == 0)
        {
            filePos = ftell(fp) - (strlen(line) + 1); //����Ҫ�޸�����ĵ�ַ
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Deliverperson not found in file!\n");
        fclose(fp);
        return;
    }

    //���ļ�ָ���ƶ�������λ��
    fseek(fp, filePos, SEEK_SET);
    fprintf(fp, "%s\t%s\n", n, new_p); //��������
    fclose(fp);
    printf("Password updated for '%s'\n", n);
}