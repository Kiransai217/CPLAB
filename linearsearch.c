#include <stdio.h>
int L_search(int arr[],int size){
    int key;
    printf("Enter key:");
    scanf("%d",&key);
    for(int i=0;i<size;i++){
       if(key==arr[i]){
         return i;
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
    r=L_search(a,n);
    if(r!=-1)
     printf("Element found at index %d \n",r);
    else printf("element not found\n");
  }  
    
