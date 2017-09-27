#include<stdio.h>
#include<string.h>
int main()
{
    char b;
    char o;
    char a;
    int i;
    int j;
    int falg=0;
    int n;
    do{
            printf("enter 1 for the character valid or invaid check:\n");
            printf("enter 2 for the interger valid or invaid check:\n");
    printf("enter 0 for exit program:\n");
    printf("enter your chose:\n");
    scanf("%d",&n);
    if(n==1)
    {
            printf("enter the character:\n");
        scanf("%s",&b);
        printf("enter the operator:\n");
        scanf("%s",&o);
        if(b==b&&o=='++'||o=='--')
        {
            printf("valid:\n");
        }
                printf("enter the character:\n");
        scanf("%s",&a);
        printf("enter the operator:\n");
        scanf("%s",&o);
           printf("enter the character:\n");
        scanf("%s",&b);
        if(a==a&&o=='+'||o=='-'&&b==b)
        {
            printf("valid");
        }
    }
    if(n==2)
    {
        printf("enter the interger number is:\n");
        scanf("%d",&i);
        printf("enter the operator is:\n");
        scanf("%d",&o);
                printf("enter the interger number is:\n");
        scanf("%d",&j);
        if(i==i&&o=='+'||o=='-'||o=='*'||o=='/'&&j==j)
        {
            printf("valid expresion");
        }
             if(i==i&&o=='++'||o=='--'&&j==j)
             {
                 printf("invalid");
             }
        {
            printf("valid expresion");
        }

    }
    if(n==0)
    {
        return 0;
    }


    }while(n>=0);
}
