#include <stdio.h>

// void - no retorna los valores o datos
void maxnumero()
{
     int a=0, b=0;
    printf("Ingrese 1er valor:");
    scanf("%d" , &a);
    printf("Ingrese 1er valor:");
    scanf("%d" , &b);

    
    if(a>b)
    {
        printf("El mayor es: %d",a);
    }
    else
    {
        printf("El mayor es: %d",b);
    }
}

void DrawLinea()
{
    for(int i=1; i<=10; i=i+1)
    {
        printf("* "); 
        //printf("%d",i);
    }
}

void DrawL()
{
    // vertical dela L
    for(int i=1; i<=10; i=i+1)
    {
        printf("*\n"); 
    }
    // horsontal dela L
    for(int i=1; i<=8; i=i+1)
        printf("* "); 
}

void DrawCuadradoRelleno()
{
    // vertical dela L
    for(int v=1; v<=10; v++)
    {
        for(int h=1; h<=10; h++)
            printf("* ");
        printf("\n"); 
    }   
}

void DrawCuadrado()
{
    // vertical dela L
    for(int v=1; v<=10; v++)
    {
        for(int h=1; h<=10; h++)
        {
            if (v==1 || v==10 || h ==1 || h ==10 ) 
            {
                printf("* ");
            }   
            else
            {
                printf("  "); 
            }       
        }
        printf("\n"); 
    }   
}           

void DrawRectangulo()
{
    int b=20, h=30;
    for(int i=1; i<=h; i++)
    {
        for(int j=1;j<=b;j++)
        {
            if((i==1 || i == h) || (j==1 || j == b))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void drawTrianguloRectangulo(int l)
{
    for(int i=1; i<=l; i++)
    {
        for(int j=1;j<=l;j++)
        {
            if((j==1 || i == l) || (j == i))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

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
        printf("\n");
    }
}
main()
{
   //maxnumero();
   //DrawLinea();
   //DrawL();
   //DrawCuadradoRelleno();
   //DrawCuadrado();
   //DrawRectangulo();
   //drawTrianguloRectangulo(10);
   drawLetraA(5);
}