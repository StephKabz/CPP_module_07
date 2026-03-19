/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 19:07:36 by kingstephan       #+#    #+#             */
/*   Updated: 2026/03/19 16:40:04 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>

class Array
{
	private :
		T *array;
		unsigned int size_array;
	public :
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array& operator=(const Array &other);
		~Array();
		T& operator[](const int idx);
		const T& operator[](const int idx) const;
		unsigned int size() const;
};

template <typename T>

void print_temp(T const &param)
{
	std::cout << param << std::endl;
};

#include "Array.tpp"

#endif