#include <stdio.h>


int main()
{
    int arr[100];
    int i, N;


    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }


     printf("\n\n");


    for(i<N-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }



    return 0;
}
