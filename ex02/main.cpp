/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:44:16 by kingstephan       #+#    #+#             */
/*   Updated: 2026/03/19 18:42:03 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>

void print_temp(T const &param)
{
	std::cout << param << std::endl;
};

void printSeparator(std::string title) {
    std::cout << "\n========================================" << std::endl;
    std::cout << "  " << title << std::endl;
    std::cout << "========================================" << std::endl;
};

int main(void)
{
	printSeparator("Test 1.0 : int");
	Array<unsigned int> copy_1(10);
	Array<unsigned int> copy_2(15);

	std::cout << "size copy_1 : " << copy_1.size() << std::endl;
	try
	{
		for (unsigned int i = 0; i < copy_1.size(); i++)
			print_temp(copy_1[i]);
	}
	catch(std::exception &e)
	{
    	std::cout << e.what() << std::endl;
	};

	try
	{
		for (unsigned int j = 0; j < copy_2.size(); j++)
			copy_2[j] = j * 2;
	}
	catch(std::exception &e)
	{
    	std::cout << e.what() << std::endl;
	};

	printSeparator("Test 1.1 : int : copy asignment!");
	
	copy_1 = copy_2;
	std::cout << "size copy_1 after copy operator : " << copy_1.size() << std::endl;

	try
	{
		for (unsigned int k = 0; k < copy_1.size(); k++)
			print_temp(copy_1[k]);
	}
	catch(std::exception &e)
	{
    	std::cout << e.what() << std::endl;
	};

	printSeparator("Test 1.2 : int : empty!");
	Array<int> empty;

	std::cout << "size empty : " << empty.size() << std::endl;

	try
	{
		print_temp(empty[1]);
	}
	catch(std::exception &e)
	{
    	std::cout << e.what() << std::endl;
	};

	printSeparator("Test 1.3 : int : copy constructor!");

	Array<int> original(5);
	original[0] = 42;
	std::cout << "original[0] : " << original[0] << std::endl;
	Array<int> copie(original);
	copie[0] = 99;
	std::cout << "copie[0] : " << copie[0] << std::endl;

	printSeparator("====================================");

	return (0);
};