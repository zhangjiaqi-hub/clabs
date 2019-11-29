#include<stdio.h>
int main ()
{
    char c;
    int m,n;
    m=n=0;
    printf("put in:");
    while((c=getchar())!='\n'){
        if(c=='a'||c=='A')
        ++m;
        else if(c=='0')
        ++n;
    }
    printf("The number of a is:%d\n and the number of 0 is:%d\n",m,n);
return 0;
}
