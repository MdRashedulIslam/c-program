#include<stdio.h>
int n,i,j,z=1;
int main()
{
    printf("enter the level:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==1)
            {
                printf("%d\n",i);
            }
            else
            {
                z=z+1;
                printf("%d\t",z);

            }

        }
       printf("\n");
    }
    return 0;
}
