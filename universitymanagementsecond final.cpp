#include<iostream>
#include<fstream>
#include<cstring>
#include<conio.h>
#include<stdlib.h>
#include<cstring>
#include<iomanip>
#include <stdlib.h>
// testing 
using namespace std;
fstream file;
void great(double data);
void control();
int sub=0;
int a=0,b=0;
double temp_total_cradit;
double temp_multi_credit;
char tempsubcode[100];
double tempcredit=0;
int no_of_sub=0;
double greade_point;
void inputresultdata();
void show_data();
struct result{
   long int ID;
   char subcode[100];
   double  mark;
   float  credit;
   float  earncredit;
};
result one_one;

struct studentinfo
{
    long int ID;
    double mark;
    int semester_no;
    double gpa_of_thet_semester;

};

studentinfo data;
void findsubject(int a,int b,int subno)
{

    switch(b)
    {
    case 1:
        {
            switch(subno)
            {
                case 1:
                    {

                        cout<<"Fundamental of Information and Communication Technology "<<endl;
                        char tempsubcode[100]={'I','C','E','1','1','0','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 2:
                    {
                        cout<<"Fundamental of Information and Communication Technology  Sessional"<<endl;
                        char tempsubcode[100]={'I','C','E','1','1','0','2'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=1.5;
                        break;

                    }
                case 3:
                    {
                        cout<<"Electronics"<<endl;
                        char tempsubcode[100]={'I','C','E','1','1','0','3'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 4:
                    {
                        cout<<"Electronics Sessional"<<endl;
                       char tempsubcode[100]={'I','C','E','1','1','0','4'};
                       strcpy(one_one.subcode,tempsubcode);
                        tempcredit=1.5;
                        break;

                    }
                case 5:
                    {
                        cout<<" Differential and Integral Calculus "<<endl;
                        char tempsubcode[100]={'M','A','T','H','1','1','4','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 6:
                    {
                        cout<<"Physics "<<endl;
                        char tempsubcode[100]={'P','H','Y','1','1','0','3'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 7:
                    {
                        cout<<"Physics Sessional"<<endl;
                        char tempsubcode[100]={'P','H','Y','1','1','0','4'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=1.5;
                        break;

                    }
                case 8:
                    {
                        cout<<"Technical  and Communicative English"<<endl;
                        char tempsubcode[100]={'H','U','M','1','1','0','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 9:
                    {
                        cout<<"Technical  and Communicative English Sessional"<<endl;
                        char tempsubcode[100]={'H','U','M','1','1','0','2'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=1.5;
                        break;

                    }
            }


        break;
        }
   case 2:
        {
            switch(subno)
            {
                case 1:
                    {

                        cout<<"Structured Programming Language "<<endl;
                        char tempsubcode[100]={'I','C','E','1','2','2','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 2:
                    {
                        cout<<"Structured Programming Language Sessional"<<endl;
                        char tempsubcode[100]={'I','C','E','1','2','1','2'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=1.5;
                        break;

                    }
                case 3:
                    {
                        cout<<"Digital Electronics"<<endl;
                        char tempsubcode[100]={'I','C','E','1','2','2','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 4:
                    {
                        cout<<"Digital Electronics Sessional"<<endl;
                        char tempsubcode[100]={'I','C','E','1','2','2','2'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=1.5;
                        break;

                    }
                case 5:
                    {
                        cout<<"Algebra and Vector Analysis "<<endl;
                        char tempsubcode[100]={'M','A','T','H','1','2','4','3'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 6:
                    {
                        cout<<" Statistics for Engineers  "<<endl;
                        char tempsubcode[100]={'S','T','A','T','1','2','1','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 7:
                    {
                        cout<<" Chemistry "<<endl;
                        char tempsubcode[100]={'C','H','E','M','1','2','0','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }

            }

        break;
        }
   case 3:
        {

            switch(subno)
            {
                case 1:
                    {

                        cout<<"Object oriented Programming Language "<<endl;
                        char tempsubcode[100]={'I','C','E','2','1','1','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 2:
                    {
                        cout<<"Object oriented Programming Language Sessional"<<endl;
                        char tempsubcode[100]={'I','C','E','1','2','1','2'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=1.5;
                        break;

                    }
                case 3:
                    {
                        cout<<"Electrical Circuits and Electromagnetic Waves"<<endl;
                        char tempsubcode[100]={'I','C','E','2','1','2','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 4:
                    {
                        cout<<"Electrical Circuits and Electromagnetic Waves Sessional"<<endl;
                        char tempsubcode[100]={'I','C','E','2','1','2','2'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=1.5;
                        break;

                    }
                case 5:
                    {
                        cout<<"  Signals and Systems  "<<endl;
                        char tempsubcode[100]={'I','C','E','2','1','3','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 6:
                    {
                        cout<<"Signals and Systems Sessional "<<endl;
                        char tempsubcode[100]={'I','C','E','2','1','3','2'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=1.5;
                        break;

                    }
                case 7:
                    {
                        cout<<"Matrices and Differential Equations "<<endl;
                        char tempsubcode[100]={'M','A','T','H','2','1','1','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
                case 8:
                    {
                        cout<<"Industrial Management and Accountancy"<<endl;
                        char tempsubcode[100]={'H','U','M','2','1','0','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3;
                        break;

                    }
            }
            break;
        }
    case 4:
        {
            switch(subno)
            {
            case 1:
                {
                      cout<<"Data Communication"<<endl;
                        char tempsubcode[100]={'I','C','E','2','2','1','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3.0;
                        break;

                }
            case 2:
                {
                    cout<<"Data Communication Sessional"<<endl;
                        char tempsubcode[100]={'I','C','E','2','2','1','2'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=1.5;
                        break;
                }
            case 3:
                {
                    cout<<"Wireless Communication"<<endl;
                        char tempsubcode[100]={'I','C','E','2','2','2','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3.0;
                        break;

                }
            case 4:
                {
                    cout<<"Wireless Communication Sessional"<<endl;
                        char tempsubcode[100]={'I','C','E','2','2','2','2'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=1.5;
                        break;
                }
            case 5:
                {
                    cout<<"Data Structures and Algorithms"<<endl;
                        char tempsubcode[100]={'I','C','E','2','2','3','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3.0;
                        break;
                }
            case 6:
                {
                    cout<<"Data Structures and Algorithms Sessional"<<endl;
                        char tempsubcode[100]={'I','C','E','2','2','3','2'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=1.5;
                        break;

                }
            case 7:
                {
                    cout<<"Discrete Math and Numerical methods"<<endl;
                        char tempsubcode[100]={'M','A','T','H','2','2','2','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3.0;
                        break;

                }
            case 8:
                {
                    cout<<"Society, Ethics and Technology"<<endl;
                        char tempsubcode[100]={'H','U','M','2','2','5','5'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3.0;
                        break;

                }
            case 9:
                {
                    cout<<"Economics"<<endl;
                        char tempsubcode[100]={'H','U','M','2','2','0','1'};
                        strcpy(one_one.subcode,tempsubcode);
                        tempcredit=3.0;
                        break;

                }


            }

break;


        }
    case 5:
        {




        }
    case 6:
        {




        }
    case 7:
        {




        }
    case 8:
        {




        }

    }

}
void inputstudentifno()
{

 temp_multi_credit=0;
 temp_total_cradit=0;
 tempcredit=NULL;
 no_of_sub=NULL;
 greade_point=NULL;
    cout<<"enter ID";
    cin>>data.ID;

    inputresultdata();
    data.semester_no=b;
    data.gpa_of_thet_semester=(temp_multi_credit/temp_total_cradit);
    cout<<endl<<" result is="<<data.gpa_of_thet_semester<<endl;


}
void inputresultdata()
{

    cout<<"enter semester ";
    cin>>b;
    if(b==1)
    {
        no_of_sub=9;
    }
    else if(b==2)
    {
        no_of_sub=7;
    }
    else if(b==3)
    {
        no_of_sub=8;
    }
    else if(b==4)
    {
        no_of_sub=9;
    }
     else if(b==5)
    {
        no_of_sub=8;
    }
     else if(b==6)
    {
        no_of_sub=10;
    }
     else if(b==7)
    {
           no_of_sub=8;
    }
     else if(b==8)
    {
          no_of_sub=8;
    }
    //cout<<"subject code is ";

    for(int i=1;i<=no_of_sub;i++)
    {
        one_one.ID=data.ID;

        findsubject(a,b,i);

        one_one.credit=tempcredit;
        here:
    cout<<"Enter Mark"<<endl;
    cin>>data.mark;

     if(data.mark>100 )
     {
         cout<<"are you mad !!! "<<endl;
         goto here;
     }
     if(data.mark<0 )
     {
         cout<<" invalid !! "<<endl;
         goto here;
     }
      one_one.mark=data.mark;
      great(data.mark);
      one_one.earncredit=greade_point;
      temp_total_cradit=temp_total_cradit+tempcredit;
      temp_multi_credit=temp_multi_credit+(greade_point*tempcredit);
    file.open("f:\\bash_is_here.txt",ios::app) ;
    file.write((char*)&one_one,sizeof(one_one));
    file.close();
    }
}
void great(double data)
{
    if(data>=80)
    {
        cout<<"A+"<<endl;
        greade_point=4;
    }
     if(data>=75&&data<80)
    {
        cout<<"A"<<endl;
        greade_point=3.75;
    }
     if(data>=70&&data<75)
    {
        cout<<"A-"<<endl;
        greade_point=3.50;
    }
    if(data >=65&&data <70)
    {
        cout<<"B+"<<endl;
        greade_point=3.25;
    }
     if(data >=60&&data  <65)
    {
        cout<<"B"<<endl;
        greade_point=3;
    }
     if(data>=55&&data <60)
    {
        cout<<"B-"<<endl;
        greade_point=2.75;
    }
     if(data >=50&&data <55)
    {
        cout<<"C+"<<endl;
        greade_point=2.50;
    }
      if(data >=45&&data <50)
    {
        cout<<"C"<<endl;
        greade_point=2.25;
    }
      if(data >=40&&data <45)
    {
        cout<<"D"<<endl;
        greade_point=2.00;
    }
      if(data <40)
    {
        cout<<"Fail"<<endl;
        greade_point=0;
    }
}


void show_data()
{

    file.open("f:\\bash_is_here.txt",ios::in) ;
    if(!file)
    {
        cout<<endl<<"no data here "<<endl;
        control();
    }
    long int check_id;

    system("cls");
    cout<<endl<<setw(45)<<"** students mark sheet **"<<endl;
    file.read((char*)&one_one,sizeof(one_one));
   cout<<"enter id to see result :";
   cin>>check_id;
    cout<<endl<<setw(16)<<"student id"<<setw(22)<<"subject code "<<setw(8)<<"Mark"<< setw(15)<<"Great point"<<endl;
    cout<<setw(47)<<"________________________________________________________________________________________"<<endl;

    while (file.eof()==0)
 {

    cout<<setw(16)<<one_one.ID<<setw(19)<<one_one.subcode<<setw(10)<<one_one.mark<< setw(13)<<one_one.earncredit<<endl<<endl;

    file.read((char*)&one_one,sizeof(one_one));




 }

    file.close();
    cout<<"press any key to go to main menu .... ";
    getch();
    system("cls");

}
void control()
{
     main:
     //system("cls");
     cout<<endl<<setw(70)<<" 1 . Result processing\n";
     cout<<setw(65)<<" 2 . view result \n";
  /* cout<<setw(71)<<" 3 . to search Record\n";
     cout<<setw(69)<<" 4 . to edit Record\n";
     cout<<setw(64)<<" 5 . to delete\n";
     cout<<setw(70)<<" 6 . any key to exit\n"<<endl;*/
     cout<<"Enter your key  :";
    int a;
    cin>>a;
    if(a>=1&&a<=5)
    {
    switch(a)
    {
    case 1:
        {
            inputstudentifno();
            cout<<"   "<<endl;

            goto main;
        }
    case 2:
        {

            show_data();
            cout<<"   "<<endl;
            goto main;
        }
   /* case 3:
        {
            search();
            cout<<"done :/"<<endl;
            goto main;
        }
   // case 4:
        {
            edit();
            cout<<"updated :)"<<endl;
            goto main;
        }
    case 5:
        {
           deleting();

            cout<<"  :)"<<endl;
            goto main;
        }*/
    case 6:
       exit(0);
    }
    }
    else
        cout<<"enter the right key";
}
int main()
{
    cout<<endl<<setw(83)<<"BANGLADESH ARMY UMIVERSITY OF ENGINEERING & TECHNOLOGY"<<endl;
    control();
}
