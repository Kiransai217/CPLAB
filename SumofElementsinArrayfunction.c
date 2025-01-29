#include<stdio.h>
int SumofElements(int n){
   int a[n],sum;
   for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
   for(int i=0;i<n;i++){
      sum = sum+a[i];
     }
   return sum;
  }
int main(){
   int n,sum;
   printf("Enter no.of elements in array:");
   scanf("%d",&n);
   printf("Enter the elements:");
   sum = SumofElements(n);
   printf("Sum of Elements= %d\n",sum);
}
