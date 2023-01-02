//private specifier class inheritance in c++ program...

#include <iostream>
using namespace std;

class Parent {
    protected:
        string parentName;
};

class Children : protected Parent {
    protected:
        string childrenName;
};

class GrandChildren : protected Children {
    protected:
        string grandChildrenName;

    public:
        //parent name setter getter
        void setParentName(string parentName) {
            this->parentName = parentName;
        }

        string getParentName() {
            return this->parentName;
        }

        //children name setter getter
        void setChildrenName(string childrenName) {
            this->childrenName = childrenName;
        }

        string getChildrenName() {
            return this->childrenName;
        }

        //grand children name setter getter
        void setGrandChildrenName(string grandChildrenName) {
            this->grandChildrenName = grandChildrenName;
        }

        string getGrandChildrenName() {
            return this->grandChildrenName;
        }
};



int main() {
    GrandChildren habib;

    habib.setParentName("Kiron Bapary");
    habib.setChildrenName("Habibor Rahaman");
    habib.setGrandChildrenName("Anayet Ahmed");

    cout<<"Parent Name: " <<habib.getParentName() <<"\n";
    cout<<"Children Name: " <<habib.getChildrenName() <<"\n";
    cout<<"Grand Children Name: " <<habib.getGrandChildrenName()<<"\n";

return 0;
}
