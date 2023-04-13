/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:07:20 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 15:31:46 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

void	Warlock::introduce(void) const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << " !" << std::endl;
}

const std::string	Warlock::getName(void) const
{
	return (this->_name);
}

const std::string	Warlock::getTitle(void) const
{
	return (this->_title);
}

void	Warlock::setTitle(const std::string &title)
{
	this->_title = title;
}
