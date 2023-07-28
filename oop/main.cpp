#include<iostream>

struct User
{
    std::string first_name;
    std::string last_name;
    std::string status;
};

int main(int argc, const char** argv) {
    User me;
    me.first_name = "Fuad Hasan";
    me.last_name = "Hasan";
    me.status = "Gold";

    std::cout << "First Name: "<< me.first_name << std::endl;

    return 0;
}