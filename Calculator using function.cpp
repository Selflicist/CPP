#include <iostream>
#include <cmath>
using namespace std;
int sum(int var1,int var2)
{
	return var1+var2;
}
int diff(int var1, int var2)
{
	return var1-var2;
}
int prod(int var1, int var2)
{
	return var1*var2;
}
float qout(float var1, float var2)
{	
	return var1/var2;
}
int rem(int var1, int var2)
{
	return var1%var2;
}
float log( float var1, float var2)
{	float var3;
	var3=var1+var2;
	return log(var3);
}
float sqrt(float var1, float var2)
{
	float var3;
	var3=var1+var2;
	return sqrt(var3);
}

int main(){
	double var1, var2, res1, res2, res3, res4, res5, res6, res7;
	cout<<"Enter first number : ";
	cin>>var1;
	cout<<"Enter second number : ";
	cin>>var2;
	res1= sum(var1, var2);
	res2=diff(var1, var2);
	res3=prod(var1, var2);
	res4=qout(var1, var2);
	res5= rem(var1, var2);
	res6= log(var1, var2);
	res7=sqrt(var1, var2);
	cout<<"Sum of these numbers is : "        <<res1<<endl;
	cout<<"Difference of these numbers is : " <<res2<<endl;
	cout<<"Product of these numbers is : "    <<res3<<endl;
	cout<<"Qoutient of these numbers is : "   <<res4<<endl;
	cout<<"Remainder of these numbers is : "  <<res5<<endl;
	cout<<"Log of these numbers is : "		  <<res6<<endl;
	cout<<"Square root of these numbers is : "<<res7<<endl;
	return 0;
}