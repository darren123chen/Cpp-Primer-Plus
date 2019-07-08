#include <string>

class Person {
    private:
        static const int LIMIT = 25;
        std::string lname;
        char fname[LIMIT];
    public:
        Person() {
            lname = "";
            fname[0] = '\0';
            std::cout << "\nUsing default constructor.\nInitialisation done.\n";
        }
        Person(const std::string & ln, const char * fn = "Hey you");

        void Show() const;
        void FormalShow() const;
};
