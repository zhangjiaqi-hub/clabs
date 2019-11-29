#include<stdio.h>
int main()
{
    unsigned int a,b;
    double d;
    char c;
    a=0;
    b=0;
    while((c=getchar())!=' '){
        a=a*10+c-'0';
    }
    while((c=getchar())!=' '){
        b=b*10+c-'0';
    }
    c = getchar();
   switch(c) {
   case '+' :
       d = a+b;
       break;
   case '-':
       d = a-b;
       break;
   case '*':
       d = a*b;
       break;
   case '/':
       if(b == 0) {
           puts("Error: connot divide a number  by 0");
           break;
       }
       else{d =1.0*a/b;}
       break;}

   if(b!=0) {
       printf("The expression has a value of : %.1f\n",d);
   }
   return 0;
}
