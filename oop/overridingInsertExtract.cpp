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
 
std::ostream& operator << (std::ostream& output, const User user)
{
    output<<"First name: "<<user.first_name<<"\nLast name: "<<user.last_name;
    return output;
}
std::istream& operator >> (std::istream& input, User &user)
{
    input>>user.first_name>>user.last_name;
    return input;
}

int main(int argc, const char** argv) {
    User user;
    // user.first_name = "Fuad";
    // user.last_name = "Hasan";
    // user.set_status("Gold");
    std::cin>>user;

    std::cout<<user<<std::endl;

    return 0;
} 