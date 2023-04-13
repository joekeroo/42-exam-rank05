/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:52:45 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 21:20:50 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void) : _spells()
{}

SpellBook::SpellBook(const SpellBook &ref)
{
	(void)ref;
}

SpellBook	&SpellBook::operator=(const SpellBook &ref)
{
	(void)ref;
	return (*this);
}

SpellBook::~SpellBook(void)
{
	for (std::map<std::string, ASpell *>::iterator it = this->_spells.begin(); it != this->_spells.end(); ++it)
		delete it->second;
}

void	SpellBook::learnSpell(ASpell *spell)
{
	this->_spells[spell->getName()] = spell->clone();
}

void	SpellBook::forgetSpell(const std::string &spellName)
{
	if (this->_spells.find(spellName) != this->_spells.end())
		delete this->_spells[spellName];
	this->_spells.erase(spellName);
}

ASpell	*SpellBook::createSpell(const std::string &spellName)
{
	if (this->_spells.find(spellName) != this->_spells.end())
		return (this->_spells[spellName]);
	return (NULL);
}
