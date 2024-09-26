#include<stdio.h>
int main(){
int a=1,b=2,c=3,d=4,e=5,f=6,g=7,i=9,j=10,exp1,exp2,exp3,J;
exp1=a+b*c+(d*e)+f*c;
exp2=a/b*c-b+a*d/3;
exp3=a+++b---a;
J=(i++)+(++i);
printf("%d\n%d\n%d\n%d\n",exp1,exp2,exp3,J);
}
