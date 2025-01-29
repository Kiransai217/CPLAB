#include<stdio.h>
int main(){
   int n,max,min;
   printf("Enter no.of elements in array:");
   scanf("%d",&n);
   int a[n];
   printf("Enter the elements:");
   for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
   max=a[0],min=a[0];
   for(int i=0;i<n;i++){
     if(max<a[i]){
      max=a[i];
     }
    }
   for(int i=0;i<n;i++){
     if(min>a[i]){
      min=a[i];
     } 
    }
   printf("Max=%d Min=%d\n",max,min);
}
