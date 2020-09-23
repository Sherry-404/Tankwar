#include <stdio.h>
  
int main()
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int numOfX1; 
    int numOfO1;
    // ��������������ж����е�ʱ�򣬱������X��O�ĸ������ж϶Խ��ߵ�ʱ�򣬱����һ���Խ��ߵ�X��O�Ķ��������Ա����ѭ��������
    int numOfX2; 
    int numOfO2;
    int result = -1;
  
    // �������
    for(i = 0;i < size;i++){
        for(j=0;j <size;j++){
            scanf("%d",&board[i][j]);
        }
    }
  
    // �ж�����
    for (i = 0; i < size && result == -1; i++)
    {
        numOfX1 = numOfO1 = numOfX2 = numOfO2 = 0;
        for (j = 0; j < size; j++)
        {
            if (board[i][j] == 1)
            {
                numOfX1++;
            }
            else
            {
                numOfO1++;
            }
  
            if (board[j][i] == 1)
            {
                numOfX2++;
            }
            else
            {
                numOfO2++;
            }
        }
  
        if (numOfO1 == size || numOfO2 == size)
        {
            result = 0;
        }
        else if (numOfX1 == size || numOfX2 == size)
        {
            result = 1;
        }
    }
  
    // �ж϶Խ���
    if (result == -1)
    {
        numOfX1 = numOfO1 = numOfX2 = numOfO2 = 0;
        for (i = 0; i < size && result == -1; i++)
        {
            if (board[i][i] == 1)
            {
                numOfX1++;
            }
            else
            {
                numOfO1++;
            }
            if (board[i][size - i - 1] == 1)
            {
                numOfX2++;
            }
            else
            {
                numOfO2++;
            }
        }
        if (numOfO1 == size || numOfO2 == size)
        {
            result = 0;
        }
        else if (numOfX1 == size || numOfX2 == size)
        {
            result = 1;
        }
    }
  
    if (result == 0)
    {
        printf("O��ʤ\n");
    }
    else if (result == 1)
    {
        printf("X��ʤ\n");
    }
    else
    {
        printf("ƽ��\n");
    }
  
    return 0;
