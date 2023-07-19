#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPointer;

    fPointer = fopen("test.txt","w+");
    fputs("I ate 3 apples today",fPointer);


    //to set cursor position we use fseek
    //SEEK_SET put the cursor at the begining
    fseek(fPointer,7,SEEK_SET);
    fputs(" Mangoes on Friday",fPointer);

    //SEEK_END put the cursor at the end of line and we negative nums to move backwards
    fseek(fPointer,-6,SEEK_END);
    fputs("top of mountain",fPointer);



    fclose(fPointer);

    return 0;
}
