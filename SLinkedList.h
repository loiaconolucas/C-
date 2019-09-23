//
// Created by Lucas Loiacono on 9/29/18.
//
#include "SNode.h"
#ifndef SORTEDLINKEDLIST_SLINKEDLIST_H
#define SORTEDLINKEDLIST_SLINKEDLIST_H

template <typename E>
    class SLinkedList {

    public:
        SLinkedList();				// empty list constructor
        ~SLinkedList();				// destructor
        bool empty() const;// is list empty?
        void PrintFont();
         E& front();			// return front element
        void sortedinsert(const E& e); // add an element in a ascending order;
        void addFront( const E& e);// add to front of list
        void addBack( const E&e);
        void print ();
        E removeFront();// remove front item list
        void removeBack();

    private:
        SNode<E>* head;



};


#endif //SORTEDLINKEDLIST_SLINKEDLIST_H
