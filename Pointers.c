#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //Normal variable
    int tuna = 19;

    printf("Address \t Name \t Value \n");

    //placeholder for pointer is %p
    printf("%p \t %s \t %d \n",&tuna, "tuna", tuna);


    //Pointer variable and it holds address of other variable
    int *pTuna = &tuna;
    printf("%p \t %s \t %d \n",pTuna, "tuna", tuna);

    //printing address of pTuna and pTuna holds the address of tuna as a value and pTuna have its own address
    printf("%p \t %s \t %p ",&pTuna, "PTuna", pTuna);       */


    //Dereference Pointer

    /*
    int tuna = 19;
    int *pTuna = &tuna;

    printf("Address \t Name \t Value \n");
    printf("%p \t %s \t %d \n",&tuna, "tuna", tuna);
    printf("%p \t %s \t %p \n",&pTuna, "PTuna", pTuna);

    //Derefrencing (modern way to access value rather than old fashioned normal variable)
    //*pTuna means it points to the value of tuna variable rather than tuna address
    printf("*pTuna: %d \n", *pTuna);


   //updating value
   *pTuna = 71;
    printf("*pTuna: %d \n", *pTuna);
    printf("Tuna: %d ", tuna);  */




    //Pointers and Arrays
    /*
    int i;
    int meatballs[5] = {3,7,9,2,9};

    printf("Elements \t Address \t Value \n");


    for(i=0; i<5; i++){

        //meatballs[%d] means looping through each element through counter variable i
        printf("meatballs[%d] \t %p \t %d \n",i,&meatballs[i],meatballs[i]);
    }


    //Array names e,g, meatballs is the pointer to the first variable i.e if we print array variable meatballs without & symbol
    //it still print out the address of of elements inside the meatball meatballs variable
    //but the address of only first element inside

    //Note:
    if you try to change the value of meatballs it will through error bcz array name is constant
    printf("meatballs \t\t %p \n",meatballs);

    //Derefrencing
    //it prints 3 bcz meatballs points to the first element
    printf("*meatballs \t\t %d \n",*meatballs);


    //printing address of 2nd element inside meatballs variable
    printf("meatballs \t\t %p \n",&meatballs[2]);

    //Derefrencing the 2nd element inside meatballs
    //it prints 9 bcz meatballs points to first elem then we add 2 which means it prints meatballs[2]
    printf("*(meatballs + 2) \t\t %d \n",*(meatballs+2));  */


    //Pointers and Strings
    char movie1[] = "Hello Dude";

    //we can't change array value bcz it is constant if we try to change it will change the address of first element inside
    //and it will mess the whole program so don't change it i.e, can't change the pointer bcz it is constant
    //movie1 = "hello";
    //movie1[] = "hello";


    //Creating Pointer variable
    /*
    char *movie2 = "C Language";

    //it prints the character until it finds \0 null character
    puts(movie2);

    //We can update the pointer variable
    movie2 = "C++ Language";
    puts(movie2); */



    //Problems with String Lengths
    char movie[20];
    char *pmovie = movie;

    //fgets restricts the user input between 20 characters and if cuts of the extra charcters if the user enters
    //more than 20 characters
    fgets(pmovie, 20, stdin);
    puts(pmovie);









    return 0;
}
