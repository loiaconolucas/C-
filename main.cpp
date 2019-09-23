#include <iostream>
#include "SLinkedList.cpp"
using namespace std;
int main() {


    SLinkedList<int > sorted;
    SLinkedList<string> String;

    String.sortedinsert("blah");
    String.sortedinsert("hello");
    String.sortedinsert("abba");


    sorted.sortedinsert(49);
    sorted.sortedinsert(99);
    sorted.sortedinsert(30);
    sorted.sortedinsert(34);
    sorted.sortedinsert(50);
    sorted.sortedinsert(70);
    sorted.removeBack();

    cout << sorted.front()<<" Is the front of the stack"<< endl ;

    while(sorted.empty() == false)
        cout << sorted.removeFront() << " ";

    while(sorted.empty() == false)
        cout << String.removeFront() << " ";


    return 0;
}
