
#include<iostream.h>

using namespace std;

Void sum(int a,int b);
int main()
{
int a,b;
cout<<"enter a number:";
cin>>a;
cout<<"enter a number:";
cin>>b;
sum(a,b);
return 0;
}
void sum (int x,int y)
{
int s;
s=x+y;
cout<<"sum of the two number is:"<<s;
}