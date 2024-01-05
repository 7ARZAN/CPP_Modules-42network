/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:22:23 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/05 05:27:54 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _nb_materia(0){
	for(int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& src) : _nb_materia(src._nb_materia){
	for(int i = 0; i < this->_nb_materia; i++)
		this->_materia[i] = src._materia[i]->clone();
}

MateriaSource::~MateriaSource(){
	for(int i = 0; i < this->_nb_materia; i++)
		delete this->_materia[i];
}

MateriaSource & MateriaSource::operator=(MateriaSource const& src){
	if (this != &src)
	{
		for(int i = 0; i < this->_nb_materia; i++)
			delete this->_materia[i];
		this->_nb_materia = src._nb_materia;
		for(int i = 0; i < this->_nb_materia; i++)
			this->_materia[i] = src._materia[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m_ptr){
	if (this->_nb_materia < 4){
		this->_materia[this->_nb_materia] = m_ptr;
		this->_nb_materia++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for(int i = 0; i < this->_nb_materia; i++)
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	return (NULL);
}

