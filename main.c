/*
Author: Karan Sharma
Date: October 8, 2020.
Project Details: A console application on pointers, which shows different uses of pointers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

void retryMain(){ //this function is used to taking user input and displaying pages according to the input by the user.
    char retrychoice;

    printf("\n>Press 'y' to get started on learning about POINTERS");
    printf("\n>Press 'q' to quit now and come back later");
    printf("\n>Press 'a' to learn about the developer of this application\n#");
    scanf(" %c", &retrychoice);

    if(retrychoice=='y' || retrychoice=='Y'){
        Sleep(1000);
        loading();
        pointers();
    }
    else if(retrychoice=='q' || retrychoice=='Q'){
        printf("Destroying the data. Please Wait!!!");
        loading();
        Sleep(1500);
        return 1;
    }
    else if(retrychoice=='a' || retrychoice=='A'){
        loading();
        Sleep(1500);
        aboutMe();
    }
    else{
        Sleep(1500);
        printf("You made a wrong choice! Please choose again->\n");
        loading();
        retryMain();
    }
}

int main(){
    system("clear");

    char choiceM;

    date_time();
    logo();
    Sleep(250);
    printf("\n\nAbout the application:");
    Sleep(250);
    printf("\n\nPointers are something that programmers do not like to use.");
    Sleep(250);
    printf("\nThe Pointer APP is an app that helps you to learn about pointers by showing some different uses of pointers.");
    Sleep(250);
    printf("\nThe user can choose to start learning or quit to come back later and also learn about the developer.");
    Sleep(1000);
    printf("\n\n\n\t\t\t\t\t\t\t>Press 'y' to get started on learning about POINTERS.");
    Sleep(250);
    printf("\n\t\t\t\t\t\t\t>Press 'q' to quit now.");
    Sleep(250);
    printf("\n\t\t\t\t\t\t\t>Press 'a' to learn about the developer of this application.");
    Sleep(250);
    printf("\n\n\n\t\t\t\t\t\t\t#");
    scanf(" %c", &choiceM);
    Sleep(500);
    footer();
    printf(" Loading! Please Wait!!! ");
    loading();

    if(choiceM=='y' || choiceM=='Y'){
        Sleep(1500);
        pointers();
    }
    else if(choiceM=='q' || choiceM=='Q'){
        printf("Destroying the data. Please Wait!!!");
        loading();
        Sleep(1500);
        return 1;
    }
    else if(choiceM=='a' || choiceM=='A'){
        Sleep(1500);
        aboutMe();
    }
    else{
        Sleep(1000);
        printf("\nYou made a wrong choice! Please choose again->\n");
        retryMain();
    }
    return 0;
}
