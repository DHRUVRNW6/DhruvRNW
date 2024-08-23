#include<stdio.h>
void main()
{
 int x,y,z;
 printf("Enter the value of x:");
 scanf("%d",&x);
 printf("Enter the value of y:");
 scanf("%d",&y);
 printf("Enter the value of z:");
 scanf("%d",&z);
 if(x>=y)
{
    if(x>=z)
    {
        printf("x is the max");
    }
    else{
        printf("z is the max");
    }
}
    else{
        printf("y is the max");
}

}