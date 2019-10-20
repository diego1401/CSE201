#include <iostream>
#include "LinkedList.hpp"

ListNode::ListNode(int d,ListNode* nxt) {
    data = d;
    next = nxt;
    }

ListNode::~ListNode(){}

LinkedList::LinkedList(){
    first = NULL;
    last = NULL;
    }

LinkedList::~LinkedList(){
    while ((*first).next != NULL){
            ListNode temp = *(first->next);
            delete first;
            first = &temp;
    }}

void LinkedList::display(){
    ListNode temp = *first;
    while (temp.next != NULL){
            std::cout<<temp.data<< " ";
            temp = *(temp.next);
    }
    }

void LinkedList::append (int d){
    (*last).next = new ListNode(d,NULL);
    }

void LinkedList::prepend(int d){
    (*first).next = new ListNode(d,first);
    }

LinkedList* LinkedList::filterSmaller(int treshold){
    LinkedList* L;
    L = new LinkedList();
    ListNode temp = *first;
    while (temp.next != NULL){
        int d = (*(temp.next)).data;
        if ( d <= treshold){(*L).append(d);}
        temp = *(temp.next);}
    return L;
    }
