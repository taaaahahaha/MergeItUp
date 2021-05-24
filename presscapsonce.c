#include <stdio.h>

int main()
{
    char str1[] = "saRthAk";
    char str2[] = "HARDI";
    char str3[] = "Pranav";
    int small = 0, cap = 0, inv = 0;

    for (int i = 0; i < 7; i++) // for saRthAk
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            cap++;
        else if (str1[i] >= 'a' && str1[i] <= 'z')
            small++;
        else
            inv++;
    }

    if (inv != 0)
        printf("['The name consists of an invalid character.',");
    else if (cap == 7)
        printf("['small',");
    else if (small == 7)
        printf("['capital',");
    else if (str1[0] >= 'A' && str1[0] <= 'Z' && cap == 1)
        printf("['perfect',");
    else if (str1[0] >= 'a' && str1[0] <= 'z' && cap != 0 && small != 0)
        printf("['useBrain',");

    small = 0, cap = 0, inv = 0;

    for (int i = 0; i < 5; i++) // for HARDI
    {
        if (str2[i] >= 'A' && str2[i] <= 'Z')
            cap++;
        else if (str2[i] >= 'a' && str2[i] <= 'z')
            small++;
        else
            inv++;
    }

    if (inv != 0)
        printf("'The name consists of an invalid character.',");
    else if (cap == 5)
        printf("'small',");
    else if (small == 5)
        printf("'capital',");
    else if (str2[0] >= 'A' && str2[0] <= 'Z' && cap == 1)
        printf("'perfect',");
    else if (str2[0] >= 'a' && str2[0] <= 'z' && cap != 0 && small != 0)
        printf("'useBrain',");

    small = 0, cap = 0, inv = 0;

    for (int i = 0; i < 6; i++) // for Pranav
    {
        if (str3[i] >= 'A' && str3[i] <= 'Z')
            cap++;
        else if (str3[i] >= 'a' && str3[i] <= 'z')
            small++;
        else
            inv++;
    }

    if (inv != 0)
        printf("'The name consists of an invalid character.']");
    else if (cap == 6)
        printf("'small']");
    else if (small == 6)
        printf("'capital']");
    else if (str3[0] >= 'A' && str3[0] <= 'Z' && cap == 1)
        printf("'perfect']");
    else if (str3[0] >= 'a' && str3[0] <= 'z' && cap != 0 && small != 0)
        printf("'useBrain']");
}


// I formatted the document in the end