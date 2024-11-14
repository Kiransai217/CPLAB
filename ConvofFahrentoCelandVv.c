//Conversion of Fahrenheit to Celsius and vice versa
#include<stdio.h>
int main(){
    int fahren,cel,choice;
    printf("1.Temperature Conversion from Fahrenheit to Celsius\n");
    printf("2. Temperature Conversion from Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if(choice == 1){
    printf("Enter temperature in Fahrenheit: ");
    scanf("%d",&fahren);
    cel = (fahren - 32) * 5/9;
    printf("Temperature in Celsius: %d\n",cel);
    }
    else if(choice == 2){
        printf("Enter temperature in Celsius: ");
        scanf("%d",&cel);
        fahren = (cel * 9/5) + 32;
        printf("Temperature in Fahrenheit: %d\n",fahren);
    }
    else{
        printf("Invalid choice!\n");
        return 0;
    }    
    return 0;
} 