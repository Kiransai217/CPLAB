#include<stdio.h>
#include<math.h>
int main(){ 
    float a, b, c, s , A;
    printf("Enter the values of sides of Triangle  ");
    printf("Enter Side1:");
    scanf("%f",&a);
    printf("Enter Side2:");
    scanf("%f",&b);
    printf("Enter Side3:");
    scanf("%f",&c);
    s = (a + b + c)/2;
    A = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area=%f", A);
}
    
     
