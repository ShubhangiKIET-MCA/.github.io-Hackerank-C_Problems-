#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i,sum=0,*arr;
scanf("%d ",&n);
arr=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
    scanf("%d ", arr+i);

    sum +=*(arr+i);
}
printf("%d \n", sum); 
free (arr);
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}