#include <iostream>
#include <string>
int main(void){
    std::string name;
    int age;
    char gender;
    std::cout << "Enter Your Name: " <<std::endl<<"$ ";
    std::cin >> name;
    std::cout << "Enter Your age: " <<std::endl<<"$ ";
    std::cin >> age;
    std::cout << "Enter Your Gender [M/F]: " <<std::endl<<"$ ";
    std::cin >> gender;
    if(age > 18 && age <65){
        switch(gender){
            case 'M':
                std::cout << "Welcome Mr."<< name << " to New Work!"<<std::endl;
                break;
            case 'F':
                std::cout << "Welcome Mm."<<name<< "to new work!"<<std::endl;
                break;
            default:
                std::cout << "Invalide Information!\n";    
        }
    }
    std::cout << "Good Bye!\n";
}