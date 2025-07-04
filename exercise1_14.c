#include <stdio.h>

#define MAX 100

int main()
{
    int c, ind, flag;
    int word[MAX];
    int count[MAX];

    ind = flag = 0;

    for (int i = 0; i <= MAX; i++)
    {
        word[i] = 0;
        count[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {

        for (int i = 0; i < ind; i++)
        {
            if (c == word[i])
            {
                count[i]++;
            }
        }

        for (int j = 0; j <= ind; j++)
        {
            if (word[j] == c)
            {
                flag++;
            }
        }

        if (flag == 0)
        {
            word[ind] = c;
            count[ind]++;
            ++ind;
        }
        flag = 0;
    }
    printf("\n");

    for (int i = 0; i < ind; i++)
    {
        printf("%c : ", word[i]);
        for (int j = 0; j < count[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}