#include <iostream>
#include <string>
#include <algorithm>
#include "linkedlist.cpp"
using namespace std;

int main () {
     /* Test your implementation here */
     LinkedList* list = new LinkedList();
     int userInput;
     int values;
     int length;
     int index;
     string question;

     cout << "How many values would you like to add to the list?" << endl;
     cin >> userInput;
     length = userInput;

     if(!length){
          return 0;
     }
     //add a node
     cout << "Enter " << userInput << " values:" << endl;
     for(int i = 0; i < userInput; i++){
          cin >> values;
          list->add(values);
     }
     //delete a node
     cout << "Would you like to delete a value from the list? [yes/no]" << endl;
     do {
          cin >> question;
          transform(question.begin(), question.end(), question.begin(), ::tolower);
     }while (question.compare("no") && question.compare("yes"));

     if(question == "yes"){

          cout << "How many values would you like to remove?" << endl;
          do{
               cin >> userInput;
               if(userInput > length){
                    cout << "Out of range, try again" << endl;
               }
          }while(userInput > length);

          cout << "Which value would you like to remove?" << endl;
          for(int i = 0; i < userInput; i++){
               cin >> values;
               if(list->remove(values) == true){
                    cout << "The value was removed" << endl;
                    length--;
               }else{
                    cout << "The value was not removed" << endl;
               }
          }
     }
     //find a node
     cout << "Would you like to find a value from the list? [yes/no]" << endl;
     do {
          cin >> question;
          transform(question.begin(), question.end(), question.begin(), ::tolower);
     }while (question.compare("no") && question.compare("yes"));

     if(question == "yes"){

          cout << "How many values would you like to find?" << endl;
          do{
               cin >> userInput;
               if(userInput > length){
                    cout << "Out of range, try again" << endl;
               }
          }while(userInput > length);

          cout << "Which value would you like to find?" << endl;
          for(int i = 0; i < userInput; i++){
               cin >> values;
               cout << "The value was found at index: " << list->find(values) << endl;
          }
     }
     //count of values
     cout << "Would you like to find the count of a value? [yes/no]" << endl;
     do {
          cin >> question;
          transform(question.begin(), question.end(), question.begin(), ::tolower);
     }while (question.compare("no") && question.compare("yes"));

     if(question == "yes"){

          cout << "How many values would you like to count?" << endl;
          do{
               cin >> userInput;
               if(userInput > length){
                    cout << "Out of range, try again" << endl;
               }
          }while(userInput > length);

          cout << "Which value would you like to count?" << endl;
          for(int i = 0; i < userInput; i++){
               cin >> values;
               cout << "The value was counted " << list->count(values) << " times throughout the list" << endl;
          }
     }
     //at index
     cout << "Would you like to find the value at a certain index? [yes/no]" << endl;
     do {
          cin >> question;
          transform(question.begin(), question.end(), question.begin(), ::tolower);
     }while (question.compare("no") && question.compare("yes"));

     if(question == "yes"){

          cout << "How many indexs' would you like to get the value of?" << endl;
          do{
               cin >> userInput;
               if(userInput > length){
                    cout << "Out of range, try again" << endl;
               }
          }while(userInput > length);

          cout << "Which index would you like to get the value of?" << endl;
          for(int i = 0; i < userInput; i++){
               do{
                    cin >> index;
                    if(index >= length){
                         cout << "Out of range, try again" << endl;
                    }
               }while(index >= length);
               cout << "The value at index " << index << " is: " << list->at(index) << endl;
          }
     }
     //length of list
     cout << "The length of the list is: " << list->len() << endl;

return 0;
}
