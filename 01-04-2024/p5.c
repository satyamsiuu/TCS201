/*
5)Input a matrix of order rXc print the sum which is greater between the sum of upper traingular and lower triangular matrix
*/
#include<stdio.h>
int main()
{
    //declaring all the varibales and array
    int a[10][10],r,c,i,j,ut,lt;
    
    //Entering number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&r,&c);
    
    //Checking if marix is a square matrix or not
    if(r!=c||(r==1&&c==1))
    {
        printf("The upper triangular and lower triangular elements cannot be determined as given matrix isn't a square one\n");
    }
    else
    {
    
        //Entering elements in the 2d array
        printf("Enter elements in the matrix:-\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        
        //calculating sum of upper traingle and lower traingle of a matrix
        lt=0;
        ut=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i>j||i==j)
                {
                    lt+=a[i][j];
                }
                if(i<j||i==j)
                {
                    ut+=a[i][j];
                }
            }
        }
    
        //printing the sum greater between upper and lower triangle of matrix
        if(ut>lt)
        {
            printf("Sum of elements of upper triangle of matrix is greater than that of lower triangle i.e. = %d",ut);
        }
        else
        {
            printf("Sum of elements of lower triangle of matrix is greater than that of upper triangle i.e. = %d",lt);
        }
    
    }
    return 0;
}
