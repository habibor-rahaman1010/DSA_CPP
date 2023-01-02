// Encapsulation of OOP in c++ program...

#include <iostream>
using namespace std;

class Employe {
    private:
        int salary;
        int deposit;
        int widraw;
        int balance;

    public:
        //setter function of salary attribute...
        void setSalary(int salary){
            this->salary = salary;
        }

        //getter function of salary attribute...
        int getSalary(){
            return this->salary;
        }

        //setter function of deposit attribute...
        void setDeposit(int deposit){
            this->deposit = deposit;
        }

        //getter function of deposit attribute...
        int getDeposit(){
            return this->deposit;
        }

        //setter function of widraw attribute...
        void setWidraw(int widraw){
            this->widraw = widraw;
        }

        //getter function of widraw attribute...
        int getWidraw(){
            return this->widraw;
        }

         //setter function of current balance attribute...
        void setBalance(int balance){
            this->balance = balance;
        }

        //getter function of current balance attribute...
        int getBalance(){
            return this->balance;
        }

        //Nit balance function
        int nitBalance() {
            return this->balance = ((this->balance + this->deposit + this->salary) - this->widraw);
        }
};

int main() {
    Employe myObj;
    myObj.setSalary(35685);
    myObj.setDeposit(10000);
    myObj.setWidraw(5000);
    myObj.setBalance(10000);

    cout<<"Salary: " <<myObj.getSalary() <<"\n";
    cout<<"Deposit: " <<myObj.getDeposit() <<"\n";
    cout<<"Widraw: " <<myObj.getWidraw() <<"\n";
    cout<<"Current Balance: " <<myObj.getBalance() <<"\n";
    cout<<"Nit Balance: " <<myObj.nitBalance() <<"\n";

return 0;
}
