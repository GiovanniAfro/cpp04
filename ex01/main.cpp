/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:16:22 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/13 17:19:40 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     delete j;//should not create a leak
//     delete i;

//     return 0;
// }

int main() {
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Calling makeSound for Dog: ";
    dog->makeSound();

    std::cout << "Calling makeSound for Cat: ";
    cat->makeSound();

    // Chiamare setIdea e getIdea di Dog
    Dog* myDog = new Dog();
    myDog->setIdea(0, "food");
    myDog->setIdea(1, "alcol");
    std::cout << "Idea 0 for Dog: " << myDog->getIdea(0) << std::endl;

    // Chiamare setIdea e getIdea di Cat
    Cat* myCat = new Cat();
    myCat->setIdea(0, "Bobies");
    myCat->setIdea(1, "Take a nap");
    std::cout << "Idea 1 for Cat: " << myCat->getIdea(1) << std::endl;

    delete dog;
    delete cat;
    delete myDog;
    delete myCat;

    return 0;
}
