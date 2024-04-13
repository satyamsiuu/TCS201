#include<stdio.h>
void arraymod(long double*,int);
int main()
{
    long double a[100];
    int i,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements in the array:-\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%Lf",&a[i]);
    }
    arraymod(a,n);
    printf("The cubed array is:-\n");
    for(i=0;i<n;i++)
    {
        printf("%Lf ",a[i]);
    }
    return 0;
}
void arraymod(long double *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        *(p+i)=*(p+i) * *(p+i) * *(p+i);
    }
}
