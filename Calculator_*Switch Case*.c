#include<stdio.h>

int main()
{
    int no1, no2, add, sub, mul, divi, mod;
    char choice;
    
    printf("Enter the first number : ");
    scanf("%d", &no1);
    printf("Enter the second number : ");
    scanf("%d", &no2);
    
    printf("OPERATORS : +, -, *, /, Modulus");
    printf("\nUser enter an operator for performing calculations : ");
    scanf(" %c", &choice);
    printf("\n");
   
    switch(choice)
    {
        case '+' :
        add = no1 + no2;
        printf("Addition : %d", add);
        break;
        
        case '-' :
        sub = no1 - no2;
        printf("Subtraction : %d", sub);
        break;
        
        case '*' :
        mul = no1 * no2;
        printf("Multiplication : %d", mul);
        break;
        
        case '/' :
        divi = no1 / no2;
        printf("Division : %d", divi);
        break;
        
        case '%' :
        mod = no1 % no2;
        printf("Modulus : %d", mod);
        break;
        
        default :
        printf("EXIT");
        break;
    }
    
    return 0;
}
