Sample 11
OPENING A BINARY FILE


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
struct record //structure definition
{
char name[50];
int age;
float wage;
};
88
void main( ) //begin main program
FILE *fp; //file declaration
struct record myfriend; //structure declaration
char file[12];
int a;
clrscr( );
printf(“Enter filename”);
gets(file);
fp = fopen(file, “rb”); //opening a file for reading only
if(fp = = NULL) //error trapping
{printf(“Error opening file”);
exit(1);
}
printf(“All records\n”);
while(fread(&myfriend, sizefo(struct record)1,fp) ! = NULL)
//reading a file
printf(“\n%s %d %f”, myfriend.name, myfriend.age, myfriend.wage);
//display values
fclose(fp) //closing the file
getch( );
}
