#include "../main.hpp"
#include <string>
#include <vector>

class Student_t{
protected:
    short stu_ID;
    std::string stu_Password;
    std::string stu_Name;
    short stu_Year;
public: 
    Student_t() = default;
    void create_stu();
    void show_data_stu(short ID) const;
    void show_students(const std::vector<Student_t>& students) const;
};