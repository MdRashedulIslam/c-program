#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() {
	char string[50];
	int flag,count=0;
	//clrscr();
	printf("The grammar is: S->aS, S->Sb, S->ab\n");
	printf("Enter the string to be checked:\n");
gets(string);
	if(string[0]=='a')
        {
		flag=0;
		for (count=1;string[count-1]!='\0';count++)
		 {
			if(string[count]=='a')
			{
				flag=1;
				continue;
			}
			else if((flag==1)&&(string[count]=='a'))
			 {
				printf("The string does not belong to the specified grammar");
				break;
			}
			else if(string[count]=='a')
			{
			continue;
			}
           else if((flag==1)&&(string[count]='b'))
			 {
				printf("String accepted…..!!!!");
				break;
			}
			else
			{
				printf("String not accepted");
			}
		}

	}
	getch();
}
