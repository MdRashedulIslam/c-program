#include<iostream>
#include<stdio.h>
#include<string.h>
#define a 50
using namespace std;
int mark=0,tp=0;
double tct=0,gpa;
int id[a];
char sub[a][a];
double number[a][a];
double ct[a][a];
double point[a][a];
double credit[a][a];
int totalnum[a][a];

void grading(int s,int m)
{

    for(int i=0;i<s;i++)
    {
         cout<<"Enetr Student Id "<<endl;
         cin>>id[i];

        for(int j=0;j<m;j++)
        {

            cout<<"Enter Subject"<<endl;
            scanf("%s",&sub[i][j]);
            cout<<"Enter Number"<<endl;
            scanf("%lf",&number[i][j]);
            cout<<"Enter Ct"<<endl;
            scanf("%lf",&ct[i][j]);
            cout<<"Enter Credit"<<endl;
            scanf("%lf",&credit[i][j]);

        }

    }


    for(int k=0;k<s;k++)
    {
         cout<<"Student Id: "<<id[k]<<endl;


        for(int l=0;l<m;l++)
        {


          totalnum[k][l]=number[k][l]+ct[k][l];
          mark=mark+ totalnum[k][l];
          tct=tct+credit[k][l];
          if(totalnum[k][l]>=80)
          {
              cout<<sub[k][l]<<" = "<<"A+"<<endl;
              point[k][l]=4.00*credit[k][l];


          }

           if(totalnum[k][l]<80 && totalnum[k][l]>=75 )
          {
              cout<<sub[k][l]<<" = "<<"A"<<endl;
               point[k][l]=3.75*credit[k][l];;

          }

            if(totalnum[k][l]<75 && totalnum[k][l]>=70 )
          {
              cout<<sub[k][l]<<" = "<<"A-"<<endl;
               point[k][l]=3.50*credit[k][l];;

          }
            if(totalnum[k][l]<70 && totalnum[k][l]>=65 )
          {
              cout<<sub[k][l]<<" = "<<"B+"<<endl;
              point[k][l]=3.25*credit[k][l];

          }

            if(totalnum[k][l]<65 && totalnum[k][l]>=60 )
          {
              cout<<sub[k][l]<<" = "<<"B"<<endl;
              point[k][l]=3.00*credit[k][l];
          }

            if(totalnum[k][l]<60 && totalnum[k][l]>=55 )
          {
              cout<<sub[k][l]<<" = "<<"B-"<<endl;
              point[k][l]=2.75*credit[k][l];

          }

             if(totalnum[k][l]<55 && totalnum[k][l]>=50 )
          {
              cout<<sub[k][l]<<" = "<<"c+"<<endl;
                 point[k][l]=2.50*credit[k][l];
          }

            if(totalnum[k][l]<50 && totalnum[k][l]>=45 )
          {
              cout<<sub[k][l]<<" = "<<"c"<<endl;
               point[k][l]=2.25*credit[k][l];

          }

           if(totalnum[k][l]<45 && totalnum[k][l]>=40 )
          {
              cout<<sub[k][l]<<" = "<<"D"<<endl;
              point[k][l]=2.00*credit[k][l];

          }


         tp=point[k][l]+tp;





        }

        gpa=tp/tct;

        printf("GPA: %.2lf",gpa);

    }




}


int main()
{

      int s,m;
    printf("Enter The Number Of Student:\n");
    cin>>s;

    printf("Enter The Number Of Subject:\n");
    cin>>m;

    grading(s,m);

}
