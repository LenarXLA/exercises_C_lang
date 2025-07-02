#include <stdio.h>

#define MAX 100

int main()
{
    int c, i, count, maxNIndex;
    
     int arr[MAX];

     for (i = 0; i <=  MAX; i++)
     {
        arr[i] = 0;
     }

     count = i  = maxNIndex = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            arr[i] = count;
            i++;
            count = 0;
        } else {
            ++count;
        }
    }

    arr[i] = count;

    for (int m = 0; m < MAX; m++)
    {
        if (arr[m] == 0) {
            maxNIndex = m - 1;
            break;
        }
    }

    printf("\n");
    for (i = 0; i <= maxNIndex; ++i) {
        for (int j = 0; j < arr[i]; ++j) {
          if (i <= arr[j])
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
}