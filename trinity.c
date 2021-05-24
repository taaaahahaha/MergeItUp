#include<stdio.h>
#include<math.h>

int main()
{
    int arr1[6]={33,99,20,60,101,61};
    int arr2[6]={78,51,149,112,140,75};
    int a,b,c;
    int x=0;
    int i,j,k;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            for(k=j+1;k<6;k++)
            {
                a=pow(arr1[i],2);
                b=pow(arr1[j],2);
                c=pow(arr1[k],2);
                if(a == b + c || b == a + c || c == a + b)
                {
                    x++;
                }
            }
        }
    }
        if(x!=0)
        printf("Yay\n");
        else
        printf("Nay\n");   

        x=0;

    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            for(k=j+1;k<6;k++)
            {
                a=pow(arr2[i],2);
                b=pow(arr2[j],2);
                c=pow(arr2[k],2);
                if(a == b + c || b == a + c || c == a + b)
                {
                    x++;
                }
            }
        }
    }
        if(x!=0)
        printf("Yay\n");
        else
        printf("Nay\n");   
    return 0;
}