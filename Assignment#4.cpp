
#include<iostream>
using namespace std;
int main(){
	int arr[10], sum=0;
	for(int i=0; i<10; i++){
	cout<<"Enter an integer : ";
	cin>>arr[i];
	}
	for(int i=0; i<10; i++){
	if (i==3||i==5){
		continue;
	}
	else{
	sum=sum+arr[i];
	}
	} {
	cout<<endl;
	cout<<"Sum of 10 integer array elements except index 3 and 5 is : "<<sum<<endl;
	cout<<endl;
	cout<<"Reverse order of input is given below :"<<endl;
	cout<<endl;
	}
	for(int i=9; i>-1; i--){
	cout<<arr[i]<<endl;
	}
	return 0;
}