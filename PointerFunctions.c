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


void mallocs(){ //this function shows how memory can be allocated with pointers.
    int *randNumbers, x;

    system("clear");
    puts("The code:");
    loading();
    Sleep(500);
    puts("\n\n#include <stdio.h>\n#include <stdlib.h>\n\nint main(){\n\tint *randNumbers, x;\n");
    Sleep(500);
    puts("\trandNumbers = malloc(sizeof(int)*4); /*malloc stands for memory allocation and it requires the stdlib.h header file.*/ ");
    Sleep(500);
    puts("\n\tif(randNumbers == NULL){     /*a test to ensure that null memory was not allocated.*/");
    Sleep(500);
    puts("\n\t\tputs(\"Unable to allocate memory\");\n\t\treturn 1;\n\t}\n\n\t*(randNumbers+0) = 101;\n\t*(randNumbers+1) = 201;");
    Sleep(500);
    puts("\t*(randNumbers+2) = 301;\n\t*(randNumbers+3) = 401;\n\n\tfor(x=0;x<4;x++)\n\t\t printf(\"The random number is %d: %d\",x+1,*(randNumbers+x));\n\n\treturn 0;\n}");
    Sleep(1500);
    puts("The output:");
    loading();
	Sleep(500);
	randNumbers = malloc(sizeof(int)*4);    //malloc stands for memory allocation and it requires the stdlib.h header file.
	if(randNumbers == NULL){    // a test to ensure that null memory was not allocated.
		Sleep(500);
		puts("Unable to allocate memory");
		return 1;
	}

	*(randNumbers+0) = 101;
	*(randNumbers+1) = 201;
	*(randNumbers+2) = 301;
	*(randNumbers+3) = 401;

	for(x=0;x<4;x++){
        Sleep(20);
        printf("The random number is %d: %d\n",x+1,*(randNumbers+x));
    }
	Sleep(1000);
	return 0;
}

void pointArray(){ //this function shows the use of pointers as arrays.
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	int x;

    system("clear");
    puts("The code:");
    loading();
    Sleep(500);
    puts("\n\n#include <stdio.h>\n\nint main(){\n\tchar char *days[] = {\"Monday\", \"Tuesday\", \"Wednesday\", \"Thursday\", \"Friday\", \"Saturday\", \"Sundays\"};");
    Sleep(500);
    puts("\n\tint x;\n\tfor(x=0;x<7;x++)\n\t\tprintf(\"%s\",days[x]);\n\treturn 0;\n}");
    Sleep(1500);
    puts("\nThe output:");
    loading();
	Sleep(500);
	for(x=0;x<7;x++){
        Sleep(100);
		printf("%s\n",days[x]);
	}
	Sleep(1000);
	return 0;
}

char *longest(char *string1, char *string2){ //this function is used by the function funcPoint to decide which string is longer.
	int length1,length2;

	length1 = strlen(string1);
	length2 = strlen(string2);

	if( length1 > length2 )
		return(string1);
	else
		return(string2);
}

void funcPoint(){ //this method shows the use of pointers with functions.
    char string1[] = "Karan";
	char string2[] = "Sharma";
	char *result;

    system("clear");
    puts("The code:");
    loading();
    Sleep(500);
    puts("\n\n#include <stdio.h>\n#include <string.h>\n\nchar *longest(char *string1, char *string2){");
    Sleep(500);
    puts("\n\n\tint length1,length2;\n\tlength1 = strlen(string1);\n\tlength2 = strlen(string2);\n\n\tif( length1 > length2 )");
    Sleep(500);
    puts("\t\treturn(string1);\n\telse\n\t\treturn(string2);\n}");
    Sleep(500);
    puts("\n\nint main(){\n\tchar string1[] = \"Karan\";\n\tchar string2[] = \"Sharma\";");
	Sleep(500);
	puts("\n\tchar *result;\n\tresult = longest(string1,string2);\n\tprintf(\"String '%s' is longer.\",result);");
    Sleep(500);
    puts("\n\treturn 0;\n}");
    Sleep(1500);
    puts("The output:");
    loading();
	result = longest(string1,string2);
	printf("String '%s' is longer.\n",result);
    Sleep(1000);
	return 0;
}

void specificArray(){ //this function shows the use of pointers to display specific characters of an array.
    int array[] = {101, 102, 103, 104};
	int *aptr;

	aptr = &array[2];

    system("clear");
	puts("\n\nThe code:");
	loading();
	Sleep(500);
    puts("\n\n#include <stdio.h>\n\nint main(){\n\tint array[] = {101, 102, 103, 104};\n\tint *aptr;\n\taptr = &array[2]    /* *aptr = &array[the index of element you want to be printed] */ ");
    Sleep(500);
    puts("\n\tprintf(\"The element is %d\",*aptr);\n\treturn 0; \n} ");
	Sleep(1500);
    puts("The output:");
    loading();
	Sleep(500);
	printf("The element is %d\n",*aptr);
	Sleep(1000);
	return 0;
}

