#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j,flag;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Prime numbers: ");

    for(i=2;i<=n;i++)
    {
        flag = 1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag = 0;
                break;
            }
        }

        if(flag==1)
        {
            printf("%d ",i);
        }
    }
    // for (int i = 2; i*i < n; i++)
    // {
    //     if(n%i!=0)
    //     {
    //         printf("Not Prime");
    //     }
        
    // }
    // printf("Prime Number: %d",n);
    
}