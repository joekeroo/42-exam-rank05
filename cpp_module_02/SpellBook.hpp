/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:52:39 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 21:21:26 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <map>
#include "ASpell.hpp"

class SpellBook
{
	public:
		SpellBook(void);
		~SpellBook(void);

		void	learnSpell(ASpell *spell);
		void	forgetSpell(const std::string &spellName);
		ASpell	*createSpell(const std::string &spellName);

	private:
		std::map<std::string, ASpell *>	_spells;

		SpellBook(const SpellBook &ref);
		SpellBook	&operator=(const SpellBook &ref);
};

#endif
