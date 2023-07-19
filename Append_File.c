#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPointer;

    //append is used to add text to the end
    fPointer = fopen("test.txt","a");

    //use \n in append mode bcz if you don'y it will not start from new line
    fprintf(fPointer,"\n -by Munir");


    fclose(fPointer);


    return 0;
}
