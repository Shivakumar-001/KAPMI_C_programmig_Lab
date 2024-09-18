//C Program to read radius and find area,volume ,sphere.
#include<stdio.h>
#define PI 3.142
void main()
{
    int radius;
    float area,volume;
    clrscr();
    printf("Enter the radius:");
    scanf("%d",&radius);
    area=4*PI*radius*radius;
    printf("Area of sphere= %f\n",area);
    volume=4/3*PI*radius*radius*radius;
    printf("Volume of sphere=%f\n",volume);
    getch();

}