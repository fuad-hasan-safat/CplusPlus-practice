#include<iostream>

class User
{
    std::string status = "Gold";
    
    public:
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }   
};

int main(int argc, const char** argv) {
    User me;
    me.first_name = "Fuad Hasan";
    me.last_name = "Hasan";
    

    std::cout << "First Name: "<< me.first_name << std::endl;
    std::cout << "Status: "<< me.get_status() << std::endl;

    return 0;
} 