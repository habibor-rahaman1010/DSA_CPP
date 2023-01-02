// Encapsulation of OOP in c++ program...

#include <iostream>
using namespace std;

class Employe {
    private:
        int salary;

    public:
        //setter function of salary attribute...
        void setSalary(int salary){
            this->salary = salary;
        }

        //getter function of salary attribute...
        int getSalary(){
            return this->salary;
        }
};

int main() {
    Employe myObj;
    myObj.setSalary(35685);
    cout<<"Salary: " <<myObj.getSalary() <<"\n";

return 0;
}
