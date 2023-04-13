/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:45:31 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 20:46:27 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into critter")
{}

Polymorph::~Polymorph(void)
{}

ASpell	*Polymorph::clone(void) const
{
	Polymorph	*temp = new Polymorph();
	return (temp);
}
