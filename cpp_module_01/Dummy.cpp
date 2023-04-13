/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:00:32 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 20:01:57 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy")
{}

Dummy::~Dummy(void)
{}

ATarget	*Dummy::clone(void) const
{
	Dummy	*temp = new Dummy();
	return (temp);
}
