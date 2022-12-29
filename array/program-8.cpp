//function in c++ program...

#include <iostream>
using namespace std;

namespace boyName{
    string getFullName(string fName = "Hello", string lName = "World") {
        string fullName = fName+" "+lName;
        return fullName;
    }
}

namespace girlName{
    string getFullName(string fName = "Hello", string lName = "World") {
        string fullName = fName+" "+lName;
        return fullName;
    }
}

int main() {
    string fName, lName;
    cout<<"Enter your first name (boy): ";
    cin>>fName;

    cout<<"Enter your last name (boy): ";
    cin>>lName;
    string userName = boyName::getFullName(fName, lName);
    cout<<"\nFull name is: " << userName <<"\n";

    //for girls...
    cout<<"\nEnter your first name (girl): ";
    cin>>fName;

    cout<<"Enter your last name (girl): ";
    cin>>lName;
    userName = girlName::getFullName(fName, lName);
    cout<<"\nFull name is: " << userName <<"\n";

return 0;
}
