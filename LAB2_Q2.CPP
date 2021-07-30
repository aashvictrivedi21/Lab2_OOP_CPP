#include <iostream.h>
#include <conio.h>
float cube_volume()
{
 float l, vol;
 cout<<"\nEnter Length:";
 cin>>l;
 vol = l * l * l;
 cout<<"\nCube Volume is: "<<vol<<endl;
 return (vol);
 }
float sphere_volume()
{
 float pi, radius, vol;

 cout<<"\nEnter Radius:";
 cin >>radius;
 pi = 3.14;
 vol = (((4/3) * pi) * (radius * radius * radius));
 cout<<"\nSphere Volume is: "<<vol<<endl;
 return (vol);
 }
float cyl_volume()
{
 float pi,radius,height,vol;
 cout<<"\nEnter radius:";
 cin>>radius;
 cout<<"\nEnter height:";
 cin>>height;
 pi=3.14;
 vol=(pi*radius*radius*height);
 cout<<"\nCylinder volume is:"<<vol<<endl;
 return(vol);
 }
 float cone_volume()
{
 float pi,radius,height,vol;
 cout<<"\nEnter radius:";
 cin>>radius;
 cout<<"\nEnter height:";
 cin>>height;
 pi=3.14;
 vol=(pi*radius*radius*height)/3;
 cout<<"\nCone volume is:"<<vol<<endl;
 return(vol);
 }
 void main ()
 { float total_vol = 0;
  clrscr();
  cout<<"\nVolume of Cube:"<<endl;
  total_vol = total_vol + cube_volume();
  cout<<"\nSphere Volume:"<<endl;
  total_vol = total_vol + sphere_volume();
  cout<<"\nCylinder volume:"<<endl;
  total_vol=total_vol+cyl_volume();
  cout<<"\nCone volume:"<<endl;
  total_vol=total_vol+cone_volume();
  cout<<"Total Volume is: "<<total_vol;
  getch();
  }

