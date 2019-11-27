#include <iostream>
#include "linked.h"
using namespace std;
 List::List(){
     HEAD = NULL;
     TAIL = NULL;
 }
 List::~List(){}
 
 bool List::isEmpty(){
     return (HEAD == NULL);
 }
 
 void List::addToHead(int data){
     Node* new_Node=new Node();
     new_Node->info=data;
     new_Node->next=HEAD;
     HEAD=new_Node;
     if(TAIL==NULL){
         TAIL=HEAD;
     }
 }
 void List::addToTail(int data){
     Node* new_Node=new Node();
     new_Node->info=data;
     new_Node->next=NULL;
     TAIL->next=new_Node;
     TAIL=new_Node;
 }
 void List::add(int data,Node* predecessor){
     Node* new_Node=new Node();
     new_Node->info=data;
     new_Node->next=predecessor->next;
     predecessor->next=new_Node;
 }
 void List::Remove(int data){
     if(isEmpty()){
         std::cout<<"the list is Empty"<<endl;
     }
     if(HEAD->info=data){
         removeFromHead();
        if(HEAD==NULL){
            TAIL==NULL;
     }
     else{
         Node* temp=new Node();
         Node* prev=new Node();
         temp=HEAD->next;
         while(temp!=NULL){
             if(temp->info==data){
                prev->next=temp->next;
                delete (temp);
                if(prev->next==NULL){
                    TAIL=prev;
                }
             }
             else{
                 prev=prev->next;
                 temp=temp->next;
             }
         }
     }
 }
 }
 
 bool List::search(int data){
     Node* temp=new Node();
     temp=HEAD;
     while(temp!=NULL){
         if(temp->info==data){
             return true;
         }
         else{
             temp=temp->next;
         }
     }
     return false;
 }
 
 void List::traverse(){
     Node* temp=new Node();
     temp=HEAD;
     while(temp!=NULL){
         cout<<temp->info<<endl;
         temp=temp->next;
     }
 }
 bool List::retrieve(int data,Node* outputptr){
     Node* p=new Node();
     p=HEAD;
     while(p!=NULL && p->info!=data){
         p=p->next;
     }
     if(p==NULL){
         return false;
     }
     else{
         *outputptr=*p;
         return true;
     }
 }
 void List::removeFromHead(){
     Node* ntd=new Node();
     ntd=HEAD;
     HEAD=ntd->next;
     delete (ntd);
 }
