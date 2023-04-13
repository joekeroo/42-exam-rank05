/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:30:30 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 19:45:19 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(const std::string &type) : type(type)
{}

ATarget::ATarget(const ATarget &ref)
{
	this->type = ref.type;
}

ATarget	&ATarget::operator=(const ATarget &ref)
{
	this->type = ref.type;
	return (*this);
}

ATarget::~ATarget(void)
{}

const std::string	ATarget::getType(void) const
{
	return (this->type);
}

void	ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
