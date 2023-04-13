/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:15:49 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 21:35:17 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>
# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
		ASpell(const std::string &name, const std::string &effects);
		ASpell(const ASpell &ref);
		virtual ~ASpell(void);

		ASpell &operator=(const ASpell &ref);

		virtual ASpell	*clone(void) const = 0;
		std::string		getName(void) const;
		std::string		getEffects(void) const;
		void			launch(const ATarget &target) const;

	protected:
		std::string	name;
		std::string	effects;
};

#endif
