/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:05:11 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 20:50:31 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "Warlock.hpp"
#include "TargetGenerator.hpp"

void	test(void)
{
	Warlock	richard("Richard", "foo");
	richard.setTitle("Hello, I'm Richard the Warlock!");

	BrickWall		model1;
	Polymorph		*polymorph = new Polymorph();
	TargetGenerator	tarGen;

	tarGen.learnTargetType(&model1);
	richard.learnSpell(polymorph);

	Fireball	*fireball = new Fireball();

	richard.learnSpell(fireball);

	ATarget	*wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

	richard.introduce();
	richard.launchSpell("Polymorph", *wall);
	richard.launchSpell("Fireball", *wall);
}

int main(void)
{
	test();
	system("leaks a.out");
	return (0);
}
