/*
yoda.cpp
- In this file values are set to letters. It tells you the value, it also can add the sum of letter values and shift messages. 
- Alyssa Seibel
- 4/16/25
*/

#include <iostream>
#include <string>
#include <cctype>

int decode_char(char letter){
    return toupper(letter) - 'A' + 1; // A = 65 
}

int decode_char(char letter, int bonus) {
    return (toupper(letter) - 'A' + 1) + bonus;
}

int sum_msg(const std::string& message){
    int total = 0;
    for (char c : message){//for every letter in message
        if (isalpha(c)){//only decoding letter not spaces
            total += decode_char(c);//using decode char method and adding to total
        }
    }
    return total;
}

std::string msg_shift(const std::string& message, int shift){
    std::string shifted_msg;
    for(char c : message){ // goes through each char
        if (isalpha(c)){ // only process letters
            char base = isupper(c) ? 'A' : 'a'; // if base is upper go to A if not it goes to a

            shifted_msg += (c- base + shift) % 26 + base; //subtract letter from its base (A or a) then add its shift. %26 is so it only goes from a - z
        } else {
            shifted_msg += c;// non letter stay
        }

    }
    return shifted_msg;
}

int main(){

    std::cout << "Yoda decoding 'L' : " << decode_char('L')<< std::endl;
    std::cout << "With force bonus of +2: " << decode_char('L', 2)<< std::endl;
    std::cout << "Message sum of 'Hello': " << sum_msg("Hello")<< std::endl;
    std::cout << "Yoda shifted message: " << msg_shift("Hello Friends!", 3)<<std::endl;
    std::cout << "(pssst a hint is the message is shifted by 3 letters)" << std::endl;
}