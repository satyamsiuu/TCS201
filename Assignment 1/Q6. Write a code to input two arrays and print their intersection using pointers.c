#include<stdio.h>
int main()
{
    int a[100],b[100],inter[200],l,m,n,i,j,k,flag;
    
    printf("Enter the size of first array: ");
    scanf("%d",&m);
    printf("Enter %d elements in the array:-\n",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the size of second array: ");
    scanf("%d",&n);
    printf("Enter %d elements in the array:-\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    
    l=0;
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                flag=0;
                for(k=0;k<l;k++)
                {
                    if(inter[l]==b[j])
                    {
                        flag++;
                        break;
                    }
                }
                if(flag==0)
                {
                inter[l]=b[j];
                l++;
                }
            }
        }
    }
    if(l==0)
    {
        printf("The intersection of both arrays is empty set\n");
    }
    else
    {
        printf("The intersection of the array:-\n");
        for(i=0;i<l;i++)
        {
            printf("%d ",inter[i]);
        }
    }
    
    return 0;
}
