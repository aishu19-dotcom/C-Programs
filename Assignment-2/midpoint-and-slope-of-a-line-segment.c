/*
Author: Aishwarya
Program 8: Write a C program to find the slope and midpoint of a given line segment?
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    float x1,x2,y1,y2,slope,midX,midY;
    clrscr();

    printf(" Enter the X Coordinate of Endpoint 1: ");
    scanf("%f",&x1);
    printf(" Enter the Y Coordinate of Endpoint 1: ");
    scanf("%f",&y1);

    printf(" Enter the X Coordinate of Endpoint 2: ");
    scanf("%f",&x2);
    printf(" Enter the Y Coordinate of Endpoint 2: ");
    scanf("%f",&y2);

    printf(" The Endpoints of a Line are : (%.2f,%.2f) and (%.2f,%.2f)",x1,y1,x2,y2);

    slope=(y2-y1)/(x2-x1);

    midX=(x1+x2)/2;
    midY=(y1+y2)/2;

    printf(" Slope : %.2f",slope);
    printf(" Midpoint : (%.2f,%.2f)",midX,midY);
    getch();
}
