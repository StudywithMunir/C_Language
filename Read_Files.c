#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPointer;

    //i created a file munir.txt manually or we can can have already
    fPointer = fopen("munir.txt","r");

    //need variable to read file line by line
    char singleLine[150];

    //!feof(fPointer) means read the file until the end of file
    while(!feof(fPointer)){

      //reading a file line by line
      fgets(singleLine,150,fPointer);

      puts(singleLine);

    }

    fclose(fPointer);


    return 0;
}
