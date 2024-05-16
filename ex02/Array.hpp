/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:03:26 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/05/16 17:28:02 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> class Array
{
  public:
	Array(void);
	Array(unsigned int i);
	Array(const Array &src);
	~Array(void);

	Array &operator=(const Array &rhs);
	Array &operator[](unsigned int idx);

	unsigned int size(void);

  private:
	T *_arr;
	unsigned int _size;
};
