/*
4)Input a matrix of order rXc and find the sum of the diagonal just above and just below the principal diagonal.
*/
#include<stdio.h>

int main() 
{
    //declaring all the variables and array
    int a[10][10], r, c, i, j, ud = 0, ld = 0;
    
    //Entering number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);
    
    //Entering elements in the 2d array
    printf("Enter elements in the matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    // calculating sum of diagonal just above and just below the principal diagonal
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(j == i + 1 && j < c) 
            { // diagonal just above principal diagonal
                ud += a[i][j];
            }
            if(j == i - 1 && j >= 0)
            { // diagonal just below principal diagonal
                ld += a[i][j];
            }
        }
    }
    
    //printing sum of diagonal above and below the principal diagonal
    printf("Sum of diagonal just above principal diagonal = %d\n", ud);
    printf("Sum of diagonal just below principal diagonal = %d\n", ld);
    
    return 0;
}
