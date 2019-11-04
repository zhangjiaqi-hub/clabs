#include <stdio.h>
int func(int n)
{
    int count=0;
    while (n>0)
    {
        count ++;
        n&=(n-1);
    }
    return count ;
}
int main()
{
    printf ("n:");
    int n;
    scanf("%d",&n);
    int num=func(n);
    printf ("the number of one is %d\n",num);
}
