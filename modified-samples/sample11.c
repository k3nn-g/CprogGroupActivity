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

void main(){ //begin main program
    FILE *fp; //file declaration
    
    struct record myfriend; //structure declaration
    char file[30];
    int a;

    printf("Enter filename: ");
    gets(file);

    fp = fopen(file, "rb"); //opening a file for reading only
        if(fp == NULL){ 
            printf("Error opening file");
            exit(1);
        }
        
    printf("All records\n");

    //using fread only reads binary data, thus the used of fscanf
    while(fread(&myfriend, sizeof(struct record), 1,fp) == 1){
        //reading a file
        printf("\n%s %d %.2f", myfriend.name, myfriend.age, myfriend.wage);
    }
    
    fclose(fp); //closing the file
    getch();
}