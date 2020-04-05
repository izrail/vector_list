#include<iostream>
#include"linkList.hpp"
#include"linkList.cpp"
int main(){
    LinkList <int>L (3,2,6,7);
    //LinkList <int> L;
    cout<<L<<endl;
    L.insert(0,3);
    L.insert(0,4);
    L.insert(0,5);
    std::cout<<L.find(3)<<std::endl;
    cout<<L<<endl;

    L.deleteByIndex(1);
    std::cout<<L.find(3)<<std::endl;
    return 0;
}