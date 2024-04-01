/*
6)Input two strings and concatenate the first string after the reverse of the second string without usiing predefined function
*/
#include<stdio.h>
int main()
{
    //Declaring arrays and variables
    char a[100],b[100],temp;
    int i,l1,l2;
    
    //Inputting both strings and calculating their lengths
    
    printf("Enter first string: ");
    fgets(a,100,stdin);
    for(l1=0;a[l1]!='\n'&&a[l1]!='\0';l1++);
    
    printf("Enter second string: ");
    fgets(b,100,stdin);
    for(l2=0;b[l2]!='\n'&&b[l2]!='\0';l2++);
    
    //reversing second string
    for(i=0;i<l2/2;i++)
    {
        temp = b[i];
        b[i] = b[l2-i-1];
        b[l2-i-1] = temp;
    }
    
    //concatenating first string in second one
    for(i=0;i<l1;i++)
    {
        b[l2+i]=a[i];
    }
    b[l2+i]='\0';
    
    //printing the concatenated string
    printf("The concatenated string is: ");
    puts(b);
    
    return 0;
}
