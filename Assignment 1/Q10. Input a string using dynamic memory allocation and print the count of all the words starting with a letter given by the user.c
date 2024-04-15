#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char *p,c;
    int i,l,count=0;
    
    p = (char *)malloc(10000 * sizeof(char));
    if (p == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    printf("Enter a string: ");
    fgets(p,10000,stdin);
    for(l=0;*(p+l)!='\n'&&*(p+l)!='\0';l++);
    *(p+l)='\0';
    p = (char *)realloc(p, (l+1) * sizeof(char));
    
    if(p == NULL)
    {
        printf("Memory reallocation failed.\n");
        free(p);
        return 1;
    }
    
    printf("Enter the letter: ");
    scanf("%c",&c);
    
    if(!(isspace(*p))&&tolower(*p)==tolower(c))
    {
        count++;
    }
    
    for(i=1;i<l;i++)
    {
        if(tolower(*(p+i))==tolower(c)&&isspace(*(p+i-1)))
        {
            count++;
        }
    }
    
    free(p);
    
    if(count>0)
    {
        printf("The number of words starting with letter '%c' are: %d\n",c,count);
    }
    else
    {
        printf("No word in the string starts with the letter '%c'\n",c);
    }
    
    return 0;
}
