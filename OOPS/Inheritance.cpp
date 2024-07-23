// Inheritance :- When properties and Member Function of Base class is pass on to derived Classn it's called Inheritance.
// in Inheritance the First Parent Constructor is called After the Child Constructor is Called.
// In distructor is oppsite of the Constructor
// For code Reusability

#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(){
        cout<<"Parent Constructor is called..."<<endl;
    }

    Person(string name, int age){
        this->name = name;
        this->age = age; 
    }
};

class Student : public Person{
public:
    string Rollno;

    void getValue(){
        cout<<"name: "<< name<<endl;
        cout<<"age: "<< age<<endl;
        cout<<"Rollno: "<< Rollno<<endl;
    }
    Student(string name,int age, string Rollno) : Person (name,age){
        this->Rollno = Rollno;
    }
};

int main(){

    Student s1("shrey", 21, "21dit018");
    s1.getValue();
    
}