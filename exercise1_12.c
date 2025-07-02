#include <stdio.h>

#define IN 1 /* внутри слова */
#define OUT 0 /* снаружи слова */

int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        } else if (state == OUT)
        {
            state = IN;
            putchar('\n');
        }
        putchar(c);
    }
    
}