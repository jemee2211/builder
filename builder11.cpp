//WAP to make Railway Reservation System.
//Requirements:
//(A) User Input Train Number , Train Name , Source , Destination , Train Time.
//(B) Display Record By Search Train Number.
//(C) Minimum 3 Input Train Record.

#include<iostream>
using namespace std;

class reservation{
	
	private:
		
		int number;
		char time[50];
		char name[50];
		char source[50];
		char destination[50];
		
	public:
		
		void setter();
		void getter(int num);
		int getnumber(){
			return number;
		};
};

void reservation::setter(){
	
	cout<<"Enter Train Number:";
	cin>>number;
	
	cout<<"Enter Train Time:";
	cin>>time;
	
	cout<<"Enter Train Name:";
	cin>>name;
	
	cout<<"Enter Train Source:";
	cin>>source;
	
	cout<<"Enter Train Destination:";
	cin>>destination;

	
	
}

void reservation::getter(int num){
	
	cout<<"Train Number = "<<number<<endl;
	
	if(number == num){
		
		cout<<"Train Time"<<time<<"AM"<<endl;
		cout<<"Train Name is"<<time<<endl;
		cout<<"Train Start From"<<source<<endl;
		cout<<"Train Destination Is "<<destination<<endl;
		
	}
	
    else{
    	
    	cout<<"Enter Valid Number"<<endl;
	}
	
}

main(){
	
	int i,num,n ;
	reservation o;
	
	cout<<"Enter Size of Train Number:";
	cin>>n;
	
	for(i=0 ; i<n; i++){
	
	o.setter();
	
}

x:
	cout<<"Enter Desire Train Number:";
	cin>>num;
	
	for(i=0 ; i<n; i++){
	
	o.getter(num);
	
	goto x;
}
	
	
}


