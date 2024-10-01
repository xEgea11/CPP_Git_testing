/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:21:48 by regea-go          #+#    #+#             */
/*   Updated: 2024/09/29 21:12:56 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "main.hpp"

#define MAX_CONTACTS 8
#define STR 0
#define INT 1

class PhoneBook
{
    private:
        Contact contacts[MAX_CONTACTS];
        int		contact_count;
        int     contact_index;
    public:
        PhoneBook();
        ~PhoneBook();

        void addContact();
        void searchContact();
        
        std::string ft_getData(std::string message, int type);
};
