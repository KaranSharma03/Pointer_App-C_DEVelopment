/*
Author: Karan Sharma
Date: October 8, 2020.
Project Details: A console application on pointers, which shows different uses of pointers.
This file contains functions related to formatting only.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>


void date_time(){ //this method displays the system's current date and time
    time_t now;

    time(&now);
	//First page on the console to display basic information.
	Sleep(1000);
	printf("Current date & time:  %s", ctime(&now));
}

void logo(){ //this method/function displays the logo of the app
    Sleep(1000);
    printf("\n\n\n\n\t\t\t\t\t\t\t\t      ");
    for(int x=0;x<6;x++){
        Sleep(100);
        printf("-> ");
    }
    Sleep(500);
	printf("\n\t\t\t\t\t\t\t\t      -> POINTER APP ->\n\t\t\t\t\t\t\t\t      ");
	for(int x=0;x<6;x++){
        Sleep(100);
        printf("-> ");
    }
    Sleep(1000);
}

void footer(){ //this method/function displays the info of the author of this console application.
    Sleep(1000);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nMade by Karan Sharma - Your friendly neighbourhood programmer.");
    Sleep(1000);
}

void loading(){
    Sleep(500);
    printf(" . ");
    Sleep(500);
    printf(" . ");
    Sleep(500);
    printf(" . \n");
    Sleep(1000);
}

