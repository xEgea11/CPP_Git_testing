/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:52:55 by regea-go          #+#    #+#             */
/*   Updated: 2024/09/29 21:14:48 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{

}

void Contact::setFirstName(std::string firstName)
{
        this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
    return(firstName);
}

std::string Contact::getLastName()
{
    return(lastName);
}

std::string Contact::getNickname()
{
    return(nickname);
}

std::string Contact::getPhoneNumber()
{
    return(phoneNumber);
}

std::string Contact::getDarkestSecret()
{
    return(darkestSecret);
}

