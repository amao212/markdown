#include <stdio.h>

void main()
{
    int i = 0;
    
    inicioFor:
    i++;
    for ( ; i < 10; i++ )
    {
        // if (i % 2 == 0)
        if (i == 4 )
            continue;

         if (i == 6)
            goto finFor;

        if (i == 6)
            break;
        printf("\n %i" ,i);
    }
    finFor:
    printf("\n fin del for");
}