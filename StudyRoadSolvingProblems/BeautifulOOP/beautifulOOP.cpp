#include <iostream>

using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
private:
    string Company;
    int Age; 
protected:
    string Name;
public:
    void SetName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }

    void IntoduceYourself() {
        cout << "Name: "<<Name<<endl;
        cout << "Company: "<<Company<<endl;
        cout << "Age: "<<Age<<endl;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion() {
        if(Age>30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << ", sorry, no promotion for you!" << endl;
    }
    virtual void Work() {
        cout <<Name<<" is checking email, task backlog, perfoming tasks... "<<endl;
    }
};

class Developer:public Employee { // Developer class becomes a child class(derived class), and Employee becomes a parent class.
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;     
    }

    void FixBug() {
        cout <<Name<< " is fixing bug using "<< FavProgrammingLanguage << endl;
    }
    void Work() {
        cout <<Name<<" is writing "<<FavProgrammingLanguage<<" code"<<endl;
    }

};

class Teacher:public Employee {
public:
    string Subject;
    void PrepareLesson() {
        cout <<Name<< " is preparing " << Subject <<" lesson" << endl;
    }

    Teacher(string name, string company, int age, string subject) : Employee(name, company, age) {
        Subject = subject;
    }

    void Work() {
        cout << Name << " is teaching " << Subject << endl;
    }
};

int main() // The most common use of polymorphism is when a parent class reference is used to refer a child class object 
{
    Developer d = Developer("Bohdan", "Ubisoft", 23, "C++");
    Teacher t = Teacher("John", "High School", 25, "History");

    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->Work();
    e2->Work();

    
}