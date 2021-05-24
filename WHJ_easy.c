#include <stdio.h>

int main()
{
    int r, c, temp;
    int a[3][3];

    a[0][0] = 2;
    a[0][1] = 4;
    a[0][2] = 2;
    a[1][0] = 4;
    a[1][1] = 4;
    a[1][2] = 2;
    a[2][0] = 2;
    a[2][1] = 2;
    a[2][2] = 4;

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (a[r][c] == 2)
                a[r][c] = 4;
            else
                a[r][c] = 2;
        }
    }

    r = 0;
    c = 0;

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            temp = a[r][0];
            a[r][0] = a[r][2];
            a[r][2] = temp;
        }
    }

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d", a[r][c]);
        }
        printf("\n");
    }
}