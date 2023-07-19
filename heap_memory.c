#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    int *points;

    //Heap is just like an extra memory that our computer have and we can request our computer to save that
    //memory and free it later

    //memory allocation
    //(int *) typecast int pointer
    //using malloc function and it takes the the value which can be anything
    //and size of int
    points = (int *) malloc(5 * sizeof(int));

    //free the memory bcz we r done with our work
    free(points);  */


    //Creating an expandable program using Heap

    int i,howMany;
    int total;
    float avg;
    int *pointsArray;

    printf("How many numbers do you want to Average: \n");
    scanf(" %d",&howMany);

    //allocating memory
    pointsArray = (int *) malloc(howMany * sizeof(int));


    printf("Enter them: \n");

    for(i=0; i<howMany; i++){
        scanf(" %d",&pointsArray[i]);
        total+=pointsArray[i];
    }
    avg = (float)total / (float)howMany;
    printf("Average is: %d",avg);

    //free memory
    free(pointsArray);


    return 0;
}
