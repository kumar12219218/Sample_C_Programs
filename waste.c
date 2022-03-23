#include <stdio.h>
#include<string.h>
int main()
{
    char s[10];
    printf("Enter the statement :");
    gets(s);
    int flag=1;
    if(isalpha(s[0]))
    {

        int l=strlen(s);
        int i=1;
        if(l>=2)
        {
            while(i<l)
            {
                if((isdigit(s[i])) || (isalpha(s[i])) || (s[i]=='_'))
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
                i=i+1;
            }
        }
    }
    else
    {
        flag=0;
    }
    if(flag==1)
    {
        printf("valid identifier ");
    }
    else
    {
        printf("Not valid id");
    }

    return 0;
}
