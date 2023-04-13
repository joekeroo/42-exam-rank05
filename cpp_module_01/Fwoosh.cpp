/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:46:15 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 19:59:57 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::~Fwoosh(void)
{}

ASpell	*Fwoosh::clone(void) const
{
	Fwoosh	*temp = new Fwoosh();
	return (temp);
}
