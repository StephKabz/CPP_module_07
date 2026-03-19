/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:17:41 by kingstephan       #+#    #+#             */
/*   Updated: 2026/03/19 15:56:02 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>

void iter(T *array, const int len, F func)
{
	for(int i = 0; i < len; i++)
		func(array[i]);
};

template <typename T>

void print_temp(T const &param)
{
	std::cout << param << std::endl;
};

#endif