//Lesson 13 Project, Calculator
//Created by Thomas Smith via C11.
//March 11, 2016

#include <stdio.h>

int menu,choice; //Initialize Int's for the math values and output
char op;         //Used to denote mathematical operation and menu
float v1,v2,v3,vT;

int menu_main(void);
void calculator(void);

int main (void)
{
while (1)
{
    choice = menu_main();
    if (choice == 2)
        {
            puts("Exiting Program");
            break;
        }
    if (choice == 1)
        calculator();
    else
        puts("Invalid selection\n");
}
return 0;
}

int menu_main(void)
{

    puts("Please enter a selection");
    puts("1 for Calculator");
    puts("2 for Program Exit");
    scanf("%d", &menu);

    return menu;
}

void calculator(void)
{
 puts("Please enter a mathematical command.");
    scanf("%f %c %f", &v1, &op, &v2);
    switch (op)
    {
    case '*':
        vT = v1 * v2;
        break;
    case '/':
        vT = v1 / v2;
        break;
    case '+':
        vT= v1 + v2;
        break;
    case '-':
        vT = v1 - v2;
        break;
    default:
        puts("Please enter a valid mathematical operator");
    }
printf("The answer is: %.2f\n\n", vT);
}
