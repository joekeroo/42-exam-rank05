/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:43:52 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 20:44:43 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to crisp")
{}

Fireball::~Fireball(void)
{}

ASpell	*Fireball::clone(void) const
{
	Fireball	*temp = new Fireball();
	return (temp);
}
