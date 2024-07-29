#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b;
	char operation;
	cout<<"enter the first no.";
	cin>>a;
	cout<<"enter the second no.";
	cin>>b;
	cout<<"enter the operation yuo want to perform:";
	cin>>operation;
	switch(operation){
		case '+':
		  cout<<"sum is:"<<" "<<a+b<<endl;
		  break;
		case '-':
		  cout<<"substraction is:"<<a-b<<endl;
		  break;
		case '*':
		  cout<<"multiplication is:"<<a*b<<endl;
		  break;
		case '/':
		  cout<<"divide is:"<<a/b<<endl;
		  break;	
		}
}
