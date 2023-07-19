#include <stdio.h>
#include <stdlib.h>


void PassByValue(int i){
    i = 89;
    return;
}

void PassByAddress(int *i){
    //Derefrencing
    *i = 44;
    return;
}

int main()
{
    int tuna = 20;

    //PassByValue does not changes the value with the value inside function parameter
    PassByValue(tuna);
    printf("Passing by Value, tuna is now %d \n",tuna);

    //PassByReference/Address changes the value with the value inside function parameter i.e, it obtains the variable address
    //then it derefrence the varibale like i is now 44 and replace by tuna which is 20
    PassByAddress(&tuna);
    printf("Passing by Value, tuna is now %d \n",tuna);


    return 0;
}


