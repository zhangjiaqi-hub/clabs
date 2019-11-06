#include<stdio.h>
#include<stdlib.h>
#define MAX 1000+10
char a[MAX];
int func(int n)
{
    int count=0;
    while (n>0)
    {
        count++;
        n&=(n-1);
    }
    return count;
}
int main (void)
{
    int i,m;
    char c;
    printf("n:");
    for(i=0;i<MAX;i++)
    {
        if ((c=getchar())!='\n')
        a[i]=c;
        else
        {
        a[i]=0;
        break;
    }
}
m=atoi(a);
int num=func(m);
printf("the number of one is %d\n",+num);
return 0;
}
