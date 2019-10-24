#include <iostream>
#include"LinkedList.hpp"


ListNode::ListNode(int d,ListNode* nxt) {
    data = d;
    next = nxt;
    }

ListNode::~ListNode(){
    if (next != NULL) delete next;
    }

LinkedList::LinkedList(){
    first = NULL;
    last = NULL;
    }

LinkedList::~LinkedList(){
    if (first != NULL) delete first;
    }

void LinkedList::display(){
    ListNode *temp = first;
    if (temp == NULL){
        std::cout << "--" ;
        return;
    }

    while (temp->next != NULL){
            std::cout<<temp->data<< " ";
            temp = temp->next;
    }
    std::cout << temp -> data << std::endl;
    }

void LinkedList::append (int d){

    if (last == NULL){

        first = new ListNode(d);
        last = first;
    }

    else{
        last->next = new ListNode(d);
        last = last->next;

    }
    }

void LinkedList::prepend(int d){
    first = new ListNode(d,first);
    if (last = NULL) last = first;
    }

LinkedList* LinkedList::filterSmaller(int treshold){
    LinkedList* L = new LinkedList;
    for (ListNode *cur = first;cur != NULL;cur = cur->next)
        if (cur->data <= treshold)
            L ->append(cur->data);
    return L;
    }
