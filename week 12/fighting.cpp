/*
fighting.cpp
- In this file randomized dice are rolled in order to see if you can attack and by how much. 
- 4/1/25
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
class Fighter{
    
public: 
    std::string name;
    int hp;
    int ac;
    
    Fighter(std::string n, int h, int a) : name(n), hp(h), ac(a){}
    
int attack(){
    return 1 + (std::rand() % 20);
};

int roll_D8(){
    return 1 + (std::rand() % 8);
};

int roll_D6(){
    return 1 + (std::rand() % 6);
}
};

int main()
{
   Fighter player("Hero",20, 15);
   Fighter enemy("Goblin",10,12);
    
    
    std::cout << "You are the Hero. You have " << player.hp << " HP and your Armor Class is "
    << player.ac << std::endl;
    
    std::cout << "You are fighting a Goblin with " << enemy.hp<< " HP with an Armor Class of "
    << enemy.hp << "\n" << std::endl;
    
    while (enemy.hp > 0 && player.hp > 0){
        int playerRoll = player.attack();
        
        std::cout <<"\n"<< player.name << " rolls a D20 and gets a "<< playerRoll<<std::endl;
        if(playerRoll >= 13){
            int playerDamage = player.roll_D8();
            enemy.hp -= playerDamage;
            std::cout <<"  "<< player.name << " attacks for " << playerDamage << " hp. The enemy has "
            << enemy.hp << " hp left."<< std::endl;}
        else{
            std::cout <<"  "<< player.name<< " missed!" << std::endl;
        }
        
        if (enemy.hp <= 0){
            std::cout << enemy.name<< " has been defeated! " << player.name << " Wins!"<< std::endl; 
            break;
        }
        
        int enemyRoll = enemy.attack();
        std::cout <<"\n"<< enemy.name << " rolls a D20 and gets a "<< enemyRoll << std::endl;
        
        if (enemyRoll >= 15){
            int enemyDamage = enemy.attack();
            player.hp -= enemyDamage;
            std::cout <<"  "<< enemy.name << " attacks for " << enemyDamage << " hp. " << player.name<<
            " has " << player.hp << " hp." << std::endl;
        }
        else{
            std::cout  <<"  "<< enemy.name << " missed!" << std::endl;
    
        }
        
        if (player.hp <= 0){
            std::cout << enemy.name << " had been defeated! " << enemy.name << " Wins!"
            << std::endl;
            break;
        }
    }
    
}