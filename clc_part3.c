#include <stdio.h> 
#include <math.h>
#include <ctype.h>
//C Standard Library for input/output functions
/* this code is for developing a simple command-line calculator. 
This calculator is able to do simple mathematical operations, such as addition, subtraction, multiplication, and divsion for various numbers.
*/

double num1; //declaring the variables that im using in the program and stating the datatype im using, which is type int
double num2; //variables at which the variables will be stored 

int check;

char k;
char n;
char x;

double a = 0;
double b = 0;
double c = 0;
double d = 0;
double e = 0;

char available_options ();
double binary(double num1, double num2, char n);
double unary(double num1, char n);
double exit();

int main()
{
    printf("Welcome to my Command-Line Calculator (CLC)\n");
    printf("Developer: Rocio Rueda\n"); 
    printf("Version: 1\n");
    printf("Date: October 21, 2022\n"); 
    puts("-------------------------------------------------------------------------------------\n");


    printf("Select one of the following items:\n");
    printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
    printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
    printf("A) - Advances Mathematical Operations, using operators.\n");
    printf("V) - Define variables and assign them values.\n");
    printf("E) - Exit\n");
    
    char k = available_options ();
    
    while (k != 'E') 
    {
        if (k == 'B')
        {
            do{ 
                printf("Please enter the first number:\n");
                check = scanf("%lf", &num1); 
                if (check==0){
                    printf("Invalid input. Please enter a another input\n");
                }
                while (getchar() != '\n');
            } while(check==0);
        
            printf("Please enter the operation (+, -, *, /, %, P, X, I):\n");
            scanf(" %c", &n);
            
            do{ 
                printf("Please enter the second number:\n");
                check = scanf("%lf", &num2); 
                if (check==0){
                    printf("Invalid input. Please enter a another input\n");
                }
                while (getchar() != '\n');
            } while(check==0);

            double result = binary(num1, num2, n);
            printf("The result is %lf\n", result);
        }
        else if (k == 'U'){
            do{ 
                printf("Please enter the first number:\n");
                check = scanf("%lf", &num1); 
                if (check==0){
                    printf("Invalid input. Please enter a another input\n");
                }
                while (getchar() != '\n');
            } while(check==0);
            
                double result = unary(num1, n);
                printf("The result is %lf\n", result);
            }
        else if (k == 'A')
        {
            printf("Please enter options B, U, or E\n");
            scanf(" %c", &k);
            while ((k != 'B') && (k != 'U') && (k != 'E')){
                printf("Invalid input. Please enter another input\n");
            }
            if (k == 'B'){
                do{ 
                printf("Please enter the first number\n");
                check = scanf("%lf", &num1);   
                    if (check==0){  
                        scanf("%c", &x);
                        if (x == 'a'){
                            num1 = a; 
                            break; 
                        }
                        else if (x == 'b'){
                            num1 = b;
                            break;
                        }
                        else if (x == 'c'){
                            num1 = c;
                            break;
                        }
                        else if (x == 'd'){
                            num1 = d;
                            break;
                        }
                        else if (x == 'e'){
                            num1 = e;
                            break;
                        } 
                        else{
                            printf("Invalid input. Please enter another value\n");
                        }          
                    }
                    while (getchar() != '\n'); 
                } while(check==0); 

                printf("Please enter an operation (+, -, *, /, %, P, X, I):\n");
                scanf(" %c", &n);
                    
                do{ 
                    printf("Please enter the second number\n");
                    check = scanf("%lf", &num2); 
                        if (check==0){
                            scanf("%c", &x);
                            if (x == 'a'){
                                num2 = a; 
                                break; 
                            }
                            else if (x == 'b'){
                                num2 = b;
                                break;
                            }
                            else if (x == 'c'){
                                num2 = c;
                                break;
                            }
                            else if (x == 'd'){
                                num2 = d;
                                break;
                            }
                            else if (x == 'e'){
                                num2 = e;
                                break;
                            }   
                            else{
                                printf("Invalid input. Please enter another value\n");
                            }
                        }
                        while (getchar() != '\n');             
                } while(check==0);
                double result = binary(num1, num2, n);
                printf("The result is %lf\n", result);
            }    
            else if (k == 'U'){  
                do{ 
                printf("Please enter a number\n");
                check = scanf("%lf", &num1); 
                    if (check==0){
                        scanf("%c", &x);
                        if (x == 'a'){
                            num1 = a; 
                            break; 
                        }
                        else if (x == 'b'){
                            num1 = b;
                            break;
                        }
                        else if (x == 'c'){
                            num1 = c;
                            break;
                        }
                        else if (x == 'd'){
                            num1 = d;
                            break;
                        }
                        else if (x == 'e'){
                            num1 = e;
                            break;
                        } 
                        else{
                            printf("Invalid input. Please enter another input\n");
                        }          
                        }
                    while (getchar() != '\n'); 
                } while(check==0);

            double result = unary(num1, n);
            printf("The result is %lf\n", result);
            }    
            else if (k == 'E'){

            }         
        }
        else if (k == 'V'){
            printf("Please enter a character between 'a' to 'e':\n");
            scanf(" %c", &x);
            while ( (x != 'a') && (x != 'b') && (x != 'c') && (x != 'd') && (x != 'e') ){
                printf("Invalid input. Please select another input:\n");
                scanf(" %c", &x);
            }

            do{ 
                printf("Enter an inital value\n");
                check = scanf("%lf", &num1); 
                    if (check==0){
                        printf("Invalid input. Please enter a another input:\n");
                    }
                    while (getchar() != '\n'); 
            } while(check==0);
                if (x == 'a'){
                    a = num1;  
                    printf("a = %lf\n", a);               
                }
                else if (x == 'b'){
                    b = num1;
                    printf("b = %lf\n", b);
                }
                else if (x == 'c'){
                    c = num1;
                    printf("c = %lf\n", c);
                }
                else if (x == 'd'){
                    d = num1;
                    printf("d = %lf\n", d);
                }
                else if (x == 'e'){
                    e = num1;
                    printf("e = %lf\n", e);
                }   
        }
        
        char k = available_options();
        }

double result = exit();

return 0; 
}

