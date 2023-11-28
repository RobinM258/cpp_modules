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
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* Victor = new Character("Victor");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    Victor->equip(tmp);
    tmp = src->createMateria("cure");
    Victor->equip(tmp);

    ICharacter* Kieron = new Character("Kieron");

    Victor->use(0, *Kieron);
    Victor->use(1, *Kieron);


    delete Kieron;
    delete Victor;
    delete src;

    return 0;
}