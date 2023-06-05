#include <iostream>
using namespace std;
struct listnode{
int data;
listnode *next;
};
listnode *head=NULL;



void insertBeg(int x,listnode *newnode){
newnode = new listnode;
newnode->data =x;
newnode->next=NULL;
newnode->next=head;
head=newnode;}



void insertMid(int x,listnode *newnode, listnode *ptr, listnode *prev){
newnode = new listnode;
newnode->data =x;
newnode->next=NULL;
ptr=head;
while(ptr!=NULL && ptr->data<x){
prev=ptr;
ptr= ptr->next;}
prev->next = newnode;
newnode ->next=ptr;}



void insertEnd(int x,listnode *newnode, listnode *ptrw){
newnode = new listnode;
newnode->data =x;
newnode->next=NULL;
ptr=head;
while(ptr->next !=NULL)
ptr = ptr->next;
ptr->next = newnode;}



void deleteFirst(listnode *ptr){
ptr = head->next;
delete head;
head=ptr;}


void deleteInterior(int x, listnode *ptr, listnode *prev){
ptr=head;
while(ptr!=NULL && ptr->data!=x){
prev=ptr;
ptr=prev->next;}
prev->next = ptr->next;
delete ptr;}




int main()
{

}
