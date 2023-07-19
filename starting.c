//By Munir


//Preprocessor Directives / Headers/ Liabraries that contains builtin functions
#include <stdio.h> //for input output operations like printf
#include <stdlib.h>

//for using characters built in functions
#include <ctype.h>

//Making Constant
#define MYNAME "Munir Butt" //Variable should be CAPATALIZED and no need to put semicolon at end of pre-processor directive

//Adding String Library
#include <string.h>

//Math Library
#include<math.h>

#include<time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//whenever you run a program the computer will look for main function first
int main(int argc, char *argv[])
{

//	after finding main computer will execute following statement/lines
//	printing something
//	printf("Best of Luck for C Programming\n");
//	printf("Munir Coding Lover");


    //1: Conversion Character
//	basically it tells what type of data we are passing , %s act as a placeholder that we will replace shortly
//%s will get replaced by Munir bcz %s is a placeholder

    //printf("%s is the best coder","Munir");
    //printf("\n");
    //we can use multiple placeholders as many as we want
    //printf("%s Loves the Following Programming Languages:\n%s %s %s","Munir","C","C++","JS");
    //printf("\n");

    //%d
    //printf("I Lost around %d percent Body Fat :)",4);
    //printf("\n");

    //Note:
//	For numbers use %f and it show only 6 decimal places
    //printf("Pi is %f",3.12345678);
    //printf("\n");
    //if you only want to show 2 decimal places type .2 before %
    //printf("Pi is %.2f",3.12345678);
    //printf("\n");
    //if you only want to show 4 decimal places type .2 before %
    //printf("Pi is %.4f",3.12345678);
    //printf("\n");



    //2: Variables

    //creating a varibale
    //int age;

    //assigning value to variable
    //age = 27;

    //Updating Variable now it stores 22 value
    //we can also do calculations
    //age = 2023-2001;

    //replacing %d placeholder with age varaible that holds 27
    //printf("Munir is %d years old",age);

    //printf("\n");

    //or we can also do this
    //int my_age;
    //int Current_Year;
    //int BirthYear;

    //Current_Year = 2023;
    //BirthYear = 2001;

    //my_age = Current_Year - BirthYear;
    //printf("Munir is %d years old",my_age);
    //printf("\n");



    //3: String Terminator

//	whenever we write a string like
//	"Munir loves coding"
//	the computer will by default add a terminator called "\0" to tell that the string ends it is basically for memory space
//	user can't see \0 it is only for computer

//	e.g
//	"Munir Butt" creates 11 bytes characters string it also counts white space and \0 terminator


    //4:Creating and Array
//					1: char is data type of array
//					2: name is variable
//					3: in between [] we specify the size of array that it holds like my name is 11 bytes with white space and string terminator
//					\0 includes as well so we type [11]
//					4:assigning the value to an array that we declared



    //char name[11] = "Munir Butt";
    //printf("My Name is %s \n",name);

    //Acessing array items
    //array indexes starts from 0

    //name[2]='z';
    //printf("My Name is %s \n",name);


    //Note
//	we can also define array without specifying its size the computer will calculate for ourselve

    //char food[] = "Tuna";
    //printf("I Like %s \n",food);


//	updating an array
//1:specify the array you want to update
//2: type the new value

    //strcpy(food,"Meat");
    //printf("I Like %s \n",food);



    //5:Using Constant that we define in Pre-Processor Directive
    //we do #define MYNAME "Munir Butt" at the top thats why Munir Butt is printed

    //printf("My name is %s \n",MYNAME);
    //printf("\n\n\n");

    //6.Custom Made Headers in custom_header.c file


    //7: Taking input from user using scanf

//	char firstname[20];
//	char crush[20];
//	int num_of_babies;

//	printf("What is your Name: \n");

    //%s placeholder will replace the value entered by user that was going to store in firstname Variable
//	scanf("%s",firstname);

//	printf("Who are you going to Marry: \n");
//	scanf("%s",crush);
//
//	printf("How many kids will you have: \n");

    //we need to use & before every single varibale like float,char and integer except an Array they have built in & ....
//	scanf("%d",&num_of_babies);
//
//	printf("%s and %s are in love and will have %d babies",firstname,crush,num_of_babies);



    //8. Mathematical Operators
//	int weight= 74;
//	printf("If i eat whole chicken i weigh %d kgs \n",weight+2);
//	printf("If i eat whole chicken i weigh %d kgs \n",weight-2);
//	printf("If i eat whole chicken i weigh %d kgs \n",weight*2);
//	printf("If i eat whole chicken i weigh %d kgs \n",weight/2);

    //modulus % gives reminder
//	printf("If i eat whole chicken i weigh %d kgs",weight%2);


    //%d is mostly used for integers and %f is used for decimal numbers
//	int a = 86;
//	int b = 21;
//	printf("%d \n",a/b);
//
//	float c = 86.0;
//	float d = 21.0;
//	printf("%f \n",c/d);




//	first it will do multiply then plus i.e, precedence
//	int a = 4 + 2 * 6;
//	printf("Result: %d \n",a);

//	it will first do 4+2 then multiply with 6
//	a = (4 + 2) * 6;



    //Calculating Average Age
//		int a;
//		int b;
//		int c;

//		assigning value in one line
//		computer reads from right to left 100 assigned to c, c value assigned to b ...
//		a = b = c = 100;
//		printf("%d %d %d \n",a,b,c);


// 		float age1,age2,age3,avg;
//
//		age1 = age2 = 15.0;
//
//		printf("Enter your Age: \n");

    //Note:  Do not forget to type & before your variable in scanf

//		scanf("%f", &age3);
//
//		avg = (age1+age2+age3) / 3;
//		printf("\n The average age of the group is %f", avg );




    //Incrementing

//	int PageViews = 0;
//	PageViews = PageViews + 1;
//	printf("Page Views: %d \n",PageViews);
//	PageViews = PageViews + 1;
//	printf("Page Views: %d \n",PageViews);
//	PageViews = PageViews + 1;
//	printf("Page Views: %d \n",PageViews);




    //Calculating Interest
    //float balance = 1000.00;
    //balance *= 1.1;
//		which is equivalent to
//		balance = balance + 1;
    //printf("Balance is: %f \n",balance);

    //balance *= 1.1;
    //printf("Balance After 2nd year is: %f \n",balance);

    //balance *= 1.1;
    //printf("Balance After 2nd year is: %f \n",balance);



    //9. TypeCasting
    //Changing data type temporaily

    //float avg_profit;
    //int price = 10;
    //int sales = 59;
    //int days_Worked = 7;

    //without type casting
    //avg_profit = (price * sales ) / days_Worked;

    //with type casting
    //avg_profit = ((float)price * (float)sales ) / (float)days_Worked;

    //do calculations with same data type so you get accurate values
    // %.2f showing upto 2 decimal places
    //printf("Average daily profit: $%.2f  ",avg_profit);



    //10. Making Decisions using IF Statements

    /*int age;

    printf("Enter your Age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("You may enter this website!!");
    }

    if(age<18){
        printf("You are so young!!");
    }

    if(age!=18){
        printf("You will not enter this website!!");
    } */



    //11. Making Decisions using Nested IF Statements


    /*int age;
    char gender;

    printf("Enter your Age: ");

    //Note: Add space before any placeholder after quotations to avoid bug
    scanf(" %d",&age);

    printf("Enter your Gender (m/f):");
    scanf(" %c",&gender);

     if(age>=18){
        printf("You may enter this website!!\n");

        if(gender=='m'){

        printf("Dude!!");

        if(gender=='f'){

        printf("Girl!!");

        }

    } */


    //12. IF ELSE Decision Making

    /*   int age;
       char gender;

       printf("Enter your Age: ");
       scanf(" %d",&age);

       printf("Enter your Gender (m/f):");
       scanf(" %c",&gender);

        if(age>=18){
           printf("You may enter this website!!\n");

           if(gender=='m'){

           printf("Dude!!");
           }else{
               printf("Girl!!");
           }



        }else{
           printf("Access Denied!!\n");
       } */



    //13. IF ELSE Decision Making

    /*
       float grade1;
       float grade2;
       float grade3;

       printf("Enter your 3 test grades: \n");
       scanf(" %f",&grade1);
       scanf(" %f",&grade2);
       scanf(" %f",&grade3);


       float avg;
       avg = (grade1 + grade2 + grade3) / 3;
       printf("Average: %.2f \n",avg);


       if(avg>=90){
           printf("Grade is A!");

       }else if(avg>=80){

           printf("Grade is B!");

       }else if(avg>=60){

           printf("Grade is C!");

       }else{

           printf("Grade is F!");

       }  */

    //13. AND OPERATOR


    /*int hourstudies = 60;
    int kidsbeatup = 0;

    if( hourstudies >= 10 && kidsbeatup ==0  ){
        printf("Good Student");
    } */


    //14. OR OPERATOR

    /*char answer;

    printf("Do you like Baggels (y/n) \n");
    scanf(" %c",&answer);

    if(answer == 'y' || answer == 'n'){
        printf("Good Job");
    }else{
        printf("Check your input");
    }


    //15. Shorthand if else

    /*
    1: inside brackets we type our condition
    2: then we put ? that act as if statement
    3: true code executed when if statemnet is true
    4: : act as else statement and execute false code

    Syntax:
    (test) ? truecode : falsecode ; */

    //Note:     Mostly used for one line code

    /* char lastName[20];
     printf("Enter your Last Name: ");
     scanf(" %s",lastName);

     (lastName[0] < 'M')  ? printf("Blue Team") : printf("Red Team"); */

    /*

    int friends= 1;

    //if friends > 1 %s will be replaced by s else it will be replaced by empty string
    printf("I have %d friend%s",friends,(friends!= 1) ? "s" : ""); */



    //16. Increment and Decrement Operator

    /*int tuna = 20;
    printf("%d \n",tuna);

    tuna++;
    printf("%d \n",tuna);

    tuna--;
    printf("%d \n",tuna); */

    /*

    int a = 5, b=10, answer =0;

    /*
    ++ before a changes a values before running the equation
    ++a bcomes 6 then 6 * 10 will execute */
    // answer = ++a * b;
    //printf("Answer: %d \n",answer);


    //reseting values
    /*
     ++ after first equation was execute then a was incremented
    a++ still remains same until 5 * 10 will execute
    answer = ++a * b;

    */
    /* a = 5, b=10, answer =0;
     answer = a++ * b;
     printf("Answer: %d \n",answer);  */



    //17. While Loops

    /* int tuna;

    while(tuna<5){
        printf("Tuna is now %d \n",tuna);
        tuna++;
    } */

    /*
    int day = 1;
    float amount =.01;

    while(day<=31){
        printf("Day: %d Amount: $%.2f \n",day,amount);
        amount *=2;
        day++;
    }  */



    //18. do While Loops (runs atleast once then check condition)

    /*
    float grade = 0;
    float scoreEntered =0;
    float numberOfTests =0;
    float avg =0;

    printf("Press 0 to quit the Program. \n\n");

    do{
            printf("Tests: %.0f  Average: %.2f \n",numberOfTests,avg);
            printf("Enter Test Score: ");
            scanf("%f",&scoreEntered);

            //the value inputed by user in scoreEntered variable was incremented in grade variable
            //grade = grade + scoreEntered
            grade+= scoreEntered;
            numberOfTests++;
            avg =  grade / numberOfTests;

    }while(scoreEntered != 0); */


    //18. For Loops

    //int meat;

    /*
    for(meat=0; meat<=10; meat++){
        printf("Meat is %d \n",meat);
    } */

    /*
     for(meat=0; meat<=100; meat+=8){
        printf("Meat is %d \n",meat);
    } */

    //Creating Tables
    /*
    int rows;
    int columns;

    //responsible for creating row (outer loop)
    for(rows=1; rows<=6; rows++){


        //for creating columns
        for(columns = 1; columns<=4; columns++){
            printf("%d ",columns);
        }

        //this will print new lines (outer loop part)
        printf("\n");
    } */



    //19. Break and Continue

    /*
    //counter variable
    int a;

    //user inputs num of types it loops
    int howMany;

    //default max value of loops
    int maxNum = 10;

    printf("How many Times you want to loop a loop: (upto 1 to 10) ");
    scanf(" %d",&howMany);

    for(a=1; a<=maxNum; a++){
        printf("%d \n",a);


        //like if user enter 3 it stores in howMany variable
        //a is counter it counts for maxNum which is 10
        //when a becomes 3 it checks the below condition
        //3=3 it breaks so only 1,2,3 is printed

        if(a==howMany){
            break;
        }

    } */


    /*
    int num = 1;

    do{

       //num 6 and 8 are skipped bcz of continue keyword other numbers are printed
       if(num==6 || num==8){
        num++;
        continue;
       }
       printf("%d is availabel \n",num);
       num++;

    }while(num<=10); */



    //20. switch

    /*

    char grade = 'C';

    switch(grade){


    case 'A':
        printf("You are an Idiot");
        break;

        case 'B':
        printf("Seriously");
        break;

        case 'C':
        printf("Well done");
        break;


        default:
            printf("LOL");
            break;

    }  */


    //21. Few Cool Characters Functions

    //Note:     We can use Int and characters interchangeibly
    //int tuna = 'c'; for character
    //int tuna  = '9'; for integer

    /*
    int tuna = '$'; //for special character

    if(isalpha(tuna)){

        printf("%c is a letter",tuna);

    }else{
        if(isdigit(tuna)){
            printf("%c is a digit",tuna);
        }else{
            printf("%c is a special symbol");
        }
    } */


    //IsUpper function

    /*
    int tuna = '$';

    if(isalpha(tuna)){

    if(isupper(tuna)){
        printf("%c is an Upper Case letter",tuna);
    }else{
        printf("%c is an Lower Case letter",tuna);
    }

    }else{

    if(isdigit(tuna)){
        printf("%c is an Digit",tuna);
    }else{
        printf("%c is not an Digit",tuna);
    }

    } */


    //Test
    /*
    char password[20];
     printf("Please Enter a password (include special character, alphabets, and digits): ");
     scanf(" %s", password);

     if (isalpha(password) && isdigit(password) && !isdigit(password)) {
         printf("Your password is acceptable\n");
     } else {
         printf("Please follow the correct format for the password\n");
     } */


    //Challenge : Password that contains alpha,numeric and special chars


    /*
        char password[20];
        printf("Please Enter a password (include special character, alphabets, and digits): ");
        scanf(" %s", password);

        int hasDigit = 0;
        int hasAlpha = 0;
        int hasSpecial = 0;


        //i<strlen(password) is a condition that ensures the loop iterates for each character in the password string.
        for(int i = 0; i<strlen(password); i++){

        //By using password[i], we can access the character at position i within the string.
             if(isdigit(password[i])){
                hasDigit = 1;
             }

             else if(isalpha(password[i])){
                hasAlpha = 1;
             }

             else{
                hasSpecial = 1;
             }

        }

        if(hasAlpha && hasDigit && hasSpecial){
          printf("Your password is acceptable\n");
        } else {
            printf("Please follow the correct format for the password\n");
        }
                        */

    //more character functions (upper case and lower case)

    /*
    char a = 'a';
    char b = 'C';
    char c = '7';

    printf("%c \n",toupper(a));
    printf("%c \n",tolower(b));
    printf("%c \n",toupper(c)); //returns the same value
    printf("%c \n",tolower(c)); //returns the same value */


    //Challenge : convert first name and last name into upper

    /*char firstName[100];
    char lastName[100];

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    // Convert the first character of the first name to uppercase
    firstName[0] = toupper(firstName[0]);

    // Convert the first character of the last name to uppercase
    lastName[0] = toupper(lastName[0]);

    printf("Modified name: %s %s\n", firstName, lastName); */





    //22. String Functions strcat and strcpy

    /*
    char dummy[20] = "Hey";

    //original string  + custom string
    //strcat(dummy, " Munir");

    strcat(dummy, " Munir");
    strcat(dummy, " your");
    strcat(dummy, " are");
    strcat(dummy, " Awesome");

    printf("%s \n",dummy);


    //replace one string with another string
    strcpy(dummy,"Munir Loves Coding");
    printf("%s",dummy); */



    //23. puts(putting string to the screen) and gets(getting strings from the user)

    /*
    char name[25];
    char lang[25];
    char sentence[100] = " ";


    puts("What is your Name: ");
    gets(name);

    puts("What is your Favourite Language: ");
    gets(lang);


    strcat(sentence,name);
    strcat(sentence," Favourite Language is: ");
    strcat(sentence,lang);


    puts(sentence); */



    //24. Mathematical Functions


    //a. Rounding up numbers

    /*float meat = 9.67893;
    float test = 5.46;

    // floor is used to round down
    printf("Meat is %.2f \n",floor(meat));
    printf("Meat is %.2f \n",floor(test));


    // ceil is used to round up to the next highest number
    printf("Meat is %.2f \n",ceil(meat));
    printf("Meat is %.2f \n",ceil(test));   */




    //b. Absolute value with abs (used to convert -ve number into +ve number)

    /*int year1;
    int year2;
    int age;

    printf("Enter your First Year: \n");
    scanf(" %d",&year1);

    printf("Enter your 2nd Year: \n");
    scanf(" %d",&year2);

    age =  year1 - year2;

    printf("Age without abs is: %d \n",age);

    //age = abs(age);
    printf("Age with abs is: %d \n",abs(age));  */


    //c. Calculating Power (first para is base && 2nd is exponent)

    //printf("Power is: %f",pow(5,3));


    //d. Calculating Square Root
    // printf("Power is: %f",sqrt(25));



    //e. Random Number Generator with rand

    /*
    int i;
    int rollDice;

    for(i=0; i<=20; i++){

      //without defining a range by def it prints random nums from 0 to 32000 without custom range
     //printf("Random number is: %d \n",rand());


     rollDice = ( rand()%6 ) + 1; //eqaution to gen random nums from 1 to 6  ( rand()%6 ) gives 1 to 5 nums and +1 gives 6
     printf("Dice number is: %d \n",rollDice);
    }  */


    //challenge
    /*
      int sum1 = 0, sum2 = 0;
     char choice;

     // Get the current time as a seed for the random number generator
     unsigned int seed = (unsigned)time(NULL);

     printf("You are about to roll a dice three times. After doing that, you get\nto decide whether the sum of your second three rolls is:\n\t- higher\n\t- lower or\n\t- the same\nas your first roll.\n\n");
     printf("So now let's start with your first three rolls:\n");

     for (int i = 1; i <= 3; i++) {
         srand(seed + i);  // Set the seed for each roll
         int diceRoll = rand() % 6 + 1;
         printf("Roll number %d: %d\n", i, diceRoll);
         sum1 += diceRoll;
     }

     printf("The sum of your first three rolls is %d.\n\n", sum1);
     printf("Now what do you think? Is the sum of your next three rolls:\n\t- higher (h)\n\t- lower (l)\n\t- the same (s)\nas your first roll?\n");
     scanf(" %c", &choice);

     for (int i = 1; i <= 3; i++) {
         srand(seed + i + 3);  // Set the seed for each roll after the first three
         int diceRoll = rand() % 6 + 1;
         printf("Roll number %d: %d\n", i, diceRoll);
         sum2 += diceRoll;
     }

     printf("The sum of your second three rolls is %d.\n", sum2);

     if (choice == 'h') {
         if (sum2 > sum1) {
             printf("Your guess was right!\n");
         } else {
             printf("Your guess was wrong!\n");
         }
     } else if (choice == 'l') {
         if (sum2 < sum1) {
             printf("Your guess was right!\n");
         } else {
             printf("Your guess was wrong!\n");
         }
     } else if (choice == 's') {
         if (sum2 == sum1) {
             printf("Your guess was right!\n");
         } else {
             printf("Your guess was wrong!\n");
         }
     } */



    //25. Int and Float Arrays

    /*int i;

    //int arrays don't have /0 at the end
    int meatballs[4] = {1,2,3,4};

    //printing an array
    for(i=0; i<4; i++){
        printf("Elements at %d: %d \n",i,meatballs[i]);
    } */

    //Getting input from the user in Array

    /*
    int i;
    int meatballs[5];
    int totalballs =0;
    int avg;

    for(i=0; i<5; i++){
        printf("How many meatballs did you eat on day %d: \n",i+1);
        scanf(" %d",&meatballs[i]);
    }

    for(i=0; i<5; i++){
        totalballs+=meatballs[i];
    }

    avg = totalballs / 5;

    printf("You ate %d meat balls total, thats an average of %d per day",totalballs,avg); */


    //Challenge

    /*int i;
    int players[5] = {31,45,23,67,21};
    int goals[5] = {25,20,35,22,23};
    int gamesPlayed[5] = {30,40,16,27,21};
    float points_per_game[5];
    float bestPPG = 0.0;
    int best_player;

    for(i=0; i<5; i++){
        points_per_game[i] = (float)goals[i] / (float)gamesPlayed[i];
        printf("%d \t %d \t %d \t %.2f \n",players[i],goals[i],gamesPlayed[i],points_per_game[i]);


        if(points_per_game[i] > bestPPG){
            bestPPG = points_per_game[i];
            best_player = players[i];
        }

    }

    printf("The Best Player is %d \n",best_player); */


    //26. Array Sorting

    //a.Bubble sort (low to high)

    int i;
    int temp; //temporary stores numbers
    int swapped;
    int howmany = 10;
    int goals[howmany];

    for(i=0; i<howmany; i++)
    {
        goals[i] = ( rand()%25 )+1;

    }

    printf("Original list \n");
    for(i=0; i<howmany; i++)
    {
        printf("%d \n",goals[i]);

    }

    // by 1 keeps sorting
    while(1)
    {

        //is the list sorted or not
        swapped = 0;


        //compares every number to the number after it till second last number
        for(i=0; i<howmany - 1; i++)
        {

            //if goal is greater than the goal after it
            if(goals[i] > goals[i+1])
            {

                // Swap them if they are in the wrong order
                //storing first number in temp var so it cant get lost
                temp = goals[i];

                //taking 2nd num and replacing with 1st num
                goals[i] = goals[i+1];

                //putting the 1st one that was in temp var and replacing with 2nd one
                goals[i+1] = temp;

                //to tell that array is sorted
                swapped = 1;



            }



        }

        if(swapped == 0)
        {
            break;
        }



    }

    printf("Sorted List \n");
    for(i=0; i<howmany; i++)
    {
        printf("%d \n ",goals[i]);
    }





//	how the program works 0 means program means running
    return 0;

}
