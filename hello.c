#include<stdio.h>
int main()
{
    int i,a[30]={0},value[30]={0},j;
    printf("enter the checking value:\n");
    scanf("%d",&value[0]);
    for(i=0;value[i]>=1;i++)
    {
        if(value[i]%2==0)
        {
                        //(int)(value[i]/2);
            value[i]=(int)(value[i]/2);
            printf("%d\n",value[i]);
            value[i+1]=value[i];
            if(value[i+1]==1)
            {
                return 0;
            }
        }
        else
        {
            value[i]=3*value[i] + 1;
            printf("%d\n",value[i]);
            value[i+1]=value[i];
        }
    }
    return 0;
}
