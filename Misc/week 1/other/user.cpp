#include <iostream>

class User
{
    public:
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }
        User()
        {
            
        }
        User(std::string first_name, std::string last_name)
        {
            this->first_name = first_name;
            this->last_name = last_name;
        }
    private:
        std::string status = "Premium";
};

int main()
{
    User me;
    me.first_name = "River";
    me.last_name = "Hill";

    User user2("John", "Doe");

    std::cout << "Hello " << me.get_status() << std::endl;
    std::cout << "Hello " << user2.first_name << std::endl;

}