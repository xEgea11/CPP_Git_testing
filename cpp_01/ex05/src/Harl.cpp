#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "Debug: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << GREEN "Info: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" RESET << std::endl;
}

void Harl::warning(void)
{
    std::cout << YELLOW "Warning: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." RESET << std::endl;
}

void Harl::error(void)
{
    std::cout << RED "Error: This is unacceptable! I want to speak to the manager NOW." RESET << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[])(void) = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    std::string levels[] = 
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    for (int i = 0; i < 4; ++i)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            return;
        }
    }

    std::cout << "beep beep, dunno what u talking about" << std::endl;
}