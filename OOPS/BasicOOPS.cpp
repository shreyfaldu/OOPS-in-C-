// Object are entites in real world
// class is like a blue print of this entitieas
// Amzone company exmaple there shoud be a product is enttiti and price, discount, name, discription are properties of this entiti 

//Access Modifires
// 1-> Prive :- Data & Methos accessable inside a class
// 2-> Public :- Data & Methos accessable to everyOne
// 3-> Protected :- Data & Methos accessable inside a class & devived class
// To access the private member or data we use a Getter Setter Method and their should in Public

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

    //methos
    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "Shrey";
    t1.dept = "Compter";
    t1.setSalary(2100000);


    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
}