/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:05:11 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 21:36:55 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Warlock.hpp"

void	test(void)
{
	Warlock	richard("Richard", "the Titled");

	Dummy	bob;
	Fwoosh	*fwoosh = new Fwoosh();

	richard.learnSpell(fwoosh);

	richard.introduce();
	richard.launchSpell("Fwoosh", bob);

	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", bob);
}

int main()
{
	test();
	system("leaks a.out");
	return (0);
}
