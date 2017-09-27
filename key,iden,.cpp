 #include<iostream>
 //#include<stdio.h>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char s[10000];
    int i,p=0,m=0;

    string keywords[32]= {"auto","break","case","char","const","continue",
    "default","do","double","else","enum","extern",
    "float","for","goto","if","int","long","register",
    "return","short","signed","sizeof","static",
    "struct","switch","typedef","union","unsigned",
    "void","volatile", "while"};
    printf("enter the element:\n");
   // scanf("%s",&s);

    while(scanf("%s",&s)==1){
            p = 0;
        if(s[0]=='#'){
        break;
    }
    else{
         for(i=0;i<32;i++){
        if(keywords[i]==s){
            printf("Keyword\n");
            p=1;
            break;
        }
    }

    int n = strlen(s);


    if(p==0){
        if(s[0]=='.' || (s[0]>='0' && s[0]<='9')){
            for(i=0;i<n;i++){
                if((s[i]<'0' || s[i]>'9') && s[i]!='.'){
                    printf("Invalid input\n");
                    p=1;
                    break;
                }
            }
            if(p==0){
                for(i=0;i<n;i++){
                    if(s[i]=='.'){
                        printf("Float\n");
                        p=1;
                        break;
                    }
                }
                if(p==0){
                    printf("Integer\n");
                    p=1;
                }
            }
        }
    }

    if(p==0){
        if(n==1 && (s[0]=='*' || s[0]=='+' || s[0]=='-' || s[0]=='/')){
            printf("Arithmetic Operator\n");
            p=1;
        }
        if(n==2 && s[0]=='+' && s[1]=='+'){
            printf("Increment Operator\n");
            p=1;
        }
        else if(n==2 && s[0]=='-' && s[1]=='-'){
            printf("Decrement Operator\n");
            p=1;
        }
    }

    if(p==0){
            if((s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z')
               || s[0]=='_'){
                    p=0;
               }
               else{
                    printf("Invalid input\n");
                    p=1;
               }
        if(p==0){
            for(i=1;i<n;i++){
                if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')
                || s[i]=='_' || (s[i]>='0' && s[i]<='9')){
                    m=0;
                }
                else{
                    printf("Invalid input\n");
                    m = 1;
                }
        }
            if(m==0){
                printf("Identifier\n");
            }
        }
       }
    }

    }


    return 0;
}
