#include<stdio.h>
int main(){
   int n,sum;
   printf("Enter no.of elements in array:");
   scanf("%d",&n);
   int a[n];
   printf("Enter the elements:");
   for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
   for(int i=0;i<n;i++){
      sum = sum+a[i];
     }
   printf("Sum of Elements= %d\n",sum);
}
