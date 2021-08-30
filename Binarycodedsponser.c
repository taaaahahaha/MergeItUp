#include<stdio.h>

int main()
{
    char s1[]="01011011";
    char s2[]="10011100";
    int count=0,j;
    for(int i=0;i<8;i++)
    {
        if(s1[i]==s2[i])
        {
            continue;
        }
        else
        {
            count++;
            j=i;
            while(j<8 && s1[j]!=s2[j])
            {
                s1[j]=s2[j];
                if(j+2<8 && s1[j+2]!=s2[j+2])
                j+=2;
                else
                break;
            }
            
        }
        if (count==0)
            continue; 
    }
    printf("%d",count);

    return 0;
}

