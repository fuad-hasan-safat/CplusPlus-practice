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

int add_user_if_not_exists(std::vector<User> &users, User user)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first_name == user.first_name &&
            users[i].last_name == user.last_name)
        {
            return i; /*returning index*/
        }
        users.push_back(user)
        return users.size() -1 ; /*returning index*/
        
    }
    
}

int main(int argc, const char** argv) {
    User me;
    me.first_name = "Fuad Hasan";
    me.last_name = "Hasan";
    std::vector<User> users;
    users.push_back(me);

    std::cout<<users[0].first_name<<std::endl;


    return 0;
} 