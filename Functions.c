#include <stdio.h>
#include <stdlib.h>

//Function Defination

/*void printSomething(){

printf("Hello use me");

} */


//Passing Arugments to a Function
/*void convertToDollars(float euro){
    float usd = euro * 1.35;
    printf("%.2f Euro - %.2f USD \n",euro,usd);
    return;
} */

int calculateBonus(int yearsWorked){
    int bonus = yearsWorked * 250;

    if(yearsWorked>14){
        bonus+=1000;
    }

    //whenever the function datatype is other than void you have to return anything in our case we are giving bonus so we
    //return bonus
    return bonus;

}




//if you still want to include function defination at bottom then add this line so your program will be executed
//void printSomething();

int main()
{
    //Function Calling
    //printSomething();

    //creating variable and passing it as an argument that will replace the euro parameter in function defination
    //act as an placeholder
  /*  float euroAmount;
    printf("Enter your Euro Amount: ");
    scanf(" %f",&euroAmount);

    convertToDollars(euroAmount);

    //passing default value
    convertToDollars(21.00); */

    int munir = calculateBonus(7);
    int hamza = calculateBonus(12);

    printf("You earned %d Bonus\n",munir);
    printf("You earned %d Bonus\n",hamza);
    printf("Andrew earned %d Bonus",calculateBonus(6));


    return 0;
}

//don't include function defination at botoom bcz computer reads code form top to bottom

/*void printSomething(){

printf("Hello use me");

//it means i m done with this function go somewhere else
return;

} */


