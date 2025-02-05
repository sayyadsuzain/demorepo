#include<stdio.h>
int main()
{
    int rows=2,columns=3;
    int matrix[rows][columns];

    printf("Enter the value for 2x3 matrix: \n" );
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("Enter Element at[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);

        }
    }
    printf("The 2 D matirx entered is: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}