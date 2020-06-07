#include<stdio.h>
#include<string.h>

#include<math.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m=n*2-1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
          int min =i<j?i:j;
          min = min<m-i?min:m-i-1;
          min = min<m-j-1?min:m-j-1;
          printf("%d ",n-min);
        }
        printf("\n");

    }
    return 0;
}