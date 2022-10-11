#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
using namespace std;
struct Assign
{char name[50];
char user[20];
char pass[30];

}a,bc;
int check(char c[30]);
int check_user(char c[30]);
void login(char*ac); 
void  Register()                                          //to take name user id and password  and store in the file
{  char ch[50];fstream fout;int f=0;


  fout.open("C:\\Users\\HP WORLD\\Desktop\\games in c++\\Registre.txt",ios::app);

ABC:f=0;
     system("CLS");
    printf("enter name=");
   gets(a.name);
   cout<<"enter username(of single name)=";
   cin>>a.user;
   f=check_user(a.user);
   if(f==1)
   {cout<<"user id already in use\nPress any key to register again...";
   getchar();
   getchar();
    goto ABC;
   }
   cout<<"enter password=";
   cin>>a.pass;
  f=check(a.pass);
   if(f==1)
   {cout<<"password already in use\nPress any key to register again...";
   getchar();
   getchar();
    goto ABC;
   }
   fout.write((char*)&a,sizeof(a));
    fout.close();

}
void login(char* ac)                                   //for checking weater the user id and password is registered or not 
     { system("CLS");
         fstream fout;int f=0;
         fout.open("C:\\Users\\HP WORLD\\Desktop\\games in c++\\Registre.txt",ios::in);

 char ch[30];
 CDE:f=0;
 fout.seekg(0);

 system("CLS");
 cout<<"enter userid =";
   cin>>ch;
   while(!fout.eof())
   {fout.read((char*)&a,sizeof(a));

   if(strcmp(ch,a.user)==0)
   {cout<<"enter password=";
   cin>>ch;
   if(strcmp(ch,a.pass)==0)
   { system("CLS");
   cout<<"login sucessful"; f=1; break;
   }
   else
    {cout<<"wrong password\n press any key to try again..."; f=1;
   getchar();
   getchar();
   goto CDE;
    }
   }

   }
   if(f==0)
    {cout<<"wrong user name\n press any key to try again...";
   getchar();
   getchar();
   goto CDE;
    }
   fout.close();
strcpy(ac,a.user); 

     }

int check(char c[30])                                 // check if password is in file or not
{ fstream fout;int g=0;Assign ad;
         fout.open("C:\\Users\\HP WORLD\\Desktop\\games in c++\\Registre.txt",ios::in);
     fout.seekg(0);

    while(!fout.eof())
    {fout.read((char*)&ad,sizeof(ad));

   if(strcmp(ad.pass,c)==0)
    g=1;

    }
 return g;
    fout.close();
}

int check_user(char c[30])                          //check if userid is in file or not
{ fstream fout;int g=0;Assign ad;
         fout.open("C:\\Users\\HP WORLD\\Desktop\\games in c++\\Registre.txt",ios::in);
     fout.seekg(0);

    while(!fout.eof())
    {fout.read((char*)&ad,sizeof(ad));

   if(strcmp(ad.user,c)==0)
    g=1;

    }
 return g;
    fout.close();
}
