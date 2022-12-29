#include<iostream>
using namespace std;
int main(){
	int num[10], sum=0;
	for(int i=0; i<10; i++){
	cout<<"Enter an integer : ";
	cin>>num[i];
	}
	for(int i=0; i<10; i++){
	if (i==3||i==5){
		continue;
	}
	else{
	sum=sum+num[i];
	}
	} {
	cout<<"Sum of array elements except index 3 and 5 is : "<<sum<<endl;
	cout<<"Reverse order of input is given below :"<<endl;
	}
	for(int i=9; i>-1; i--){
	cout<<num[i]<<endl;
	}
	return 0;
}