char available_options (){
    char k;
    printf("Please select your option (B, U, A, V, E)\n");
    scanf("%c", &k);
    switch (k){
        case 'B': 
            k = 'B';
            break;
        case 'U':
            k = 'U';
            break;
        case 'A':
            k = 'A';
            break;
        case 'V':
            k = 'V';
            break;
        case 'E':
            k = 'E';
            break;
        default : 
            while((k != 'B') && (k != 'U') && (k != 'A') && (k != 'V') && (k != 'E')){
                printf("Invalid input. Please enter another input\n"); 
                scanf(" %c", &k); 
            }
            break;
    }
return k; 
}

double binary (double num1, double num2, char n){
    while ((n != '+') && (n != '-') && (n != '*') && (n != '/') && (n != '%') && (n != 'P') && (n != 'X') && (n != 'I')){
                printf("Invalid operation input. Please enter another input\n");
                printf("Please enter the operation (+, -, *, /, %, P, X, I):\n");
                scanf(" %c", &n);
            }
    double result; 
    if (n=='+')
    {
        result = num1 + num2;
    }
    else if (n=='-')
    {
        result = num1 - num2;       
    }  
    else if (n=='*')
    {
        result = num1 * num2;
    }
    else if (n =='/')
    {
        while (num2 == 0){
            printf("Input is invalid. Please enter another number\n");
            scanf("%lf", &num2);
        }
        result = num1 / num2;           
    }
    else if (n== '%')
    {
        while (num2 == 0){
            printf("Input is invalid. Please enter another number\n");
            scanf("%lf", &num2);
        }
        result = fmod(num1, num2);        
    }
    else if (n == 'P')
    {
        result = pow(num1, num2);            
    }
        // Get Max
    else if (n == 'X')
    {
        if (num1 >= num2){
            result = num1;              
        }
        else{
            result = num2;               
        }
    }
        // Get Min
    else if (n == 'I')
    {
        if (num1 <= num2){
            result = num1;
        }
        else{
            result = num2;
        }                
    }
return result;
}

double unary(double num1, char n){
    while ((n != 'S') && (n != 'L') && (n != 'E') && (n != 'C') && (n != 'F')){
                    printf("Invalid operation input. Please enter another input\n");
                    printf("Please enter the operation (S, L, E, C, F):\n");
                    scanf(" %c", &n);
    }
    if ((n == 'S') || (n == 'L')){
        while (num1  < 0){
            printf("Invalid input. Please enter another number:\n");
            scanf("%lf", &num1);
            }
    }
    double result;
    if(n == 'S'){
        result = sqrt(num1);               
    }
    else if (n == 'L'){
        result = log10(num1);    
    }
    else if (n == 'E'){
        result = exp(num1); 
    }
    else if (n == 'C'){
        result = ceil(num1);
    }
    else if (n == 'F'){
        result = floor(num1);        
    }
return result;
}

double exit(){
    printf("Thanks for using my Simple Calculator. Hope to see you again soon. Goodbye!\n");

return 0;
}








