#include <string>

class Account
{
    private:
        std::string depositor_;
        std::string number_;
        double balance_;
    public:
        Account (const std::string & depositor = "no_name", const std::string & number = "no_number", double balance = 0.0);
        void show(void) const;
        void deposit(double money);
        void withdraw(double money);
};
