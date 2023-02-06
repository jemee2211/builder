//WAP to demonstrate example of destructors.

#include<iostream>
using namespace std;
class A{
	
	private:
		int a;
		int b;
		
	public:
	A(){
	
	cout<<"Enter A:";	
	cin>>a;
	
	cout<<a<<endl;
	}
	
	~A(){
		
		cout<<"Enter B:";
		cin>>b;
		
		cout<<b;
	}
	
	
};

main(){
	
	A obj;
	
	
	
}
