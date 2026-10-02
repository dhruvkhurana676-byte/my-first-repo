#include <stdio.h>
#include <math.h>
int main(){
    int x,y, choice;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    printf("what do u want to perform?\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.power\n");
    scanf("%d",&choice);
    if (choice==1){
        printf("The sum is: %d",x+y);
    }
    else if (choice==2){
        printf("The difference is: %d",x-y);
    }
    else if (choice==3){
        printf("The product is: %d",x*y);
    }
    else if (choice==4){
        printf("The quotient is: %.2f", (float)x/y);
    }
    else if (choice==5){
        printf("The power is: %.2f",pow(x,y));
    }
    else{
        printf("Invalid choice");
    }
}
/*in line 26 if float(x/y) or (float)(x/yy)used then it first divide 5/3 =1 then converts to float
if (float)x/y then 5.0/3=1.67*/
/*power return double so if %d used it throw a garbage value*/