/*
7)Input a string and find the occurence of a character given by the user, print the first and last position of the character.
  If the character occurs once print the appropriate message
*/
#include<stdio.h>
int main()
{
    //Declaring arrays and variables
    char a[100],c;
    int i,count,f,l;
    
    //inputting the string
    printf("Enter a string: ");
    fgets(a,100,stdin);
    
    //Inputting the character to be searched in the string
    printf("Enter the character to be searched in the string: ");
    scanf("%c",&c);
    
    //Calculating the occurence of character in the string
    i=0;
    count=0;
    while(a[i]!='\n'&&a[i]!='\0')
    {
        if(a[i]==c)
        {
            if(count==0)
            {
                f=i;
            }
            l=i;
            count++;
        }
        i++;
    }
    
    //priting the occurence of the chracter in the string
    if(count>1)
    {
        printf("The character occured in the string first at poistion number: %d and last at position number: %d\n",f+1,l+1);
    }
    else if(count>0)
    {
        printf("The character occured only once at position number: %d\n",f+1);
    }
    else
    {
        printf("The character is not present in the string\n");
    }
    
    return 0;
}
