#include<stdio.h>
int main(void)
{
    unsigned int m,n;
    m=1;
    n=0;
    while(m>0)
    {
        m++;
    }
    printf("unsigned int max =%u\n",m-1);
   unsigned int x;
   x=m-1;
   do
    {
       x=x/2;
       n++;
   }while (x>0);
   printf("The unsigned int bit is %d\n",n);
   return 0;
} 
