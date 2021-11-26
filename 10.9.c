#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{

    int n, j;
    int i=0,RightDiagonalSum=0,LeftDiagonalSum=0, firstarray, secondarray;
printf("Enter the size of matrix: ");
 scanf("%d",&n);

    int a[n][n];
printf("Enter the elements of matrix: ");
 for(int firstarray = 0; firstarray < n; firstarray++)
 {
       for(int secondarray = 0; secondarray < n; secondarray++)
    {

          scanf("%d",&a[firstarray][secondarray]);
       }
    }

  while(i<n)
  {
    RightDiagonalSum=RightDiagonalSum+a[i][i];
    i++;
  }

 j=n-1,i=0;

  while(i<n)
  {
    LeftDiagonalSum=LeftDiagonalSum+a[i][j];
    i++;
    j--;
  }

 printf("THE ABSOLUTE DIFFERENCE IS:%d",abs(RightDiagonalSum-LeftDiagonalSum));
    return 0;
}
