/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:46:52 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 20:48:57 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall")
{}

BrickWall::~BrickWall(void)
{}

ATarget	*BrickWall::clone(void) const
{
	BrickWall	*temp = new BrickWall();
	return (temp);
}
