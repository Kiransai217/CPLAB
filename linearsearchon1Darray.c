#include<stdio.h>
int main(){
   int n,i,j,x,f=0;
   printf("Enter size of array:");
   scanf("%d",&n);
   int a[n];
   printf("Enter the elements:");
   for(j=0;j<n;j++){
      scanf("%d",&a[j]);
     }
   printf("Enter the element to search:");
   scanf("%d",&x);
   for(i=0;i<n;i++){
      if(x==a[i]){
        printf("Element Found.\n");
        printf("index value=%d\n",i);
        f++;
        break;
        }
      }
      if(f==0){
             printf("Not Found!\n");
     }
     return 0;    
}
