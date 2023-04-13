/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:03:49 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 15:34:32 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock
{
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock(void);

		void				introduce(void) const;
		const std::string	getName(void) const;
		const std::string	getTitle(void) const;
		void				setTitle(const std::string &title);

	private:
		std::string	_name;
		std::string	_title;

		Warlock(const Warlock &ref) { (void)ref; };
		Warlock &operator=(const Warlock &ref) { (void)ref; return (*this);};
};

#endif
