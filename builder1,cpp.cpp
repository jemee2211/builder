//id, name, role, salary, experience, address, email and contact. Get 5 records.
#include<iostream>

using namespace std;

class employee{
	
	private:
		
	int emp_id;
	char emp_name[50];
	char emp_role[50];
	int emp_salary;
	char emp_experience[50];
	char emp_address[50];
	char emp_email[50];
	char emp_contact[10];
	
	public:
		
		void setter();
		void getter();
		
};

void employee::setter(){
	
	cout<<"Enter Employee id:";
	cin>>emp_id;
     
	 cout<<"Enter Employee Name:";
	cin>>emp_name;
	
	cout<<"Enter Employee Role:";
	cin>>emp_role;
	
	cout<<"Enter Employee Salary:";
	cin>>emp_salary;
	
	cout<<"Enter Employee Experience:";
	cin>>emp_experience;
	
	cout<<"Enter Employee Address:";
	cin>>emp_address;
	
	cout<<"Enter Employee Email:";
	cin>>emp_email;
	
	cout<<"Enter Employee Contact:";
	cin>>emp_contact;
	
}
void employee::getter(){
	
	cout<<"Employee id ="<<emp_id<<endl;
	cout<<"Employee Nmae ="<<emp_name<<endl;
	cout<<"Employee Role ="<<emp_role<<endl;
	cout<<"Employee Salary ="<<emp_salary<<endl;
	cout<<"Employee Experience ="<<emp_experience<<endl;
	cout<<"Employee Address ="<<emp_address<<endl;
	cout<<"Employee Email ="<<emp_email<<endl;
	cout<<"Employee Contact ="<<emp_contact<<endl;
}

main(){
	
	
	employee o[5];
	int i;
	
	for (i=0; i<5; i++){
		
		o[i].setter();
		o[i].getter();
		
	}
	
	
}


