#include <iostream>
#include "linked.h"
using namespace std;
int main(){
    List l1;
    l1.addToHead(1);
    l1.addToHead(2);
    l1.addToHead(4);
    l1.addToHead(4);
    l1.traverse();
    Node* outputptr=new Node();
    l1.retrieve(2,outputptr);
    cout<<outputptr->info;
    l1.add
}
