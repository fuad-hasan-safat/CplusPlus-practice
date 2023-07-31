#include<iostream>
#include<vector>

class User
{
    static int user_count;
    std::string status = "Gold";

    public:
        static int get_user_count()
        {
            return user_count;
        }
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }
        void set_status(std::string status)
        {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
                this->status = status;
            }
            else
            {
                this->status = "no status";
            }
            
        }
        User()
        {
            user_count++;
        }
        User(std::string first_name, std::string last_name, std::string status) 
        {
            this->first_name = first_name;
            this->last_name = first_name;
            set_status(status);
            user_count++;
        } 
        ~User()
        {
            user_count--;
        } 
};

int User::user_count = 0;

int add_user_if_not_exists(std::vector<User> &users, User user)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first_name == user.first_name &&
            users[i].last_name == user.last_name)
        {
            return i; /*returning index*/
        }
    }
    users.push_back(user);
    return users.size() -1 ; /*returning index*/
}

int main(int argc, const char** argv) {
    // User me;
    // me.first_name = "Fuad Hasan";
    // me.last_name = "Hasan";

    // std::cout<<users[0].first_name<<std::endl;
    
    // User user1, user2, user3;
    // user1.first_name = "Fuad";
    // user1.last_name = "Hasan";
    // user2.first_name = "Abujar";
    // user2.last_name = "Uddin";
    // user3.first_name = "Nadiya";
    // user3.last_name = "Sarkar";
    // std::vector<User> users;
    // users.push_back(user1);
    // users.push_back(user2);
    // users.push_back(user3);

    // User user;
    // user.first_name = "Fuad";
    // user.last_name = "Hasan";

    // std::cout<<add_user_if_not_exists(users, user)<<std::endl;
    User user("Fuad","Hasan","Diamond");
    std::cout<<user.get_status()<<std::endl;

    User user1, user2, user3, user4;

    std::cout<<User::get_user_count()<<std::endl;
    user1.~User();
    std::cout<<User::get_user_count()<<std::endl;
    return 0;      
} 