#include <stdio.h>

#define MAX_LINE 1000

int main()
{
    int len;
    int max;
    char line[MAX_LINE];
    char longest[MAX_LINE];

    char longest[MAX_LINE];
    max = 0;
    while((len=getline(line, MAX_LINE)) > 0 )
     if(len > max)
        { 
            max = len;
            copy(lingest, line);
        }

}