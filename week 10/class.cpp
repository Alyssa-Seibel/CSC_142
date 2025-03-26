/*
class.cpp
- In this file a magic item class is created. A magic item has a name, magic type and charge value attached to it. A use method is created which tracks if charge is greater than 0. If it isnt, then you cannot use the item anymore. 
- 3/25/25
*/
#include <iostream>
#include <string>
class MagicItem
{
    private:
        std::string name_;
        std::string magictype_;
        int charges_;

    public:
        MagicItem(const std::string& name, const std::string& magictype, int charges)
            : name_{name}, magictype_{magictype}, charges_{charges}
            {
                std::cout << name_ << "(" << magictype_ << ") with " << charges_<< " charges has been created."<<std::endl;

            }

        void use()
        {
            if (charges_ > 0)
            {
                charges_--;
                std::cout << name_ << " has been used. It has "<< charges_ << " charge left."<<std::endl;
            }

            else
            {
                std::cout << name_ << " has no charge left." << std::endl;
            }
            

        }




};

int main()
{

    MagicItem jumpBoost("Jump Boost", "Physical Ability", 3);
    jumpBoost.use();

    MagicItem waterBreathing("Water Breathing", "Physical Ability", 2);
    waterBreathing.use();

    MagicItem mindRead("Mind Reading", "Mental Ability", 1);
    mindRead.use();
    mindRead.use();
    waterBreathing.use();

}