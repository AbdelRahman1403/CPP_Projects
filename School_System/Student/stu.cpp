#include "stu.hpp"
#include <random>
#include <string>

void Student_t::create_stu(){
    std::cout << "Enter The ID of the student : ";
    std::cin >> Student_t::stu_ID;
    std::cout << "Enter The Name of the student : ";
    std::getline(std::cin , Student_t::stu_Name);
    std::cout << "Enter The Year of the student : ";
    std::cin >> Student_t::stu_Year;
    std::cout << "Enter The Password account of the student : ";
    std::getline(std::cin , Student_t::stu_Password);
}

void Student_t::show_data_stu(short ID) const{
    try{

    
    if(ID == Student_t::stu_ID){
        std::cout << "The student ID is : " << Student_t::stu_ID << std::endl;
        std::cout << "The student Name is : " << Student_t::stu_Name << std::endl;
        std::cout << "The student Year is : " << Student_t::stu_Year << std::endl;
    }
    else {
        throw(ID);
    }
}
    catch(int num){
        std::cerr << "The ID in not found" << std::endl;
    }
}
void Student_t::show_students(const std::vector<Student_t>& students) const{
        
}
