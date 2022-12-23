#include<iostream>
using namespace std;
int sum(int i,int j);
int diff(int i,int j);
int multiple (int i,int j);
float division (float i, float j);
int remainder (int i,int j);
float log(float i);
float sqrt(float j);
int main()
{
int i,j,add,sub,product,quotient,modules,result,root;
cin>>i>>j;
add=sum(i,j);
sub=diff(i,j);
product=multiple(i,j);
quotient=division(i,j);
modules=remainder(i,j);
result=log(i);
root=sqrt(j);
cout<<"add="<<add<<endl;
cout<<"sub="<<sub<<endl;
cout<<"product="<<product<<endl;
cout<<"quotient="<<quotient<<endl;
cout<<"modules="<<modules<<endl;
cout<<"log of"<<i<<"is="<<result<<endl;
cout<<"square root of"<<j<<"is="<<root<<endl;
return 0;
}
int sum(int i,int j)
{
return (i+j);
}
int diff(int i,int j)
{
return (i-j);
}
int multiple(int i,int j)
{
return (i*j);
}
float division(float i, float j)
{
return (i/j);
}
int remainder(int i,int j)
{
return (i%j);
}
float log(float i)
{
return (i);
}
 float sqrt(float j)
{
return j;
}
