#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Two types of files
    //1. Sequential File i.e, in order form eg. 1,2,3

    //keeps tract of file
    FILE * fPointer;

    //fopen takes two parameters i.e, name of file and mode of file i.e, read,write and append(modify)
    fPointer = fopen("munir.txt","w");

    //to add something in file
    //fprintf takes 2 parameters i.e, pointer that stores the file name and mode, and the text we want to add
    fprintf(fPointer, "I LOVE C PROGRAMMING \n");


    //to close the file to save memory
    fclose(fPointer);


    //Note: if you run this program twice and modify some text it will overwrite the file



    return 0;
}
