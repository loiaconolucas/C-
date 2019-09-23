//
// Created by Lucas Loiacono on 9/29/18.
//

#include "iostream"
#ifndef SORTEDLINKEDLIST_SNODE_H
#define SORTEDLINKEDLIST_SNODE_H
template <typename E>
class SNode {
public:
    E elem;
    SNode<E> *next;

};
#endif //SORTEDLINKEDLIST_SNODE_H
