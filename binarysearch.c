#include <stdio.h>
int bi_search(int arr[],int size){
   int key,low=0,high=size-1,mid;
       printf("Enter key:");
       scanf("%d",&key);
       while(low<=high){
           mid=(low+high)/2;
        if(key==arr[mid]){
          return mid;
         }
        else if(key>arr[mid]){
              low=mid+1;
             }
         else{ 
            high=mid-1;
           }
        }
     return -1;
 }
int main(){
     int n,r;
    printf("Enter size of Array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
     }
    r=bi_search(a,n);
    if(r!=-1){
     printf("Element found at index %d \n",r);
    }
    else{ 
       printf("element not found\n");
      }
    return 0;
  }  
              
