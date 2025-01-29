/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_input.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:02:48 by rgiambon          #+#    #+#             */
/*   Updated: 2025/01/29 11:02:50 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HANDLE_INPUT_HPP
#define HANDLE_INPUT_HPP

#include <iostream>
#include "PhoneBook.hpp"

const std::string add = "ADD";
const std::string search = "SEARCH";
const std::string exit_program = "EXIT"; 

std::string get_input(std::string prompt);
int is_valid_input(std::string input);
void process_input(std::string input, PhoneBook& phone_book);

#endif
