#pragma once
#include "main.hpp"

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        Contact();
        ~Contact();

        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setNickname(std::string nickname);
        void setPhoneNumber(std::string phoneNumber);
        void setDarkestSecret(std::string darkestSecret);
        
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
};
