#include <stdio.h>
int main(){
long long input;
int lb=0;
scanf ("%lld",&input);
while(input){
if (input%2==1){
lb++;}
input/=2;
}
printf ("%d\n",lb);
return 0;
}
