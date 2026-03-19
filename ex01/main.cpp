/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:28:01 by kingstephan       #+#    #+#             */
/*   Updated: 2026/03/17 18:39:49 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printSeparator(std::string title) {
    std::cout << "\n========================================" << std::endl;
    std::cout << "  " << title << std::endl;
    std::cout << "========================================" << std::endl;
};

int main(void)
{
	printSeparator("Test 1! INT!");
	int array[] = {1, 33, 2, 54, 22, 24, 7}; 
	int size = sizeof(array) / sizeof(array[0]);
	iter(array, size, print_temp<int>);

	printSeparator("Test 2! STRING!");
	std::string sentence[] = {"je", "pense", "que", "je", "suis", "fatigué!"};
	int new_size = sizeof(sentence) / sizeof(sentence[0]);
	iter(sentence, new_size, print_temp<std::string>);

	printSeparator("Test 3! FLOAT");
	float f_array[] = {1.3, 3.5, 5.7, 7.2, 33.4, 7.4, 7.7};
	float f_size = sizeof(f_array) / sizeof(f_array[0]);
	iter(f_array, static_cast<int>(f_size), print_temp<float>);

	printSeparator("TESTS DONE");
	return (0);
};