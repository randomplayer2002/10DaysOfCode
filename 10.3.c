#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,len=0,flag=0;
    char str[100];


    printf("Enter the string: ");
    scanf("%s",str);


    len = strlen(str);


    for(i=0;i<len;i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag=1;
            break;
        }

    }

        if(flag==0)
        {
            printf("It's palindromic!!!");
        }

        else
        {
          printf("It's not palindromic!!!");
        }

    return 0;
}
