#include<stdio.h>
int main(){
int eng,mat,phy,chem,soc;
printf("Enter the Marks:\n");
printf("English:");
scanf("%d",&eng);
printf("Maths:");
scanf("%d",&mat);
printf("Physics:");
scanf("%d",&phy);
printf("Chemistry:");
scanf("%d",&chem);
printf("Social:");
scanf("%d",&soc);
float total=(float) eng+mat+phy+chem+soc;
float average=(float) total/5;
printf("Total Marks=%f\nAverage=%f\n",total,average);
}
