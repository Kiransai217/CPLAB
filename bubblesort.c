#include<stdio.h>
int B_sort(int arr[],int size){
   int i,j,temp;
   for(i=0;i<size-1;i++){
     for(j=0;j<size-i-1;j++){
       if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
       }
      }
     }
   return 0;
 }
int main(){
    int n;
    printf("Enter size of Array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
     }
    B_sort(a,n);
    printf("After Sorting:");
    for(int i=0;i<n;i++){
      printf("%2d",a[i]);
      
     }printf("\n");
   return 0;
}
