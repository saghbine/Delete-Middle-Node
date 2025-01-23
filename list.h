//
//  list.h
//  CTCI 2.3 Delete Middle Node
//
//  Created by daniel saghbine on 1/20/25.
//

#ifndef list_h
#define list_h

#include <iostream>
using namespace std;

template<class T>
class List;

template<class T>
class Node
{
    T data;
    Node<T>* next;
    
    Node(const T &e){data=e; next=NULL;}
    
    friend class List<T>;
    
public:
    const T &info(){return data;}
};

template<class T>
class List
{
    Node<T>* head;
    
    void pop();
    
public:
    List(){head=NULL;}
    Node<T>* push(const T &e){Node<T>* n=new Node<T>(e); n->next=head; head=n; return head;}
    void Delete_Middle_Node(Node<T>* d);
    
    void show() const
    {
        for(Node<T>* n=head; n != NULL; n=n->next)
            cout<<n->data<<(n->next != NULL ? "->" : "");
        
        if(head != NULL)
            cout<<endl;
    }
    
    ~List()
    {
        while(head != NULL)
            pop();
    }
};

template<class T>
void List<T>::Delete_Middle_Node(Node<T>* d) // d is node to delete in singly linked list
{
    if(head != NULL && d != NULL && d != head && d->next != NULL) // d can't be head or tail in singly linked list
    {
        Node<T>* p; // temporary node pointer p
        
        for(p=head; p != NULL && p->next != d; p=p->next); // check p at head...tail in singly linked list to stop at d if available
        
        if(p != NULL) // d was available
        {
            p->next=d->next; // fix link in singly linked list
            delete d; // delete d from singly linked list
        }
    }
}

template<class T>
void List<T>::pop()
{
    if(head != NULL)
    {
        Node<T>* n=head->next;
        
        delete head;
        head=n;
    }
}

#endif /* list_h */
