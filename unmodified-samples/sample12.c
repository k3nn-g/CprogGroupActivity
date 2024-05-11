Sample 12
EDIT A BINARY FILE CONTENTS


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<ctype.h>
struct record //structure definition
{
char name[50];
int age;
float wage;
};
void main( ) //begin main program
FILE *fp, *tp; //file declaration
char key;
89
struct record myfriend; //structure declaration
char file[12];
int a;
clrscr( );
printf(“Enter filename”);
gets(file);
if(fp = fopen(file, “rb”)==0) //opening a file for reading only
{printf(“Error”);
exit(1);
}
if(fp = fopen(“temp.dat”, “wb”)==0) //opening a file for reading only
{printf(“Error”);
exit(1);
}
while(fread(&myfriend, sizeof(struct record)1,fp) ! = NULL)
//reading a file
{printf(“name: %s\nage: %d\n wage: %.2f”, myfriend.name, myfriend.age,
myfriend.wage); //display values
printf(“edit(y/n)”);
key=toupper(getch( ));
if(key = = ‘Y’)
{
printf(“Re-enter name:”);
scanf(“%s”, &myfriend.name);
printf(“Re-enter age:”);
scanf(“%d”, &myfriend.age);
printf(“Re-enter wage:”);
scanf(“%f”, &myfriend.wage);
}
fwrite(&myfriend, sizeof(struct record),1,fp);
}
fclose(fp) //closing the file
fclose(tp);
remove(file);
rename(“temp.dat”,file);
if(fp = fopen(file, “rb”)==0) //opening a file for reading only
{printf(“Error”);
exit(1);
}
clrscr( );
printf(“\nNew fle\n\n”);
while(fread(&myfriend, sizeof(struct record)1,fp) ! = NULL)
printf(“name: %s\nage: %d\n wage: %.2f”,myfriend.name,
myfriend.age,myfriend.wage);
fclose(fp);
getch( );
}