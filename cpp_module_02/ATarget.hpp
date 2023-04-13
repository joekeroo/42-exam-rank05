/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:30:34 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 20:35:25 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget(const std::string &type);
		ATarget(const ATarget &ref);
		virtual	~ATarget(void);

		ATarget &operator=(const ATarget &ref);

		virtual ATarget		*clone(void) const = 0;
		const std::string	getType(void) const;
		void				getHitBySpell(const ASpell &spell) const;

	private:
		std::string	type;
};

#endif
