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
    ~Student(){
        cout<<"I am a disctroctor...."<<endl;
        delete cgpaptr;
    }
    void getValue(){
        cout<<"name: "<<name<<endl;
        cout<<"Cgpa:"<<*cgpaptr<<endl;
    }
};

int main(){
    Student s1("Ayush", 11);
    s1.getValue();
    return 0;
}