#include <iostream.h>
#include <conio.h>
void sum(int i, int j)
{
 cout<<"\nSum of 2 Integers :"<<i+j;
}

void sum(short int i,short int j)
{
 cout<<"\nSum of 2 short int values :"<<i+j;
 }

void sum(double i , double j)
 {
  cout<<"\nSum of 2 Double values :"<<i+j;
  }
void sum(float i, float j)
{
 cout<<"\nSum of 2 float values:"<<i+j;
 }
void sum(long int i, long int j)
{
 cout<<"\nSum of 2 long integer values:"<<i+j;
 }
void  sum(long double i, long double j)
{
 cout<<"\nSum of 2 long double values:"<<i+j;
 }
void sum (char i, char j)
{
  char c;
  c = i + j;
  cout<<"\nSum of 2 character values : "<<c;
  }

 void main()
 {int a, b;
  cout<<"\nEnter 2 Integers:";
  cin>>a>>b;
  sum(a,b); // int
  short int sa, sb;
  cout<<"\nEnter 2 numbers between 0-255:";
  cin>>sa>>sb;
  sum(sa,sb);  //short int
  double da,db;
  cout<<"\nEnter 2 double values :";
  cin>>da>>db;
  sum(da,db); //double
  float fa,fb;
  cout<<"\nEnter 2 float values:";
  cin>>fa>>fb;
  sum(fa,fb); //float
  long int la,lb;
  cout<<"\nEnter 2 long integer values:";
  cin>>la>>lb;
  sum(la,lb); //long integers
  long double lda,ldb;
  cout<<"\nEnter 2 long double integer values:";
  cin>>lda>>ldb;
  sum(lda,ldb); //long double
  char ca, cb;
  cout<<"\nEnter 2 characters";
  cin>>ca>>cb;
  sum(ca, cb);     // character

  getch();
  }
