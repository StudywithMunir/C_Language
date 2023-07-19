#include <stdio.h>
#include <stdlib.h>


//Global variable we can use tuna variable in any function
int tuna = 10;

//Since we define the function at bottom so we need to create the prototype to execute our function
void PrintSomething();

int main()
{
    //Local Variable
    int pepsi = 12;

    printf("I Drink %d Pepsi cans \n",pepsi);

    printf("I ate %d tuna \n",tuna);

    //Function Calling
    PrintSomething();

    return 0;
}

//Function Defination
void PrintSomething(){
    //tuna is Global variable thats why we can access it
    printf("I ate %d tuna ",tuna);

    //this line will not execute bcz pepsi is local variable
    //printf("I Drink %d Pepsi cans \n",pepsi);

}
