/*
duel.cpp
- In this file is a fighting sequence. Random numbers are generated. If the attack number is more than the defense then it hits. If not then it misses. 
- Alyssa Seibel
- 4/14/25
*/

#include <iostream>
#include <iomanip>
#include <ctime>

int roll_attack(){
    return rand() % 10+1;
}

int roll_defense(){
    return rand() % 10+1;
}

bool is_hit(int attack, int defense){
   return attack > defense;
}

int main(){
    int obi_wins = 0;
    int maul_wins = 0;
    srand(time(0));

    for (int i = 1; i <= 5; i++){
        int attack = roll_attack();
        int defense = roll_defense();

        std::cout << "\nRound " << i << std::endl;
        std::cout << "\n Obi-Wan attacks with " << attack << ", Maul defends with " << defense<< std::endl;

        if (is_hit(attack, defense)) {
            std::cout << "HIT!" << std::endl;
            obi_wins++;
        }
        else{
            std::cout << "MISS!" << std::endl;
            maul_wins++;
        }
    }

    std::cout << "\nMaul has " << maul_wins << " wins." <<std::endl;
    std::cout << "Obi_Wan has " << obi_wins << " wins." <<std::endl;

    if ( obi_wins > maul_wins){
        std::cout << "\nObi-Wan wins the duel!" << std::endl;
    }
    else if ( maul_wins > obi_wins) {
        std::cout << "\nMaul wins the duel!" << std::endl;
    }
    else {
        std::cout << "It's a tie!"<< std::endl;
    }

}
