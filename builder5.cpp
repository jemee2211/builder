#include<iostream>
#include<string>
using namespace std;
class  state
{
	private:
		 char name[50];
		 
		 
	public:
		 void setter(){
		 
		 
		 
		
			cout<<"enter state name: ";
			cin>>name;
		}
		
		
		 void getter(){
			cout<<name<<endl;
		}
};
class city{


	private:
		
		 char name[20];
		state sts;
	public:
		 void setter()
		{
			cout<<"enter city name: ";
			cin>>name;
			sts.setter();
		}
		 void getter(){
			cout<<name<<endl;
			sts.getter();
				}
 };
main()
{
	city obj;
	obj.setter();
	obj.getter();
}


