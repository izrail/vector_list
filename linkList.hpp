#ifndef __LINKLIST__
#define __LINKLIST__
#include<vector>
#include<iostream>
using namespace std;

template<typename T>
class LinkList{
    public:
        LinkList(){}
        LinkList(int num,...);
        T find(const T& num);
        void deleteByIndex(const int& index);
        void print();
        void insert(const int& index,const T& num);

        template<typename L>
        friend ostream& operator <<(ostream& out,const LinkList<L>& linkList);


        int listLength()const{
            return node.size();
        }

    private:
       vector<T> node; 

};
#endif
