/*
partyinv.cpp
- In this file a constructor is created where you can insert amounts of party items. It is deleted by a constructor when finished. a copy is also able to be made.
- 3/31/25
*/

#include <iostream>
#include <string>

class Inventory{

    private:
        std::string* partyitems;
        int size;
        int count;
    
    public:
        //constructor
        Inventory(int s = 10 ) : size(s), count(0) //default is 10. size = s and count is 0
        {
            partyitems = new  std::string[size]; // new array
        };

        ~Inventory() 
        {
            delete[] partyitems; // deletes the array when inv is deleted
        };

        // copy constructor
        Inventory(const Inventory& other) : size(other.size), count(other.count) // other is referencing the copy. 
        {
            partyitems = new std::string[size];
            for (int i=0; i < count; i++)
            {
                partyitems[i] = other.partyitems[i]; // copying the same thing
            }
        };

        void addItem(const std::string& partyitem) 
        {
            if (count < size) // want to add an item? check if it can fit in the array size
            {
                partyitems[count++] = partyitem;
            }
            else
            {
                std::cout << "Inventory is full!" << std::endl;
            }
            
        };

        void showInventory() const 
        {
            for (int i = 0; i < count; i++)
            {
                std::cout << partyitems[i] << std::endl;
            }
            std::cout << "\n" << std::endl;
        };
    
};

int main() 
{

    Inventory inv1(4);
    inv1.addItem("Party Hats");
    inv1.addItem("Balloons");
    inv1.addItem("Cake");
    
    Inventory inv2 = inv1;
    inv2.addItem("Napkins");

    inv1.showInventory();
    inv2.showInventory();


}