//private specifier class inheritance in c++ program...

#include <iostream>
using namespace std;

class Parent {
    private:
        string parentName;

    public:
        void setParentName(string parentName) {
            this->parentName = parentName;
        }

        string getParentName() {
            return this->parentName;
        }
};

class Children : Parent {
    private:
        string childrenName;

    public:
        void setChildrenName(string childrenName) {
            this->childrenName = childrenName;
        }

        string getChildrenName() {
            return this->childrenName;
        }
};

class GrandChildren : Children {
    private:
        string grandChildrenName;

    public:
        void setGrandChildrenName(string grandChildrenName) {
            this->grandChildrenName = grandChildrenName;
        }

        string getGrandChildrenName() {
            return this->grandChildrenName;
        }

        //This is my constructor...
        GrandChildren() {

        }
};



int main() {



return 0;
}
