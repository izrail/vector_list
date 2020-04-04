#ifndef __LINKLIST__
#define __LINKLIST__
#include<vector>
#include<iostream>
using namespace std;
class LinkList{
    public:
        LinkList(){}
        LinkList(int num,...);
        int find(const int& num);
        void deleteByIndex(const int& index);
        void print();
        void insert(const int& index,const int& num);
        friend ostream& operator <<(ostream& out,const LinkList& linkList);


        int listLength()const{
            return node.size();
        }

    private:
       vector<int> node; 

};
#endif
