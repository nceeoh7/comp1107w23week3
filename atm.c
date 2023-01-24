#include <stdio.h>
#include "helpers.h"
#include <stdbool.h>

int main()
{
    //Ask for the client's name
    string name = get_string("Please enter your name.\n");

    int age = 8;

    printf("Welcome %s!\n", name);

    char isRunning = 'y';

    while(isRunning != 'n' || isRunning != 'N'){
        //How to ask for the amount of money to dispense
        int money = get_int("How much money would withdraw?\n");

        int hundreds = 0, fifties =0, twenties= 0, tens =0, fives= 0;

        //bool isDispensable;
        // if(money % 5 == 0){
        //     isDispensable = true;
        // } else {
        //     isDispensable = false;
        // }

        bool isDispensable = money % 5 == 0 ? true : false;

        bool isEnough = money >= 5 ? true : false;

        if(isEnough && isDispensable){

            //For 150, money will equal 1
            hundreds = money / 100;

            int remainder= 0;
            remainder = money % 100; 

            fifties = remainder / 50;

            remainder = remainder % 50;

            twenties = remainder / 20;

            remainder = remainder % 20;

            tens = remainder / 10;

            remainder = remainder % 10;

            fives = remainder / 5;

            remainder = remainder % 5;
            printf("I will dispense:\n");
            printf("%dx $100 bill(s)\n", hundreds);
            printf("%dx $50 bill(s)\n", fifties);
            printf("%dx $20 bill(s)\n", twenties);
            printf("%dx $10 bill(s)\n", tens);
            printf("%dx $5 bill(s)\n", fives);
            //printf("and I will eat your $%d\n", remainder);


        }else{
            if(!isEnough){
            printf("The machine cannot dispense less than $5.\n");
            }

            if(!isDispensable){
            printf("The smallest denomination the machine can dispense is $5.\n");
            }

        }


        isRunning = get_char("Do you want to keep withdrawing?");
    }
   


    //get_string() will help you get a name
    //get_char() is a good way to ask if the machine should keep dispensing.
    
    return 0;
}