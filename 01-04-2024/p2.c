/*
2)Input two strings and copy one to another from a particular index. Eg:  a= Hello, b=Bye index =3 :output= HeBye
*/
#include<stdio.h>
int main()
{
    //Declaring character arrays and int variables
    char a[100],b[100];
    int index,i,l1,l2;
    
    //Entering strings and index
    printf("Enter first string: ");
    fgets(a,100,stdin);
    
    printf("Enter second string: ");
    fgets(b,100,stdin);
    
    printf("Enter the index at which the second string is to be copied: ");
    scanf("%d",&index);
    
    //calculating length of first string
    for(l1=0;a[l1]!='\n'&&a[l1]!='\0';l1++);
    
    //calculating length of second string
    for(l2=0;b[l2]!='\n'&&b[l2]!='\0';l2++);
    
    //copying second string to one at inputted index
    for(i=0;i<l2;i++)
    {
        a[index+i]=b[i];
    }
    
    if((index+i)>l1)
    {
        a[index+i]='\0';
    }

    //printing the final string
    printf("The new string is: ");
    puts(a);
    
    return 0;
}
