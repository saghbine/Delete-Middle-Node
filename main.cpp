//
//  main.cpp
//  CTCI 2.3 Delete Middle Node
//
//  Created by daniel saghbine on 1/20/25.
//

#include "list.h"

Node<int>* initializer(List<int> &l);

int main()
{
    cout<<"problem\n-------\n\tImplement an algorithm to delete a node in the middle (i.e., any node but the first and last node, not necessarily the exact middle) of a singly linked list, given only access to that node.\n\n";
    
    cout<<"input\n-----\n\t";
    List<int> l;
    srand(int(time(0)));
    Node<int>* np=initializer(l);
    int temp;
    l.show();
    cout<<"\n\tDelete middle node "<<(temp=np->info())<<"!\n\n";
    
    l.Delete_Middle_Node(np);
    
    cout<<"output\n------\n\tDeleted middle node "<<temp<<".\n\t";
    l.show();
    
    cout<<"\n\nsolution\n--------\n\tAuxiliary space complexity: O(1); time complexity: O(n).\n\n";
    
    return 0;
}

Node<int>* initializer(List<int> &l)
{
    int mid=rand()%8+2;
    Node<int>* np=NULL;
    
    for(int i=1; i <= 10; i++)
        i == mid ? np=l.npull(rand()%20+1) : l.npull(rand()%20+1);
    
    return np;
}
