#include<stdio.h>
int main(){
    unsigned long long int m,n,a,b,g;
    m=0;
    n=~m;
    g=0;
    a = 1;
   b = 0;
   while(a!=0)
   {
       a = a<<1;
       b = b+1;
   }
   printf("unsigned long long int is size of %llu bit.The max is %llu,the min is %llu.",b,n,g);
   return 0;
}
