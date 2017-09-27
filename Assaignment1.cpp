#include<bits/stdc++.h>
using namespace std;

int main()
{

    while(1){
int i,flag=0,m;
char s[63][20]={"asm","auto","bool","break","case","catch","char","class","const","const_cast","continue","default","delete","do","double","dynamic_cast",
"else","enum","explicit","export","extern","false","float","for","friend","goto","if","inline","int","long","mutable","namespace",
"new","operator","private","protected","public","register","reinterpret_cast","return","short","signed","sizeof","static","static_cast",
"struct","switch","template","this","throw","true","try","typedef","typeid","typename","union","unsigned","using","virtual",
"void","volatile","wchar_t","while"};
char st[10];

printf("\n Enter the string : ");
scanf("%s",&st);
//if(st!='x'||st!='X'){
for(i=0;i<63;i++)
{
m=strcmp(st,s[i]);
if(m==0)
flag=1;
}
if(flag==0)
printf("\n It is not a keyword in C/C++ language.\n");
else
printf("\n It is a keyword in C/C++ language.\n");
//}

//getch();
}
return 0;
}
