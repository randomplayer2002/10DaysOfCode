#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a[100],i;
    float minus = 0,zeros = 0,plus = 0;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i] > 0)
        {
            plus++;
        }
        else if(a[i] == 0)
        {
            zeros++;
        }
        else
        {
            minus++;
        }

    }
    printf("%.6f\n%.6f\n%.6f\n", plus/n, minus/n, zeros/n);

    return 0;
}
