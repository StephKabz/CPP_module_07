/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 19:15:00 by kingstephan       #+#    #+#             */
/*   Updated: 2026/03/19 15:42:43 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>

Array<T>::Array()
{
	array = NULL;
	size_array = 0;
};

template <typename T>

Array<T>::Array(unsigned int n)
{
	array = new T[n];
	size_array = n;
};

template <typename T>

Array<T>::Array(const Array &other)
{
	array = new T[other.size_array]
	for (int i = 0; i < other.size_array; i++)
		array[i] = other.array[i];
	size_array = other.size_array;
};

template <typename T>

Array<T>& Array<T>::operator=(const Array &other)
{
	delete[] array;
	T *array = new T[other.size_array]
	for (int i = 0; i < other.size_array; i++)
		array[i] = other.array[i];
	size_array = other.size_array;
};

template <typename T>

Array<T>::~Array()
{
	delete[] array;
};

template <typename T>

T& Array<T>::operator[](const int idx)
{
	return (array[idx])
};

template <typename T>

unsigned int Array<T>::size() const
{
	return (size_array);
};

