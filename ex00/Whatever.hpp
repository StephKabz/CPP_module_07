/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 00:29:14 by kingstephan       #+#    #+#             */
/*   Updated: 2026/03/17 00:56:42 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>

void swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
};

template <typename T>

T min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	return(b);
};

template <typename T>

T max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	return(b);
};

#endif