/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:53:29 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/06/07 21:20:26 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
const T &min(const T &a, const T &b)
{
    return a < b ? a : b;
}

template <typename T>
const T &max(const T &a, const T &b)
{
    return a > b ? a : b;
}
