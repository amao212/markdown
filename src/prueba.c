#include <stdio.h>


void drawLetraA(int t)
{
    t=t*2;
    for(int i=1; i<=t; i++)
    {
        for(int j=1;j<=t;j++)
        {
            if((i==1 || i == (t/2) || j==1 ) || (j == t && i <=(t)  ))
                printf("*");
            else
                printf(" ");
        }
        printf("\t");

        for(int j=1;j<=t;j++)
        {
            if((i==1 || i == (t/2) || j==1 ) || (j == t && i <=(t)  ))
                printf("*");
            else
                printf(" ");
        }
        printf("\t");

         for(int j=1;j<=t;j++)
        {
            if((i==1 || i == (t) || j==1  ) || (j == t && i <=(t)  ))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


main()
{

    drawLetraA(5);
    
}


