/*
Author: Karan Sharma
Date: October 8, 2020.
Project Details: A console application on pointers, which shows different uses of pointers.
This file contains functions of menu page and pointers brief explanation page.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

void retryMenu(){ //this function is used to taking user input and displaying pages according to the input by the user.
    char thischoice;

    printf("\n>Press 'y' to go back to the Pointer Menu\n>Press 'q' to quit\n>Press 'h' to go back to the home page\n# ");
    scanf(" %c", &thischoice);
    if(thischoice=='y' || thischoice=='Y'){system("clear");
        Sleep(1000);
        loading();
        menu();
    }
    else if(thischoice=='q' || thischoice=='Q'){
        printf("Destroying the data. Please Wait!!!");
        loading();
        Sleep(1500);
        return 1;//to make the application stop after displaying one pattern.
    }
    else if(thischoice=='h' || thischoice=='H'){
        Sleep(1000);
        loading();
        main();
    }
    else{
        Sleep(1500);
        printf("You made a wrong choice! Please choose again->\n");
        retryMenu();
    }
}

void menu(){ //this function is a menu where the user chooses what use of pointers they would like to learn about.
    system("clear");

    int menuChoice;

    date_time();
    logo();
    Sleep(1500);
    printf("\n\n->->");
    printf("\nMenu");
    printf("\n->->");
    Sleep(1500);
    printf("\n\n#Press 1 for \"Basic memory allocation to pointer\"");
    printf("\n\n#Press 2 for \"Allocation of two variables to one pointer\"");
    printf("\n\n#Press 3 for \"Memory allocation of one array to a pointer\"");
    printf("\n\n#Press 4 for \"Memory allocation of specific element of an array to a pointer\"");
    printf("\n\n#Press 5 for \"Functions and pointers\"");
    printf("\n\n#Press 6 for \"Pointer Array\"");
    printf("\n\n#Press 7 for \"Allocating memory with pointers\"");
    Sleep(1500);

    printf("\n\nWhat is your choice? ");
    scanf(" %d", &menuChoice);

    switch(menuChoice){
        case 1:
            printf("\nIn progress, please wait!!!\n");
		    Sleep(10);
		    printf("\n");
            basicPointer();
            footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retryMenu();
            break;
        case 2:
            printf("\nIn progress, please wait!!!\n");
		    Sleep(10);
		    printf("\n");
		    twoPointer();
		    footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retryMenu();
            break;
        case 3:
            printf("\nIn progress, please wait!!!\n");
		    Sleep(10);
		    printf("\n");
		    oneArray();
		    footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retryMenu();
            break;
        case 4:
            printf("\nIn progress, please wait!!!\n");
		    Sleep(10);
		    printf("\n");
		    specificArray();
		    footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retryMenu();
            break;
        case 5:
            printf("\nIn progress, please wait!!!\n");
		    Sleep(10);
		    printf("\n");
		    funcPoint();
		    footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retryMenu();
            break;
        case 6:
            printf("\nIn progress, please wait!!!\n");
		    Sleep(10);
		    printf("\n");
		    pointArray();
		    footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retryMenu();
            break;
        case 7:
            printf("\nIn progress, please wait!!!\n");
		    Sleep(10);
		    printf("\n");
		    mallocs();
		    footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retryMenu();
            break;
        default:
            Sleep(10);
            printf("You either chose a number greater than 7 - less than 1 or you typed in an alphabet.");
            retryMenu();
            break;
    }
}

void retryPointers(){ //this function is used to taking user input and displaying pages according to the input by the user.
    char pChoice;

    printf("\n\n\n>Press 'y' to continue\n>Press 'q' to quit now\n>Press 'h' to go back to home page\n#");
    scanf(" %c", &pChoice);

    if(pChoice=='y' || pChoice=='Y'){
        Sleep(1500);
        menu();
    }
    else if(pChoice=='q' || pChoice=='Q'){
        printf("Destroying the data. Please Wait!!!");
        loading();
        Sleep(1500);
        return 1;
    }
    else if(pChoice=='h' || pChoice=='H'){
        Sleep(1500);
        main();
    }
}

void pointers(){ //this function shows basic information about pointers a user needs to learn before they get started on pointers.
    system("clear");

    date_time();
    logo();
    printf("\n\nWhat are pointers?");
    Sleep(2000);
    printf("\nFirst I would like to mention the definition of pointers that most of the programmers use, which is \"A pointer points\" and it is bad way to explain pointers.");
    Sleep(2000);
    printf("\n->A pointer is a variable that holds a memory location/an address, not just any address but the address of a specific variable.");
    Sleep(2000);
    printf("\n->A pointer is highly useful and powerful.\n->Just like any other variable, a pointer is declared of a specific data type.\n->The * operator is prefixed before the pointer variable name.");
    Sleep(2000);
    printf("\n->Pointers must be initialized before they are used.\n->A pointer is always assigned to the address of another variable.");
    Sleep(1000);
    printf("\n->The pointer data type and it's variable data type should match.");
    Sleep(1000);
    printf("\n\n");
    for(int x=0;x<12;x++){
        Sleep(100);
        printf("->");
    }
    Sleep(1000);
    printf("\n\nDUAL NATURE OF POINTERS\n");
    Sleep(1000);
    printf("->Pointers use the * operator when declared.\n->When it is used without the * operator, the pointer represents an address.");
    printf("\n->When it is used with the * operator, the pointer represents the value at it's address.");

    Sleep(500);
    footer();
    Sleep(2000);
    printf(" Loading! Please Wait!!! ");
    loading();
    retryPointers();
}
