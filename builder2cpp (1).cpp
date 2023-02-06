#include<iostream>
using namespace std;
class Read {
	public:
		char name[50];
		char surname[50];
		void set() {
			cout<<"enter name : ";
			cin>>name;
			cout<<"enter surname : ";
			cin>>surname;
		}
};
class print {
	public:
		Read r;
		void get() {
			r.set();
			cout<<"Name : "<<r.name<<endl;
			cout<<"Surname : "<<r.surname<<endl;
		}
};
main() {
	print p;
	p.get();
}

