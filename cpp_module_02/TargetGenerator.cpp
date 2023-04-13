/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:50:40 by jhii              #+#    #+#             */
/*   Updated: 2023/04/13 21:27:40 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) : _targets()
{}

TargetGenerator::TargetGenerator(const TargetGenerator &ref)
{
	(void)ref;
}

TargetGenerator	&TargetGenerator::operator=(const TargetGenerator &ref)
{
	(void)ref;
	return (*this);
}

TargetGenerator::~TargetGenerator(void)
{
	for (std::map<std::string, ATarget *>::iterator it = this->_targets.begin(); it != this->_targets.end(); ++it)
		delete it->second;
}

void	TargetGenerator::learnTargetType(ATarget *target)
{
	this->_targets[target->getType()] = target->clone();
}

void	TargetGenerator::forgetTargetType(const std::string &targetName)
{
	if (this->_targets.find(targetName) != this->_targets.end())
		delete this->_targets[targetName];
	this->_targets.erase(targetName);
}

ATarget	*TargetGenerator::createTarget(const std::string &targetName)
{
	if (this->_targets.find(targetName) != this->_targets.end())
		return (this->_targets[targetName]);
	return (NULL);
}
