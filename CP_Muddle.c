#include <stdio.h>

int main()
{

    char s1[] = "BBGBGBBG";
    char s2[] = "GBBGBGGB";
    int count=0;
    int i;
    for (i = 0; i <= 7; i++)
    {
        if (s1[i] == 'G' && s1[i+1] == 'B')
        count++;
    }
   printf("Teams formed will be %d \n",count);

   count=0; 

    for (i = 0; i <= 7; i++)
    {
        if (s2[i] == 'G' && s2[i+1] == 'B')
        count++;
    }
   printf("Teams formed will be %d \n",count);
    return 0;
}