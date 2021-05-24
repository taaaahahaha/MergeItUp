#include <stdio.h>

int main()
{
    int r, r2, c, c2, temp;
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
    r2 = 2;
    c2 = 2;

    while (r <= r2)
    {
        while (c <= c2)
        {
            temp = a[r][c];
            a[r][c] = a[r2][c2];
            a[r2][c2] = temp;

            c++;
            c2--;
        }

        temp = a[r][c];
        a[r][c] = a[r2][c2];
        a[r2][c2] = temp;

        r++;
        r2--;
    }

    for (r = 2; r >= 0; r--)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d", a[r][c]);
        }
        printf("\n");
    }
}