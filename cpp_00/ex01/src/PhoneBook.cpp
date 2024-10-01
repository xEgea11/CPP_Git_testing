/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:52:35 by regea-go          #+#    #+#             */
/*   Updated: 2024/09/29 21:14:38 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

static int ft_isNumber(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (FALSE);
        i++;
    }
    return (TRUE);
}

static int ft_isalnum(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!isalnum(str[i]))
            return (FALSE);
        i++;
    }
    return (TRUE);
}

static std::string ft_formatString(std::string str)
{
    if (str.length() > 10)
    {
        str.resize(9);
        str += ".";
    }
    return (str);
}

PhoneBook::PhoneBook()
{
    contact_count = 0;
    contact_index = 0;
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::addContact()
{
    if (contact_index == MAX_CONTACTS)
        contact_index = 0;
    contacts[contact_index].setFirstName(ft_getData("First name: ", STR));
    contacts[contact_index].setLastName(ft_getData("Last name: ", STR));
    contacts[contact_index].setNickname(ft_getData("Nickname: ", STR));
    contacts[contact_index].setPhoneNumber(ft_getData("Phone number: ", INT));
    contacts[contact_index].setDarkestSecret(ft_getData("Darkest secret: ", STR));
    contact_index++;
    if (contact_count < MAX_CONTACTS)
        contact_count++;
}

void PhoneBook::searchContact()
{
    int i;
    std::string idx;

    i = 0;
                                        // <------ Properly format the output
    if (contact_count == 0)
    {
        std::cout << "No contacts found" << std::endl;
        return ;
    }
    std::cout << std::endl;
    std::cout << "|" << std::right << std::setw(10) << "     Index" << "|";
    std::cout << std::right << std::setw(10) << "First name" << "|";
    std::cout << std::right << std::setw(10) << " Last name" << "|";
    std::cout << std::right << std::setw(10) << "  Nickname" << "|" << std::endl;
    std::cout << std::setfill('_') << std::setw(45) << "_" << std::setfill(' ') << std::endl << std::endl;

    while (i < contact_count)
    {
        std::cout << "|" << std::right << std::setw(10) << i + 1;
        std::cout << "|" << std::right << std::setw(10) << ft_formatString(contacts[i].getFirstName());
        std::cout << "|" << std::right << std::setw(10) << ft_formatString(contacts[i].getLastName());
        std::cout << "|" << std::right << std::setw(10) << ft_formatString(contacts[i].getNickname()) << "|" << std::endl << std::endl;
        i++;
    }

    idx = ft_getData("Enter the index of the contact: ", INT);
    i = (idx[0] - '0') - 1;

    if(i >= 0 && i < contact_count)
    {
        std::cout << "First name: " << contacts[i].getFirstName() << std::endl;
        std::cout << "Last name: " << contacts[i].getLastName() << std::endl;
        std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
        std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
        std::cout << "Darkest secret: " << contacts[i].getDarkestSecret() << std::endl;
    }
    else
        std::cout << "Invalid index" << std::endl;
}

std::string PhoneBook::ft_getData(std::string message, int type)
{
    std::string data;
    int flag;

    flag = 0;
    do 
    {
        std::cout << message;
        std::getline(std::cin, data);
        if (type == STR && ft_isalnum(data) == TRUE)
            flag = 1;
        if (type == INT && ft_isNumber(data) == TRUE)
            flag = 1;
        if (flag == 0)
            std::cout << "Please, provide a valid input" << std::endl;
    } while (data.empty() || flag == 0);
                                      
    return (data);
}