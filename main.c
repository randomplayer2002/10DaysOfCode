#include <stdio.h>

int main()
{
    int num,n,digit,i;
    int rem;

    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter digit to search: ");
    scanf("%d",&digit);

    i=0;
    n=num;

    while(n>0)
    {
        rem=n%10;
        if(rem==digit)
            i++;
        n/=10;
    }

    printf("Total occurrence of digit is: %d ",i);

    return 0;
}
