#include<stdio.h>
#include<stdlib.h>


int main()
{
   int a[50],n,i,key,low,mid,high;

   printf("Enter the number of elements\n");
   scanf("%d",&n);

   printf("Enter the array elements\n");

     for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

   printf("Enter the key element to be searched\n");
   scanf("%d",&key);

    low=0;
    high=n-1;


      while(low<=high)
        {
            mid=(low+high)/2;
            if(a[mid]==key)
            {
                printf("Element %d FOUND at INDEX %d\n",key,mid);
                exit(0);
            }

            else if (a[mid]>key)
                high=mid-1;


            else
            {
                low=mid+1;
            }
        }
   printf("Element NOT FOUND\n");

   return 0;
}
