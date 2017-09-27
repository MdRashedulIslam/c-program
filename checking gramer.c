#include<stdio.h>
#include<string.h>
int main()
{
    char subj;
    char a_verb;
    char verb;
    char ob;
    char expre;
    char pre;
    int n;
    do{
              printf("enter the subj:\n");
        scanf("%s",&subj);
        printf("enter the a_verb:\n");
        scanf("%s",&a_verb);
        printf("enter the p.participle form\n");
        scanf("%s",&verb);
         printf("enter the preposition:\n");
        scanf("%s",&pre);
        printf("enter the object:\n");
        scanf("%s",&ob);
        printf("enter your expresion:\n");
        scanf("%s",&expre);
            printf("enter 1 for check asserative sentense right or wrong:\n");
             printf("enter 1 for check intarogetive sentense right or wrong:\n");
              printf("enter 1 for check imparative sentense right or wrong:\n");
    printf("enter 0 for exit:\n");
    printf("select your choose for check:\n");
    scanf("%d",&n);
    if(n==1)
    {
        int s;
        printf("enter 1 or 0 for check:");
        scanf("%d",&s);
        if(s==1)
        {

        if(subj==subj||a_verb==a_verb||verb==verb||pre==pre&&ob==ob)
        {
            printf("The sentense %s %s %s %s is right:",subj,a_verb,verb,ob);
        }
    }
    if(n==0)
    {
         if(a_verb==a_verb||subj==subj||verb==verb||ob==ob&&expre==expre)
        {
            printf("the sentense = is %s %s %s %s %s is not assertive but grammer is right:",a_verb,subj,verb,ob,expre);
        }
    }
}
    if(n==2)
{
    int s;
    printf("enter check for 1 or 0 for check:\n");
    scanf("%d",&s);
    if(s==1)
    {
        if(subj==subj||a_verb==a_verb||verb==verb&&ob==ob)
        {
            printf("The sentense %s %s %s %s right but not intargetive but grammer is right:",subj,a_verb,verb,ob);
        }
    }
    if(n==0)
    {
         if(a_verb==a_verb||subj==subj||verb==verb||ob==ob&&expre=='?')
        {
            printf("the sentense = is %s %s %s %s %s is intargetive :",a_verb,subj,verb,ob,expre);
        }
    }
}
    if(n==3)
{
        int s;
        printf("enter 1 or 0 for check:\n");
        scanf("%d",&s);
        if(s==1)
    {
        if(verb==verb&&ob==ob)
        {
            printf("the sentense %s %s is imparetive:",verb,ob);
        }
    }
        if(s==0)
    {
         if(a_verb==a_verb||subj==subj||verb==verb&&ob==ob||expre=='?')
        {
            printf("the sentense = is %s %s %s %s %s is not imparative:",a_verb,subj,verb,ob,expre);
        }
    }
}

    if(n==0)
    {
        printf("exit:");
    }

}while(n>=0);

    return 0;
}
