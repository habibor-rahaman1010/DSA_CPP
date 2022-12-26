// omitting namespace in c++ program...

#include <iostream>
#include <string.h>

int main() {
    std::string name;
    std::cout<< "Enter your name: ";
    std::getline(std::cin, name);
    std::cout<< name <<std::endl;

return 0;
}
