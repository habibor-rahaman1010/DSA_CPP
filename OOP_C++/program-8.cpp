//OOP in getter setter in c++ program...

#include <iostream>
#include <string.h>
using namespace std;

class Computer {
    private:
        string userName;
        string email;
        string password;

    protected:
        string licenseKey;
        string expireDate;

    public:
        string processor;
        string ram;
        string storage;
        string powerSuply;

        //getter private data...
        void getPrivateData() {
            cout<<"User Name: " <<userName <<"\n";
            cout<<"Email: " <<email <<"\n";
            cout<<"Password: " <<password <<"\n";
        }

        //setter private data...
        void setPrivateData(string userName, string email, string password) {
            this->userName = userName;
            this->email = email;
            this->password = password;
        }

        //getter protected data...
        void getProtectedData() {
            cout<<"License Key: " <<licenseKey <<"\n";
            cout<<"Expire Date: " <<expireDate <<"\n";
        }

        //setter protected data...
        void setProtectedData(string licenseKey, string expireDate) {
            this->licenseKey = licenseKey;
            this->expireDate = expireDate;
        }

        //print public data
        void getPublicData() {
             cout<<"Processor: " <<processor <<"\n";
             cout<<"Ram: " <<ram <<"\n";
             cout<<"Storage: " <<storage <<"\n";
             cout<<"Power Supply: " <<powerSuply <<"\n";
        }

        //this is my constructor function...
        Computer(string userName,
            string email,
            string password,
            string licenseKey,
            string expireDate,
            string processor,
            string ram,
            string storage,
            string powerSuply) {

            this->userName = userName;
            this->email = email;
            this->password = password;
            this->licenseKey = licenseKey;
            this->expireDate = expireDate;
            this->processor = processor;
            this->ram = ram;
            this->storage = storage;
            this->powerSuply = powerSuply;
        }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Computer myPc("Tamim Ahmed", "tamimahmed123@gmail.com",
                  "daioeiweh", "0hwe923er9d3e9d3w",
                  "30-11-2023", "Core i5", "16GB", "1TB", "Thermal tech"
                  );

    //reset data private and protected...
    myPc.setPrivateData("Habibor Rahaman", "habibor.rahaman1010@gmail.com", "R374$Zz2%J!MWX@h");
    myPc.setProtectedData("Rn79S20&BM740DPXHT6%E@uwH", "31-12-2025");

    //print all attribute here print by custom methods...
    myPc.getPrivateData();
    myPc.getProtectedData();
    myPc.getPublicData();

return 0;
}
