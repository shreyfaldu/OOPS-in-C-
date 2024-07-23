// Constructor :- Sepcial method invoke automatically during Object Creation, Use for Initialization

// ->Same name as a Class name
// ->No return type
// ->Called Only Once(automatically),When Object Creation
// ->Memory allocation happen when constructor is called

// -> this-> pointer is a speciall pointer in c++ to point current Object.

#include<iostream>
#include<string>
using namespace std;

class Teacher{
    //properties
    private:
        double salary;

    public:
        string name;
        string subject;
        string dept;

    // Non - Parameterize Constructor
        // Teacher(){
        //     // cout<<"Hi, i am a constroctor"<<endl;
        //     dept = "Computer Science";
        // }
    // Parameterize Constructor
        Teacher(string name, string subject, string dept, double salary){
            this->name = name;
            this->subject = subject;
            this->dept = dept;
            this->salary = salary;
        }
    //Copy Consturctor
        Teacher(Teacher &orgObj){
            cout<<"I am constom Copy Constructor"<<endl;
            this->name = orgObj.name;
            this->subject = orgObj.subject;
            this->dept = orgObj.dept;
            this->salary = orgObj.salary;
        }
        
    //methos
    void changeDept(string newDept){
        dept = newDept;
    }

    void getValue(){
        cout<<"name : "<< name<<endl;
        cout<<"dept :"<< dept<<endl;
    }
};

int main(){
    Teacher t1("shreya", "it", "computer", 210000);
    // t1.getValue();

    Teacher t2(t1);//copy constructor
    t2.getValue();
    
}