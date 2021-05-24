#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "committee";         //9
    char s2[] = "telecommunication"; //17
    int count;
    int i;

    for (i = 0; i < 9; i++)
    {
        count = 1;
        while (i < 8 && s1[i] == s1[i + 1])
        {
            count++;
            i++;
        }
        printf("%c%d", s1[i], count);
    }

    printf("\n");

    for (i = 0; i < 17; i++)
    {
        count = 1;
        while (i < 16 && s2[i] == s2[i + 1])
        {
            count++;
            i++;
        }
        printf("%c%d", s2[i], count);
    }

    return 0;
}
