/*Printing area and perimeter of a rectangle*/

#include <stdio.h>
int main(void)

{
    float l,b,p,a;  /*Specifying variables and data types*/
    printf("Enter length of rectangle\n");
    scanf("%f",&l);
    
    printf("Enter breadth of recatngle\n");
    scanf("%f",&b);
    
    p=2*(l+b); a=l*b;  /*Formula for perimeter and area*/
    printf("Perimeter=%f Area=%f\n",p,a);
    return 0;
}     
