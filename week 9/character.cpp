#include <iostream>
#include <string>
#include <vector>

enum class CharacterClass{

    warrior,
    mage,
    archer,
    rogue
};
std::string getCharacterClassName(CharacterClass type){

    switch(type){
        case CharacterClass::warrior: return "Warrior";
        case CharacterClass::mage: return "Mage";
        case CharacterClass::archer: return "Archer";
        case CharacterClass::rogue: return "Rogue";
        default: return "Unknown";
    }
    return "Unknown";
};

struct Character{
    std::string name;
    CharacterClass type;
    int health;
    float strength;

};


int main(){



    std::vector<Character> characters = {
    {"Zues", CharacterClass::warrior, 100, 300},

    {"Hades", CharacterClass::mage, 100, 230},

    {"Apollo",CharacterClass::archer, 100, 150},

    {"Medusa", CharacterClass::rogue, 100, 350}
    };


    for (int i = 0; i < characters.size(); i++){
        std::cout<< "Name: "<< characters[i].name <<std::endl;
        std::cout << "Type: "<< getCharacterClassName(characters[i].type)  <<std::endl;
        std::cout << "Health: " << characters[i].health << std::endl;
        std::cout << "Strength: " << characters[i].strength << std::endl;
        std::cout <<"\n"<<std::endl;
    }
}