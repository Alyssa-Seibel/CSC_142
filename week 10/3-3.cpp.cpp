/*
3-3.cpp
- In this file two methods are created. one to insert before a listed slot and one after a listed slot.
   lets say you have a list one through 3. Head > 1 > 2 > 3 > nullptr.
   you create a new element > 99
   since head is not the slot (we want slot 2), we traverse, starting at head, to find whose next is pointing to the slot(slot 2)
   we change slot 1 next to point to 99 (since it is now in slot 2) and 99 next to point to 2 (since two is now slot 3)

- Alyssa Seibel
- 3/26/25
*/




#include <iostream>
#include <cstdio>
 const int size = 6; // buffer size including a null terminatior t the end

 char read_from(const char* arr, int index)
 {
    return(index >= 0 && index < size - 1) ? arr[index] : '\0';

 };
void write_to( char* arr, int index, char value)
 {
    if(index >= 0 && index < size - 1) arr[index] = value;
 };

 struct Element 
 {
   Element* next{}; // pointer to the next element
   Element* previous{}; // pointer to previous element
   char operating_number; // some value

   // insert a new element after the current one
   void insert_after(Element* new_element)
   {
      new_element->next = next;// link new_element to the next in line
      if (next) {
         next->previous = new_element;
      }
      new_element->previous=this;
      next = new_element; // update current element's next pointer
   }

   // insert a new element before the specifies slot
   static void insert_before(Element*& head, Element* slot, Element* new_element ){
   
      if(head == slot){
         // if the slot is the head, make new_element the new head
         new_element->next = head;
         head = new_element;
         return;
      }

      // oherwise, traverse the list to find the previous element
      Element* current = head;
      while (current && current->next != slot) {
         current = current->next;
   }

      // if we found the lement before the slot, insert the new element
      if (current){
         new_element->next = slot; // link new element to slot
         new_element->previous = current; // link new element to the current
         current->next = new_element; // link the previous element to next
         slot->previous = new_element;
      }
   }
 };

 int main ()
 {

    char upper[] = "ABC?E";
    char lower[] = "abc?e";

    Element* head = nullptr;
    Element* prev = nullptr;

   for (int i = 0; i < size; ++i)
   {
      Element* new_element = new Element();
      new_element->operating_number = upper[i];
      
      if (prev)
      {
         prev->insert_after(new_element); // link the previous element to the new one
      }
      else {
         head = new_element; // first element = head
      }
      prev = new_element; // update prev to point to the element
   }

    std::cout<< "List from head to tail: ";
    Element* current = head;
    while (current){
      std::cout<< current->operating_number << " "; //print the prefix which is the character
      current = current->next;
    }

   std::cout << std::endl;

    // create a new element with value g 
    Element* new_element = new Element();
    new_element->operating_number = 'G';

    //traverse to c (which is the third slot)
    Element* slot = head;
    int index = 0;
    while (slot && index < 2){ // traverse to the third element
      slot = slot->next;
      index++;
   }

   //insert into third element
   if (slot) {
      Element::insert_before(head,slot,new_element);
   }

   std::cout << "List after inserting: ";
   current = head;
   while(current) {
      std::cout << current->operating_number << " ";
      current = current->next;
   }
   std::cout << std::endl;

   std::cout << "List from tails to head: ";
   current = prev; //start last element
   while (current) {

      std::cout << current->operating_number << " ";
      current = current->previous;

   }
   std::cout << std::endl;


   


 }

