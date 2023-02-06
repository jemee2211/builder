#include<iostream>
#include<string.h>

using namespace std;

class  old{
	
	private:
		
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

class new{
	
	public:
		
		void getData():
	
};

void new::getData(){
	
	cout<<"Number = "<<a
	cout<<"Name = "<<b;
}



main(){
	
	int a;
	char b[50];
	new obj;
	obj.room();
	obj.getter();
}
