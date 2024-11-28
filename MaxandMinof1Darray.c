#include<stdio.h>
int main(){
 int n,max,min;
 printf("Enter the size of Array:");
 scanf("%d",&n);
 int a[n];
 for(int k=0;k<=n-1;k++){
    scanf("%d",&a[k]);}
 max=a[0],min=a[0];
 for(int i=0;i<n;i++){
   if(min>a[i]){
     min=a[i];
     }
   }
 for(int j=0;j<n;j++){
   if(max<a[j]){
     max=a[j];
     }
   }printf("Array elements:");
 for(int l=0;l<n;l++){
    printf("%d ",a[l]);
    }
 printf("\nMin=%d\nMax=%d\n",min,max);
 return 0;
}
