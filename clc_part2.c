#include <stdio.h> 
#include <math.h>
#include <ctype.h>
//C Standard Library for input/output functions
/* this code is for developing a simple command-line calculator. 
This calculator is able to do simple mathematical operations, such as addition, subtraction, multiplication, and divsion for various numbers.
*/
int main()
{
    printf("Welcome to my Command-Line Calculator (CLC)\n");
    printf("Developer: Rocio Rueda\n"); 
    printf("Version: 1\n");
    printf("Date: October 21, 2022\n"); 
    puts("-------------------------------------------------------------------------------------\n");

    double num1; //declaring the variables that im using in the program and stating the datatype im using, which is type int
    double num2; //variables at which the variables will be stored 
    double sum;
    double difference;
    double product;
    double quotient; 
    double remainder;
    double power;
    double maximum;
    double minimum;
    double squareroot;
    double logarithm;
    double exponentiation;
    int check;


    double a = 0;
    double b = 0;
    double c = 0;
    double d = 0;
    double e = 0;

    int flag = 0;


    // Declaring variables for user input
    char k;
    char n;
    char x;

    printf("Select one of the following items:\n");
    printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
    printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
    printf("A) - Advances Mathematical Operations, using operators.\n");
    printf("V) - Define variables and assign them values.\n");
    printf("E) - Exit\n");
    //Used the print function to display the list of options for the user to select

    scanf("%c", &k);

    while ((k != 'E') && flag == 0) // a while loop so the function can repeat until E is inputed by the user 
    {
        if (k == 'B')
        // created multiple if/else if statements the code can compile the correct output depending on the input the user inputed
        // this if and else statement is for the user inserting B, U, A, V, or E
        {
            do{ // First Number:
                printf("Please enter the first number:\n");
                //show a prompt message to the user to enter the first number
                check = scanf("%lf", &num1); //checks if the input is a float
                    if (check==0){
                        printf("Invalid input. Please enter a another input\n");
                    }
                    while (getchar() != '\n'); //waits until the user presses enter
                    //getChar() = returns a character (in this case \n)--while loop will wait for \n
            } while(check==0);


            printf("Please enter the operation (+, -, *, /, %, P, X, I):\n");
            // show a prompt message to the user to enter an operation
                scanf(" %c", &n);
            // get the operation from the user
                while ((n != '+') && (n != '-') && (n != '*') && (n != '/') && (n != '%') && (n != 'P') && (n != 'X') && (n != 'I')){
                    printf("Invalid input. Please enter another input\n");
                    printf("Please enter the operation (+, -, *, /, %, P, X, I):\n");
                    scanf(" %c", &n);
                }

            do{ //second number
                printf("Please enter the second number:\n");
                //show a prompt message to the user to enter the second number
                check = scanf("%lf", &num2); //checks if the input is a float
                    if (check==0){
                        printf("Invalid input. Please enter a another input\n");
                    }
                    while (getchar() != '\n'); //waits until the user presses enter
                    //getChar() = returns a character (in this case \n)--while loop will wait for \n
            } while(check==0);
            
            // another set of if and else if statements inside the first if statement depending which operator the user inputed
            if (n=='+')
            {
                sum = num1 + num2;
                printf("The result is %lf\n", sum);
                // print sum
                printf("Please select your option (B, U, A, V, E)\n");
            }
            else if (n=='-')
            {
                difference = num1 - num2;
                printf("The result is %lf\n", difference);
                // print difference
                printf("Please select your option (B, U, A, V, E)\n");
            }  
            else if (n=='*')
            {
                product = num1 * num2;
                printf("The result is %lf\n", product);
                // print product
                printf("Please select your option (B, U, A, V, E)\n");
            }
            else if (n =='/')
            {
                while (num2 == 0){
                    printf("Input is invalid. Please enter another number\n");
                    scanf("%lf", &num2);
                }
                quotient = num1 / num2;
                printf("The result is %lf\n", quotient);
                // print quotient 
                printf("Please select your option (B, U, A, V, E)\n");
                
            }
            else if (n== '%'){
                while (num2 == 0){
                    printf("Input is invalid. Please enter another number\n");
                    scanf("%lf", &num2);
                }
                remainder = fmod(num1, num2);
                printf("The result is %lf\n", remainder);
                // print remainder
                printf("Please select your option (B, U, A, V, E)\n");
            }
            else if (n == 'P'){
                power = pow(num1, num2);
                printf("The result is %lf\n", power);
                // print power
                printf("Please select your option (B, U, A, V, E)\n");
            }
            else if (n == 'X'){
                if (num1 >= num2){
                    maximum = num1;
                    printf("The result is %lf\n", maximum);
                    // print maximum
                }
                else{
                    maximum = num2;
                    printf("The result is %lf\n", maximum);
                }
                printf("Please select your option (B, U, A, V, E)\n");
            }
            else if (n == 'I'){
                if (num1 <= num2){
                    minimum = num1;
                    printf("The result is %lf\n", minimum);
                    // print minimum
                }
                else{
                    minimum = num2;
                    printf("The result is %lf\n", minimum);
                }
                printf("Please select your option (B, U, A, V, E)\n");
            }
            else{
                printf("Invalid input. Please input another input\n");
            }

       }
        else if (k == 'U')
        {
            do{ 
                printf("Please enter a number:\n");
                check = scanf("%lf", &num1); 
                    if (check==0){
                        printf("Invalid input. Please enter another input\n");
                    }
                    while (getchar() != '\n'); 
            } while(check==0);
            printf("Please enter the operation (S, L, E, C, F):\n");
            scanf(" %c", &n);
                while ((n != 'S') && (n != 'L') && (n != 'E') && (n != 'C') && (n != 'F')){
                    printf("Invalid input. Please enter another input\n");
                    printf("Please enter the operation (S, L, E, C, F):\n");
                    scanf(" %c", &n);
                }
                if ((n == 'S') || (n == 'L')){
                    while (num1  < 0){
                        printf("Invalid input. Please enter another number:\n");
                        scanf("%lf", &num1);
                    }
                }

            if(n == 'S'){
                squareroot = sqrt(num1);
                printf("The result is %lf\n", squareroot);
                printf("Please select your option (B, U, A, V, E)\n");
            }
            else if (n == 'L'){
                logarithm = log10(num1); //log is base 10
                printf("The result is %lf\n", logarithm);
                printf("Please select your option (B, U, A, V, E)\n");     
            }
            else if (n == 'E'){
                exponentiation = exp(num1); //represents e^(num1)
                printf("The result is %lf\n", exponentiation);
                printf("Please select your option (B, U, A, V, E)\n");
            }
            else if (n == 'C'){
                printf("The result is %.0f\n", ceil(num1));
                printf("Please select your option (B, U, A, V, E)\n");
            }
            else if (n == 'F'){
                printf("The result is %.0f\n", floor(num1));
                printf("Please select your option (B, U, A, V, E)\n");
            }
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
                check = scanf("%lf", &num1);   // Does not store characters
                    if (check==0){  // check = 0 -> not float
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
                    while ((n != '+') && (n != '-') && (n != '*') && (n != '/') && (n != '%') && (n != 'P') && (n != 'X') && (n != 'I')){
                        printf("Invalid input. Please enter another input\n");
                        printf("Please enter the operation (+, -, *, /, %, P, X, I):\n");
                        scanf(" %c", &n);
                    }
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

                    if (n=='+')
                    {
                        sum = num1 + num2;
                        printf("The result is %lf\n", sum);
                        printf("Please select your option (B, U, A, V, E)\n");
                    }
                    else if (n=='-')
                    {
                        difference = num1 - num2;
                        printf("The result is %lf\n", difference);
                        printf("Please select your option (B, U, A, V, E)\n");
                    }  
                    else if (n=='*')
                    {
                        product = num1 * num2;
                        printf("The result is %lf\n", product);
                        printf("Please select your option (B, U, A, V, E)\n");
                    }
                    else if (n =='/')
                    {
                        while (num2 == 0){
                            printf("Input is invalid. Please enter another number\n");
                            scanf("%lf", &num2);
                        }
                        quotient = num1 / num2;
                        printf("The result is %lf\n", quotient);
                        // print quotient 
                        printf("Please select your option (B, U, A, V, E)\n");
                        
                    }
                    else if (n== '%'){
                        while (num2 == 0){
                            printf("Input is invalid. Please enter another number\n");
                            scanf("%lf", &num2);
                        }
                        remainder = fmod(num1, num2);
                        printf("The result is %lf\n", remainder);
                        // print remainder
                        printf("Please select your option (B, U, A, V, E)\n");
                    }
                    else if (n == 'P'){
                        power = pow(num1, num2);
                        printf("The result is %lf\n", power);
                        printf("Please select your option (B, U, A, V, E)\n");
                    }
                    else if (n == 'X'){
                        if (num1 >= num2){
                            maximum = num1;
                            printf("The result is %lf\n", maximum);
                        }
                        else{
                            maximum = num2;
                            printf("The result is %lf\n", maximum);
                        }
                        printf("Please select your option (B, U, A, V, E)\n");
                    }
                    else if (n == 'I'){
                        if (num1 <= num2){
                            minimum = num1;
                            printf("The result is %lf\n", minimum);
                        }
                        else{
                            minimum = num2;
                            printf("The result is %lf\n", minimum);
                        }
                        printf("Please select your option (B, U, A, V, E)\n");
                    }
                    else{
                        printf("Invalid input. Please input another input\n");
                    }
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

                printf("Please enter an operation (S, L, E, C, F):\n");
                scanf(" %c", &n);
                while ((n != 'S') && (n != 'L') && (n != 'E') && (n != 'C') && (n != 'F')){
                    printf("Invalid input. Please enter another input\n");
                    printf("Please enter the operation (S, L, E, C, F):\n");
                    scanf(" %c", &n);
                }
                if ((n == 'S') || (n == 'L')){
                        while (num1  < 0){
                            printf("Invalid input. Please enter another number:\n");
                            scanf("%lf", &num1);
                        }
                    }
                if(n == 'S'){
                    squareroot = sqrt(num1);
                    printf("The result is %lf\n", squareroot);
                    printf("Please select your option (B, U, A, V, E)\n");
                }
                else if (n == 'L'){
                    logarithm = log10(num1);
                    printf("The result is %lf\n", logarithm);
                    printf("Please select your option (B, U, A, V, E)\n");     
                }
                else if (n == 'E'){
                    exponentiation = exp(num1);
                    printf("The result is %lf\n", exponentiation);
                    printf("Please select your option (B, U, A, V, E)\n");
                }
                else if (n == 'C'){
                    printf("The result is %.0f\n", ceil(num1));
                    printf("Please select your option (B, U, A, V, E)\n");
                }
                else if (n == 'F'){
                    printf("The result is %.0f\n", floor(num1));
                    printf("Please select your option (B, U, A, V, E)\n");
                }                
            }
            else if (k == 'E'){
                    printf("Select one of the following items:\n");
                    printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
                    printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
                    printf("A) - Advances Mathematical Operations, using operators.\n");
                    printf("V) - Define variables and assign them values.\n");
                    printf("E) - Exit\n");
                    }
            }

        else if (k == 'V')
        {

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
                printf("Please select your option (B, U, A, V, E)\n");        
        }
    scanf(" %c", &k);
    }
    printf("Thanks for using my Simple Calculator. Hope to see you again soon. Goodbye!\n");
    return 0; //it's used in main like a signal for know the exit of program was a success when return 0 executes
}


