#ifndef LINKED_H
#define LINKED_H
#include<iostream>
class Node{
    public:
        int info;
        Node *next;
};
class List{
    private:
        Node *HEAD;
        Node *TAIL;
    public:
        List();
        ~List();
        bool isEmpty();
        void addToHead(int data);
        void add(int data, Node *predecessor);
        void addToTail(int data);
        void Remove(int data);
        bool search(int data);
        void traverse();
        bool retrieve(int data, Node *outputptr);
        void removeFromHead();
};
#endif
