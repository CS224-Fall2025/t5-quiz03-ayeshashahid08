#include <iostream>
#include<cstring>
using namespace std;

class Employee{
protected:
string name;
double salary;
static int employeeCount;

public:
Employee(string n, double s){
    name = n;
    salary =s;
    employeeCount++;
}

virtual void displayInfo(){
    cout<<"Name: "<<name", "<<"Salary: "<<salary<<endl;
}

static void showTotalEmployees(){
    cout<<"Total Employees Created: "<<employeeCount<<endl;
}

virtual ~Employee() = default;
};


class Staff: public Employee{
private:
string department;
public:
staff(string t, string n, double s){
    title = t;
    name = n;
    salary =s;
    employeeCount++;
}
displayInfo() override{
    cout<<"Name: "<<name" (Staff), "<<"Salary: "<<salary<<endl;
}
};

class Faculty: public Employee{
private:
string department;
public:
Faculty(string t, string n, double s){
    title = t;
    name = n;
    salary =s;
    employeeCount++;
}
displayInfo() override{
    cout<<"Name: "<<name" (Faculty), "<<"Salary: "<<salary<<endl;
}
};

Employee::employeeCount = 0;
int main() {
int n;
cin>>n;
string name;
string title;
int sal;
Employee* objects = new Employee[n];

for (int i = 0; i<n; i++){
    cin>>title>>name>>salaray;
    if (title == "Staff"){
        
        objects[i] = new staff st(title, name, salary);
    }
    else if (title = "Faculty"{
        objects[i] =new Faculty f(title, name, salary);
    })
}
for (int i = 0; i< n, i++){
    *(objects[i]).displayInfo();
}
Employee::showTotalEmployees();

for (int i = 0; i< n, i++){
    delete objects[i] [];
}

}