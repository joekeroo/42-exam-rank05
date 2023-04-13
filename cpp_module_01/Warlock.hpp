/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:03:49 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 20:17:57 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <map>
#include <string>
#include <iostream>
#include "ASpell.hpp"

class Warlock
{
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock(void);

		void				introduce(void) const;
		const std::string	getName(void) const;
		const std::string	getTitle(void) const;
		void				setTitle(const std::string &title);
		void				learnSpell(ASpell *spell);
		void				forgetSpell(std::string spellName);
		void				launchSpell(std::string spellName, const ATarget &target);

	private:
		std::string						_name;
		std::string						_title;
		std::map<std::string, ASpell *>	_spells;

		Warlock(const Warlock &ref) { (void)ref; };
		Warlock &operator=(const Warlock &ref) { (void)ref; return (*this);};
};

#endif