void oneArray(){ //this function shows the use of pointers with an array.
    int array[] = {101, 102, 103, 104};
	int i;
	int *ptr;

	ptr = array;

    system("clear");
    puts("The code:");
    loading();
    Sleep(500);
    puts("\n\n#include <stdio.h>\n\nint main(){ \n\tint array[] = {101, 102, 103, 104};\n\tint i;\n\tint *ptr;\n\tptr = array;");
    Sleep(500);
    puts("\n\tfor(i=0;i<4;i++){ \n\t\tprintf(\"Element %d: %d\",i+1,*ptr); \n\t\tptr++;\n\t}\n\treturn 0;\n}");
    Sleep(1500);
    puts("The output: ");
    loading();
    Sleep(500);
    for(i=0;i<4;i++){
        Sleep(20);
		printf("Element %d: %d\n",i+1,*ptr);
		ptr++;
	}
	Sleep(1000);
	return 0;
}

void twoPointer(){ //this function shows the use of one pointers with two variable addresses.
    int a,b;
    int *ptr;

    ptr = &a;
    *ptr = 1234;
    ptr = &b;
    *ptr = 4567;

    system("clear");
    puts("\n\nThe code: ");
    loading();
    Sleep(500);
    puts("\n\n#include <stdio.h>\n\nint main(){ \n\tint a,b;\n\tint *ptr;\n\tptr = &a;\n\t*ptr = 1234;\n\tptr = &b;\n\t*ptr = 4567;");
    Sleep(500);
    puts("\n\tprintf(\"A is %d and B is %d\",a,b);\n\treturn 0;\n} \n");
    Sleep(1500);
    puts("The output: ");
    loading();
    Sleep(500);
    printf("A is %d and B is %d",a,b);
    Sleep(1000);

    return 0;
}

void basicPointer(){ //this function is a typical example of pointer with one variable address/location memory.
	int a;
	int *p;

	a = 1660;
	p = &a;

    system("clear");
    puts("\n\nThe code: ");
    loading();
    Sleep(500);
    puts("\n\n#include <stdio.h>\n\nint main(){");
	Sleep(500);
	puts("\n\tint a;\n\tint *p;\n\n\ta = 1660;\n\tp = &a;");
	Sleep(500);
	puts("\n\n\tprintf( \"The address of `a` is %p\",&a);");
	Sleep(500);
	puts("\n\tprintf( \"The address of `p` is %\p\",p)");
    Sleep(500);
    puts("\n\tprintf( \"The value of `a` is %\d\",a);");
	Sleep(500);
	puts("\n\tprintf( \"The value of `*p` is %\d\",*p);");
	Sleep(500);
	puts("\n\treturn 0;\n}");
    Sleep(1500);
	printf("\n\nThe output:");
	loading();
	Sleep(500);
	printf("\n\nThe address of `a` is %p\n",&a);
	Sleep(500);
	printf("The address of `p` is %p\n",p);
    Sleep(500);
	printf("The value of `a` is %d\n",a);
	Sleep(500);
	printf("The value of `*p` is %d",*p);
    Sleep(1000);
	return 0;
}

void retryAboutMe(){ //this function is used to taking user input and displaying pages according to the input by the user.
    char aboutChoice;

    printf("\n>Press 'h' to go back to home page\n>Press 'q' to quit now\n# ");
    scanf(" %c", &aboutChoice);
    if(aboutChoice=='h' || aboutChoice=='H'){
        Sleep(1000);
        loading();
        main();
    }
    else if(aboutChoice=='q' || aboutChoice=='Q'){
        printf("Destroying the data. Please Wait!!!");
        loading();
        Sleep(1500);
        return 1;
    }
    else{
        Sleep(1000);
        printf("You made a wrong choice! Please choose again->\n");
        loading();
        retryAboutMe();
    }
    return 0;
}

void aboutMe(){ //this function displays some information about the developer.
    system("clear");

    date_time();
    logo();
    printf("\n\nAbout the DEVeloper:");
    Sleep(1500);
    printf("\n\nHello! My name is Karan Sharma. Your friendly neighbourhood programmer.");
    Sleep(1500);
    printf("\nI am a 20 year old computer programmer student. My journey of programming started from learning C and C++ and so far I am knowledgeable in C,");
    printf("\nC++, Java, Bash scripting, python, Android Development, Basic networking skills, SQL on several database engines, COBOL, HTML, CSS, JS and php.");
    Sleep(1500);
    printf("\nAll thanks to my gurus who were patient enough to answer all my questions.");
    Sleep(1500);
    printf("\nI love programming, playing video games, reading books, writing poems, singing and playing acoustic guitar.");
    Sleep(1500);
    printf("\n\nThanks for reading.\n\n\n");

    Sleep(1500);
    footer();
    printf(" Loading! Please Wait!!! ");
    loading();
    retryAboutMe();
    return 0;
}

