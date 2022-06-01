#include <stdio.h>
#include <math.h>

int main()
{
    int num,n,digit,i = 0;
    int rem;

    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter digit to search: ");
    scanf("%d",&digit);

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

