# include <stdio.h>
# include <unistd.h>

const int LA_VACA_LOLA = 30;   

void updateBar (int percemt_done)
{
    int num_char = (percemt_done * LA_VACA_LOLA)/100;
    printf ("\r[");

    for (int i = 0; i<= LA_VACA_LOLA; i++)
    printf((i<=num_char)?"o":" ");
    printf("] %d %% Lest gooo!", percemt_done);
}

void Loading()
{
    for (int i = 0; i <= 100; i++)
    {
        updateBar(i);
        usleep(20000);
    }
    
}

void main ( )
{
    int progress();
    printf (" \n ");
    Loading();
}