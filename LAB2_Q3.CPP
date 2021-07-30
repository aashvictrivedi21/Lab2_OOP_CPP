#include <iostream.h>
#include <conio.h>
void Max_Min_Array(int (&a)[100], int n)
{
  int max , min, i;
  max = a[0];
  min = a[0];
  for (i=0;i<n;i++)
  {
   if (a[i] > max)
    max = a[i];
   if (a[i]<min)
   min = a[i];
   }

  cout<<"\nMax value in array is " <<max<<endl;
  cout<<"\nMin value in array is "<<min<<endl;
  }

 void main ()
 { int a[100], n, i;

  clrscr();
  cout<<"\nHow many elements in array"<<endl;
  cin>>n;
  for(i=0;i<n;i++)
  {
   cout<<"\nEnter array element";
   cin>>a[i];
   }
  Max_Min_Array(a, n); // calling function

  getch();
  }

