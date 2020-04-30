#include<iostream>

#include "linked_list.h"

int main(int argc, char const *argv[]) /* Test */
{

    using namespace std;

    LinkedList<int> a;

    a.add(3);
    a.add(4);
    a.add(2);
    a.add(6);
    a.print();
    cout<<a.size()<<endl;
    cout<<a.contains(4)<<endl;
    cout<<a.contains(10)<<endl;
    cout<<a.get(1)<<endl;
    cout<<a.get(0)<<endl;
    // cout<<a.get(4)<<endl;
    cout<<"hello"<<endl;
    a.remove(2);
    a.print();

    cout<<"Using iterator for transverse Linked List"<<endl;
    for (int i : a) {
        cout<<i<<" - ";
    }


    // int a[] = {1};
    // cout<<a[2];


    // a.clear();
    // cout<<a.size()<<endl;
    // cout<<a.contains(4)<<endl;
    // cout<<a.contains(10)<<endl;
    // a.add(6);
    // a.print();


    return 0;
}
/*
g++ -o2 -Wall test.cpp -o test -I.\include -L.\lib -llinkedlist -literator 
*/
