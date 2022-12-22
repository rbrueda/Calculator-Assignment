#include <stdio.h> //C Standard Library for input/output functions
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

    int integer1; //declaring the variables that im using in the program and stating the datatype im using, which is type int
    int integer2; //variables at which the variables will be stored 
    int sum;
    int difference;
    int product;
    int quotient; 

    // Declaring variables for user input
    char k;
    char n;

    printf("Select one of the following items:\n");
    printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
    printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
    printf("A) - Advances Mathematical Operations, using operators.\n");
    printf("V) - Define variables and assign them values.\n");
    printf("E) - Exit\n");

    scanf("%c", &k);

    //Used the print function to display the list of options for the user to select

    while (k != 'E') // a while loop so the function can repeat until E is inputed by the user 
    {
        if (k == 'B')
        // created multiple if/else if statements the code can compile the correct output depending on the input the user inputed
        // this if and else statement is for the user inserting B, U, A, V, or E
        {
            printf("Please enter the first number:\n");
            //show a prompt message to the user to enter the first number
            scanf("%d", &integer1);
            // get the first number from the user
            printf("Please enter the operation (+, -, *, /):\n");
            // show a prompt message to the user to enter an operation
            scanf(" %c", &n);
            // get the operation from the user
            printf("Please enter the second number:\n");
            // show a prompt message to the user to enter the second number
            scanf("%d", &integer2);
            // get the second number from the user 
            
            // another set of if and else if statements inside the first if statement depending which operator the user inputed
            if (n=='+')
            {
                sum = integer1 + integer2;
                printf("The result is %d\n", sum);
                // print sum
                printf("Please select your option (B, U, A, V, E)\n");
            }
            else if (n=='-')
            {
                difference = integer1 - integer2;
                printf("The result is %d\n", difference);
                // print difference
                printf("Please select your option (B, U, A, V, E)\n");
            }  
            else if (n=='*')
            {
                product = integer1 * integer2;
                printf("The result is %d\n", product);
                // print product
                printf("Please select your option (B, U, A, V, E)\n");
            }
            else if (n =='/')
            {
                quotient = integer1 / integer2;
                printf("The result is %d\n", quotient);
                // print quotient 
                printf("Please select your option (B, U, A, V, E)\n");
                
            }

        }
        else if (k == 'U')
        {
            printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\nPlease select your option (B, U, A, V, E)\n");
        }
        else if (k == 'A')
        {
            printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\nPlease select your option (B, U, A, V, E)\n");
        }
        else if (k == 'V')
        {
            printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\nPlease select your option (B, U, A, V, E)\n");
        }
    scanf(" %c", &k);
    }

        printf("Thanks for using my Simple Calculator. Hope to see you again soon. Goodbye!\n");

    return 0; //it's used in main like a signal for know the exit of program was a success when return 0 executes
}
