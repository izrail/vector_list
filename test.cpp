#include<iostream>
#include"linkList.hpp"

int main(){
    LinkList L(3,2,6,7);
    cout<<L<<endl;
    L.print();
    L.insert(0,3);
    L.insert(0,4);
    L.insert(0,5);
    std::cout<<L.find(3)<<std::endl;
    L.print();
    L.deleteByIndex(1);
    L.print();
    std::cout<<L.find(3)<<std::endl;
    return 0;
}