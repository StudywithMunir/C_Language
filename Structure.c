#include <stdio.h>
#include <stdlib.h>
#include "User_Info.h"

//It is best practice to put structure defination  in a seperate file like header file

int main()
{
    //Arrays allows us to populate same data type varaibles
    //to overcome this, we use structure so we can use different type of variables


    //Creating object of user Structure of name Munir
    struct user Munir;
    struct user Hamza;


    Munir.userId = 1;
    Hamza.userId = 2;

    puts("Enter the First name of User Id 1: ");
    gets(Munir.firstName);

    puts("Enter the Last name of User Id 1: ");
    gets(Munir.lastName);


    puts("Enter the First name of User Id 2: ");
    gets(Hamza.firstName);

    puts("Enter the Last name of User Id 2: ");
    gets(Hamza.lastName);

    printf("User 1 info: \n");
    printf("First Name: %s \n",Munir.firstName);
    printf("Last Name: %s \n",Munir.lastName);

    printf("User 2 info: \n");
    printf("First Name: %s \n",Hamza.firstName);
    printf("Last Name: %s \n",Hamza.lastName);


    return 0;
}
