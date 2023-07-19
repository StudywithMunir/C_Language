#include <stdio.h>
#include <stdlib.h>

//Adding custom header file
#include "MunirsInfo.h"

int main()
{
    char YOURNAME[20];
    int YOURAGE;

    printf("My Name is %s and i am %d years old\n",MYNAME,AGE);

    printf("Enter your Name: \n");
    scanf("%s",YOURNAME);

     printf("Enter your Age: \n");
    scanf("%d",&YOURAGE);

    printf("Your Name is %s and you are %d years old\n",YOURNAME,YOURAGE);

    return 0;
}
