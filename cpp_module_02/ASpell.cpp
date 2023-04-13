/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:20:27 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 19:45:26 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(const std::string &name, const std::string &effects) : name(name), effects(effects)
{}

ASpell::ASpell(const ASpell &ref)
{
	this->name = ref.name;
	this->effects = ref.effects;
}

ASpell	&ASpell::operator=(const ASpell &ref)
{
	this->name = ref.name;
	this->effects = ref.effects;
	return (*this);
}

ASpell::~ASpell(void)
{}

std::string	ASpell::getName(void) const
{
	return (this->name);
}

std::string	ASpell::getEffects(void) const
{
	return (this->effects);
}

void	ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}
