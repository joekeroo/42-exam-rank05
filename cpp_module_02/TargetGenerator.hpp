/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:50:38 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 21:27:11 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	public:
		TargetGenerator(void);
		~TargetGenerator(void);

		void	learnTargetType(ATarget *target);
		void	forgetTargetType(const std::string &targetName);
		ATarget	*createTarget(const std::string &targetName);

	private:
		std::map<std::string, ATarget *>	_targets;

		TargetGenerator(const TargetGenerator &ref);
		TargetGenerator	&operator=(const TargetGenerator &ref);
};

#endif
