#include<stdio.h>
#include<string.h>
int main()
{
    char s1[9] = "fgpycuabq";
    char s2[9] = "dgapbcxiz";
    int i=0,j=0;
    int count=0,res=0;

    for(i=0;i<9;i++)
    {
        count=0;
        for(j=0;j<9;j++)
        {
            if(s1[i]==s2[j])
            count++;
        }
        if(count>0)
        res++;
    }

    printf("Length of longest substring possible %d",res);

    return 0;
}


// Length of longest substring possible 5
