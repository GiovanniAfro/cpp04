/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:58:40 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/13 22:10:47 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        source[i] = nullptr;
    }
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    for (int i = 0; i < 4; ++i)
    {
        if (other.source[i])
            source[i] = other.source[i]->clone();
        else
            source[i] = nullptr;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        delete source[i];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        // Delete existing source
        for (int i = 0; i < 4; ++i)
        {
            delete source[i];
        }

        // Copy source
        for (int i = 0; i < 4; ++i)
        {
            if (other.source[i])
                source[i] = other.source[i]->clone();
            else
                source[i] = nullptr;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (!source[i])
        {
            source[i] = m->clone();
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (source[i] && source[i]->getType() == type)
        {
            return source[i]->clone();
        }
    }
    return nullptr;
}

