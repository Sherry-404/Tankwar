#include <stdio.h>
  
int main()
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int numOfX1; 
    int numOfO1;
    // 添加两个变量，判断行列的时候，标记列中X和O的个数；判断对角线的时候，标记另一条对角线的X和O的而数量；以便减少循环次数。
    int numOfX2; 
    int numOfO2;
    int result = -1;
  
    // 读入矩阵
    for(i = 0;i < size;i++){
        for(j=0;j <size;j++){
            scanf("%d",&board[i][j]);
        }
    }
  
    // 判断行列
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
  
    // 判断对角线
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
        printf("O方胜\n");
    }
    else if (result == 1)
    {
        printf("X方胜\n");
    }
    else
    {
        printf("平局\n");
    }
  
    return 0;
