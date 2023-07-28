#include<iostream>
#include<vector>

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
    std::vector<User> users;
    users.push_back(me);

    std::cout<<users[0].first_name<<std::endl;


    return 0;
} 