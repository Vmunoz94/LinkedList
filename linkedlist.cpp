#include "linkedlist.h"
#include <iostream>
using namespace std;

//Add N to the front of the linked list
void LinkedList::add ( int N ){

     Node* newNode = new Node();
     newNode->value = N;
     newNode->next = this->head;

     //head should now point to the newNode
     this->head = newNode;
     this->length++;
}
//Remove the first instance of N from the list, then return true. If the N was not found, return false.
bool LinkedList::remove ( int N ){
     //currentNode will traverse the list to find N.
     //previousNode will traverse behind currentNode.
     Node* currentNode = new Node();
     Node* previousNode = new Node();

     currentNode= this->head;
     previousNode = currentNode;

     for (int i = 0; i < this->length; i++){
          //if currentNode = N and it is the first iteration of the for loop, then the head was removed
          if (currentNode->value == N && i == 0){
               //head now points to the next node in the list
               this->head = currentNode->next;
               this->length--;
               return true;
          }
          //if currentNode = N and is not at the beginning
          if (currentNode->value == N){
               //the previousNode should point to currentNode's next node
               //now nothing points to currentNode and is not in the list
               previousNode->next = currentNode->next;
               this->length--;
               return true;
          }
          //go to next node
          previousNode = currentNode;
          currentNode = currentNode->next;
     }
     return false;
}
//Find the first instance of N in the list and return its index. Return -1 if N was not found.
int LinkedList::find( int N ){

     int index = 0;
     //nodeFinder will traverse the list and start at the head
     Node* nodeFinder = new Node();
     nodeFinder = this->head;

     for (int i = 0; i < this->length; i++){

          if (nodeFinder->value == N){

               return index;
          }
          //go to next node
          nodeFinder = nodeFinder->next;
          index++;
     }
     return -1;
}
//Return a count of the instances of N in the list.
int LinkedList::count ( int N ){
     Node* counterNode = new Node();
     counterNode = this->head;
     int counter = 0;

     for (int i = 0; i < this->length; i++){

          if(counterNode->value == N){
               counter++;
               counterNode = counterNode->next;
               continue;
          }
          counterNode = counterNode->next;
     }

     return counter;
}
//Return the value stored in the node at index N.
int LinkedList::at ( int N ){
     Node* nodeAt = new Node();
     nodeAt = this->head;

     for(int i = 0; i < N; i++){

          nodeAt = nodeAt->next;
     }

     return nodeAt->value;
}
//Return the current length of the list.
int LinkedList::len() {
     
     return this->length;
}
