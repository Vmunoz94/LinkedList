#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
using namespace std;

class LinkedList {
     Node * head;
     int length;
public:
     void add( int );
     bool remove( int );
     int find( int );
     int count( int );
     int at( int );
     int len();
};

#endif
