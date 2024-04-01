/*
1)Input a rXc matrix and find Sum of particular row inputted by the user.
*/
#include<stdio.h>
int main()
{
    //Declaring all the varibales and an array
    int a[10][10],r,c,i,j,k,sum;
    
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
    
    //Entering the row number for which sum is to be calculated
    printf("Enter the row number for which sum is to be calculated: ");
    scanf("%d",&k);
    k--;
    sum=0;
    
    //Calculating sum of kth row
    for(j=0;j<c;j++)
    {
        sum+=a[k][j];
    }
    
    //printing sum of kth row
    printf("Sum of elements of row number %d = %d\n",k+1,sum);
    
    return 0;
}
