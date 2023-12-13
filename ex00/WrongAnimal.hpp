/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:50:48 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/13 15:58:17 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& other);
        virtual ~WrongAnimal();

        WrongAnimal& operator=(const WrongAnimal& other);

        void makeSound() const;
};

#endif