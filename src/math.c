#include <stdio.h>
#include <math.h>

void main()
{
    double d = sqrt((double) 4);
    double p = pow(4,2);
    printf("%f" ,d);
    printf("\n");
    printf("%f" ,p);

    int a=10;
    // ++a;
    // a++;
    printf("\na= %i", ++a);
    // printf("\na= %i",a++);



    int x=0, y=5;
    x = x * y + 1;
    printf("\nx= %i", x);
 
    x=0, y=5;
    x = x * (y+1);
    printf("\nx= %i", x);

    x=0, y=5;
    x = (x * y)+1;
    printf("\nx= %i", x);

    x=40, y=5;
    x = (x / y)/1;
    printf("\nx= %i", x);


}