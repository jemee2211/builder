#include<iostream>
#include<string.h>

using namespace std;

class  room{
	
	private:
		
		int a;
		char b[50];
		
		public:
			
		room(int a, char b[]){
			
			this->a=a;
			strcpy(this->b,b);
			
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
	
	int a;
	char b[50];
	room obj(a,b);
	
	obj.getter();
}
