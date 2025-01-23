//
//  main.cpp
//  CTCI 2.3 Delete Middle Node
//
//  Created by daniel saghbine on 1/20/25.
//

#include "list.h"

int main()
{
    cout<<"problem\n-------\n\tImplement an algorithm to delete a node in the middle (i.e., any node but the first and last node, not necessarily the exact middle) of a singly linked list, given only access to that node.\n\n";
    
    cout<<"input\n-----\n\t";
    List<int> l;
    Node<int>* n=NULL;
    srand(int(time(0)));
    int mid=rand()%8+2;
    int temp;
    
    for(int i=1; i <= 10; i++)
        i == mid ? n=l.push(rand()%20+1) : l.push(rand()%20+1);
    
    l.show();
    cout<<"\tDelete middle node "<<(temp=n->info())<<"!\n\n";
    
    l.Delete_Middle_Node(n);
    
    cout<<"output\n------\n\tDeleted middle node "<<temp<<".\n\t";
    l.show();
    
    cout<<"\nsolution\n--------\n\tAuxiliary space complexity: O(1); time complexity: O(n).\n\n";
    
    return 0;
}
