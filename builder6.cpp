//WAP to demonstrate example of default constructor or no argument constructor.

#include<iostream>

using namespace std;

class  room{
	
	private:
		
		int a;
		char b[50];
		
		public:
			
		room(){
			
		cout<<"Enter Number: ";
    	cin>>a;
	
	    cout<<"Enter Name: ";
	    cin>>b;	
			
			
		}
	
	void getter();
	
};


void room:: getter(){
	
	cout<<"Number :"<<a<<endl;
	cout<<"Name :"<<b;
		
}

main(){
	
	
	room obj;
	
	obj.getter();
}
