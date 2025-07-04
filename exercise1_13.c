#include <stdio.h>

#define MAX 100

int main()
{
    int c, i, count, maxLength, maxHeight;

    int word[MAX];

    for (i = 0; i <= MAX; i++)
    {
        word[i] = 0;
    }

    count = i = maxLength, maxHeight = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            word[i] = count;
            i++;
            count = 0;
        }
        else
        {
            ++count;
        }
    }

    word[i] = count;

    // максимальная длина гистограммы
    for (int m = 0; m < MAX; m++)
    {
        if (word[m] == 0)
        {
            maxLength = m;
            break;
        }
    }

    // максимальная высота гистограммы
    for (int h = 0; h <= maxLength; h++)
    {
        if (word[h] > maxHeight)
        {
            maxHeight = word[h];
        }
    }

    printf("\n");

    for (int j = maxHeight; j > 0; j--)
    {
        for (int i = 0; i < maxLength; ++i)
        {
            if (word[i] >= j)
                putchar('#');
            else
                putchar(' ');
        }
        putchar('\n');
    }
}