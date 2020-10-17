#include <stdio.h>
int main()
{
    int Ori[3][3]; 
    int Tran[3][3]; 

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            scanf_s("%d", &Ori[row][col]);
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col <3; col++)
        {
            Tran[col][row] = Ori[row][col];
        }
    }
    printf("Transpose matrix : \n");
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", Tran[row][col]);
        }

        printf("\n");
    }

    return 0;
}