/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:33:47 by regea-go          #+#    #+#             */
/*   Updated: 2024/09/29 21:15:40 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (TRUE)
    {
        command = phoneBook.ft_getData("Enter a command: ", STR);
        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT")
            return (0);
    }
    return (0);
}