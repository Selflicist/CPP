#include<iostream>
using namespace std;
void myfunction(){
	int num;
	cout<<"Enter any number : ";
	cin>>num;
	if(num%2==0){
	cout<<"Even Number"<<endl;
	}else{
	cout<<"Odd Number"<<endl;
	} 
	}
int myfunction1(){
	int num;
	cout<<"Enter any number : ";
	cin>>num;
	if(num%2==0){
	cout<<"Even Number"<<endl;
	}else{
	cout<<"Odd Number"<<endl;
	} 
	return num;
	}
void myfunction2(int num){
	if(num%2==0){
	cout<<"Even Number"<<endl;
	}else{
	cout<<"Odd Number"<<endl;
	} 
	}
int myfunction3(int num){
	if(num%2==0){
	cout<<"Even Number"<<endl;
	}else{
	cout<<"Odd Number"<<endl;
	} 
	return num;
	}
int main(){
	int num;
	cout<<"Check Even and Odd Numbers "<<endl;
	cout<<endl;
	cout<<"Function No :1"<<endl;
	cout<<endl;
	myfunction();
	cout<<endl;
	cout<<"Function No :2"<<endl;
	cout<<endl;
	myfunction1();
	cout<<endl;
	cout<<endl;
	cout<<"Function No :3"<<endl;
	cout<<endl;
	cout<<"Enter any number :";
	cin>>num;
	myfunction2(num);
	cout<<endl;
	cout<<"Function No :4"<<endl;
	cout<<endl;
	cout<<"Enter any number :";
	cin>>num;
	myfunction3(num);
	return 0;
	
}