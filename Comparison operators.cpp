#include<iostream>
using namespace std;
int main()
{
int a=5;
int b=7;
cout<<(a==b&&a<b);
cout<<"\n";
cout<<(b==a||b>a);
cout<<"\n";
cout<<(a==5|b>a);
cout<<"\n";
cout<<(a==b,a<b);
cout<<"\n";
cout<<(a<b,b>a);
cout<<"\n";
cout<<(a==b);
cout<<"\n";
cout<<++a;
cout<<"\n";
cout<<--a;
cout<<"\n";
return 0;
}