#include<stdio.h>
#include<ctype.h>
void toggler(char*,int);
int main()
{
    char a[1000];
    int l;
    printf("Enter a string: ");
    fgets(a,1000,stdin);
    for(l=0;a[l]!='\n'&&a[l]!='\0';l++);
    printf("Vowels toggled in reverse are: ");
    toggler(a,l);
    return 0;
}
void toggler(char *p,int n)
{
    int i;
    char c;
    for(i=n-1;i>=0;i--)
    {
        c = toupper(*(p+i));
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            if(*(p+i)>='A'&&*(p+i)<='Z')
            {
                printf("%c",*(p+i)+32);
            }
            if(*(p+i)>='a'&&*(p+i)<='z')
            {
                printf("%c",*(p+i)-32);
            }
        }
    }
}
