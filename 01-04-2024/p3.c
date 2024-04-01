/*
3)Input an array of order rXc and sort the elements of a column inputted by the user.
*/
#include<stdio.h>
int main()
{
    //Declaring all the varibales and an array
    int a[10][10],r,c,i,j,n;
    
    //Enter number of rows and columns in the array
    printf("Enter number of rows and columns : ");
    scanf("%d%d",&r,&c);
    
    //Entering elements in the array
    printf("Enter elements in the matrix:-\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    //Entering the column number which is to be sorted
    printf("Enter the column number which is to be sorted: ");
    scanf("%d",&n);
    n--;
    
    //sorting nth column
    for(i=0;i<r;i++)
    {
        for(j=0;j<r-i-1;j++)
        {
            if(a[j][n]>a[j+1][n])
            {
                a[j][n]=a[j][n]^a[j+1][n];
                a[j+1][n]=a[j][n]^a[j+1][n];
                a[j][n]=a[j][n]^a[j+1][n];
            }
        }
    }
    
    //printing  new sorted array
    printf("The new sorted array is:-\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
