#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        string name;
        double *cgpaptr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    Student(Student &obj){
        this->name = obj.name;
        cgpaptr = new double;
        *cgpaptr = *obj.cgpaptr;
    }
    void getVlaue(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaptr<<endl;
    }
};

int main(){
    Student s1("Shrey Kumar", 10);
    s1.getVlaue();
    Student s2(s1);
    *(s2.cgpaptr) = 9.2;
    s2.getVlaue();
}