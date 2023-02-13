#include<iostream>
#include<string.h>

using namespace std;

class  old{
	
	public:
		
		int a;
		char b[50];
		
		public:
			
		old(int a, char b[]){
			
			this->a=a;
			strcpy(this->b,b);
			
		cout<<"Enter Number: ";
    	cin>>a;
	
	    cout<<"Enter Name: ";
	    cin>>b;		
	}
};

class unique {
	
	public:
		
		void getData(int a, char b);
	
};

void unique::getData(int a, char b){
	
	cout<<"Number = "<<a;
	cout<<"Name = "<<b;
}



main(){
	
	int a;
	char b[50];
	unique obj;
	obj.getData(a,b);
}
