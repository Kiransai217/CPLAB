#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the values:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
      if(a>c)
        printf("Greatest Number=%d",a);
      else
          printf("Greatest Number=%d",c);}
    else{
        if(b>c)
          printf("Greatest Number=%d",b);
        else
            printf("Greatest Number=%d",c);}
}           
     
   
