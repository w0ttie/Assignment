#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main()
	{

	char firstname[20], lastname[20], class_[10], schoolfirstname[20], schoolsecondname[20], schoollastname[20], grade[4];
	int english, math, science, geography, total_marks, percentage;

	clrscr();

	grade[1] = ' ';
	grade[2] = ' ';
	grade[3] = ' ';
	grade[4] = ' ';

	printf("\n\n\n\n\n\n\n\n\n********************************************************************************");
	printf("\t\t        C++ Report Card Maker Assignment");
	printf("\n********************************************************************************");
	printf("\n\n\n\n\n\n\n\n\n\n\nPress Any Key to Continue...");
	getch();
	clrscr();

	printf("\n\n\t\t     =======================================");
	printf("\n\t\t            DETAILED REPORT CARD MAKER");
	printf("\n\t\t     =======================================");

	printf("\n\n\t\tEnter your First Name         : ");
	scanf("%s", firstname);

	printf("\n\n\t\tEnter your Last Name          : ");
	scanf("%s", lastname);

	printf("\n\n\t\tEnter your Class              : ");
	scanf("%s", class_);

	printf("\n\n\t\tEnter School First Name       : ");
	scanf("%s", schoolfirstname);

	printf("\n\n\t\tEnter Your School Second Name : ");
	scanf("%s", schoolsecondname);

	printf("\n\n\t\tEnter Your School Last Name   : ");
	scanf("%s", schoollastname);

	clrscr();

	printf("\n\n\t\t     =======================================");
	printf("\n\t\t           ENTER YOUR MARKS OUT OF 100");
	printf("\n\t\t     =======================================");

	printf("\n\n\t\tEnter your marks for English (0-100%)   : ");
	scanf("%d", &english);

	printf("\n\n\t\tEnter your marks for Math (0-100%)      : ");
	scanf("%d", &math);

	printf("\n\n\t\tEnter your marks for Science (0-100%)   : ");
	scanf("%d", &science);

	printf("\n\n\t\tEnter your marks for Geography (0-100%) : ");
	scanf("%d", &geography);

	if (english > 100 || english < 0 || math > 100 || math < 0 || geography > 100 || geography < 0 || science > 100 || science < 0) {
	clrscr();
	printf("\n\n\t\t     =======================================");
	printf("\n\t\t            PLEASE ENTER A VALID VALUE");
	printf("\n\t\t     =======================================");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue...");
	getch();
	}

	else {

	total_marks = (english + math + science + geography);
	percentage = (total_marks / 4);

	if (percentage >  90) {
	grade[0] = 'A';
	grade[1] = '+';
	}

	else if (percentage >= 80) {
	grade[0] = 'A';
	}

	else if (percentage >= 75) {
	grade[0] = 'B';
	grade[1] = '+';
	}

	else if (percentage >= 70) {
	grade[0] = 'B';
	}

	else if (percentage >= 65) {
	grade[0] = 'C';
	grade[1] = '+';
	}

	else if (percentage >= 60) {
	grade[0] = 'C';
	}

	else if (percentage >= 50) {
	grade[0] = 'D';
	}

	else {
	grade[0] = 'F';
	grade[1] = 'A';
	grade[2] = 'I';
	grade[3] = 'L';

	}

	clrscr();

	printf("\n\n\t\t      ========================================");
	printf("\n\t\t\t  STUDENT'S DETAILED REPORT CARD");
	printf("\n\t\t      ========================================");
	printf("\n\n\t\tName: %s %s\n\n", firstname, lastname);
	printf("\t\tClass: %s\tSchool Name: %s %s %s\n\n", class_, schoolfirstname, schoolsecondname, schoollastname);
	printf("\t\t\t+---------------+-----------------+\n");
	printf("\t\t\t|   SUBJECTS    |  MARKS OBTAINED |\n");
	printf("\t\t\t+---------------+-----------------+\n");
	printf("\t\t\t|   English     |       %d\t  |\n", english);
	printf("\t\t\t|   Math        |       %d\t  |\n", math);
	printf("\t\t\t|   Science     |       %d\t  |\n", science);
	printf("\t\t\t|   Geography   |       %d\t  |\n", geography);
	printf("\t\t\t+---------------+-----------------+\n");
	printf("\t\t\t| Total (/400)  |       %d\t  |\n", total_marks);
	printf("\t\t\t| Percentage    |       %d\t  |\n", percentage);
	printf("\t\t\t| Final Grade   |       %c%c%c%c\t  |\n", grade[0], grade[1], grade[2], grade[3]);
	printf("\t\t\t+---------------+-----------------+\n\n");

	printf("Press any key to continue...");
	getch();
	     }
	}
