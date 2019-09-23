//
// Created by Lucas Loiacono on 9/29/18.
//

#include "SLinkedList.h"
//

template <typename E>
SLinkedList<E>::SLinkedList()				// constructor
        : head(NULL) { }

template <typename E>
bool SLinkedList<E>::empty() const			// is list empty?
{ return head == NULL; }

template <typename E>
 E& SLinkedList<E>::front() 	// return front element
{return head->elem;
}
template <typename E>
void SLinkedList<E>::PrintFont() {
    std:: cout <<front()<<": Is the head of the ist "<< std::endl;
}

template <typename E>
SLinkedList<E>::~SLinkedList()			// destructor
{ while (!empty()) removeFront(); }

template <typename E>
void SLinkedList<E>::addFront(const E& e) {		// add to front of list
    SNode<E>* v = new SNode<E>;
    if (head=NULL){
        v->elem = e;					// store data
        head = v;
        v->next == NULL;
    }
    v->elem = e;					// store data
    v->next = head;					// head now follows v
    head = v;						// v is now the head
}
template <typename E>
void SLinkedList<E>::addBack( const E& e) {
    SNode<E> *v = new SNode<E>;
    v->elem = e;
    v->next = NULL;
    if (head == NULL) {
        head = v;
    } else {
        SNode<E> *temp = head; // we create a temporary variable and designate it as the head

        while (temp->next != NULL) { //traverse the list  until we hit the end
            temp = temp->next;
        }
        temp->next = v; // we set the temp node to our value.
        v->next=NULL;    // we set the next pointer to null because we are at the back of the list.
    }
}
template <typename E>
E SLinkedList<E>::removeFront() {			// remove front item
    SNode<E>* old = head;				// save current head
    E ret = head->elem;
    head = old->next;					// skip over old head
    delete old;						// delete the old head
    return ret;
}
template <typename E>
void  SLinkedList<E>::sortedinsert( const E &e) { // this is a function that inserts a value in ascending order.

    SNode<E> *v = new SNode<E>;
    SNode<E> *current = new SNode<E>;
    // create new node
    v->elem = e;
    if (head == NULL||head->elem>=v->elem) {
        v->next = head;
        head = v;
    }
    else{
        current = head;
        while (current->next != NULL && current->next->elem < v->elem) {
            current = current->next;
        }
        v->next = current->next;
        current->next = v;
    }
    }

template <typename E>
void SLinkedList<E>::removeBack() {
    SNode<E> *current;
    SNode<E>*v;
    current = NULL;
    v= head;
    while (v->next!=NULL){
        current = v;
        v = v->next;
    }
    current->next =NULL;
    delete (v);
    v->next=NULL;
}
