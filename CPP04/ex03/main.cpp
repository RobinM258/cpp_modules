#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main (void)
{
    IMateriaSource* src = new MateriaSource();
    AMateria* tmp;
    tmp = new Ice();
    src->learnMateria(tmp);
    delete tmp;
    tmp = new Cure();
    src->learnMateria(tmp);
    delete tmp;

    ICharacter* Victor = new Character("Victor");

    tmp = src->createMateria("ice");
    Victor->equip(tmp);
    delete tmp;
    tmp = src->createMateria("cure");
    Victor->equip(tmp);
    delete tmp;
    tmp = src->createMateria("cure");
    Victor->equip(tmp);
    

    ICharacter* Kieron = new Character("Kieron");

    Victor->use(0, *Kieron);
    Victor->use(1, *Kieron);


    delete Kieron;
    delete Victor;
    delete src;
    delete tmp;

    return 0;
}