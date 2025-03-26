/*
refAndPointer.cpp
- In this file two methods are created. One called drink potion which takes a pointer to hp and a healing amount. damage hero takes a reference to hp. 
- Alyssa Seibel
- 3/24/25
*/

#include <iostream>
#include <string>

void drinkPotion(int* hp, int potionHeal)
{
    int heal = *hp + potionHeal; 
    std::cout << "Hero gained " << potionHeal << " health. The Hero now has " << *hp << " health."<< std::endl;
}

void damageHero(int* hp)
{
    int damage = 5;
    *hp -= damage;
    std::cout << "Hero lost " << damage << " hp. Hero current has "<< *hp<< " hp."<< std::endl;
    
};

int main()
{

    int hp = 10;

    std::cout << "The Hero has " << hp << " hp."<<std::endl;
    damageHero(&hp);
    drinkPotion(&hp,5);


}
