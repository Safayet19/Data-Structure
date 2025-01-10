// The area= sqrt(s*(s-a)*(s-b)*(s-c))//
//s=(a+b+c)/2 //
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(void)
{
    float a,b,c,s,area;
    printf("Enter 3 values: ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("Semi Perimeter is= %.2f\n",s);


    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle= %.2lf",area); //we want 3 point//
    getch();
}

