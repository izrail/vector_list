#ifndef __LINKLIST__
#define __LINKLIST__
#include<vector>
using namespace std;
class LinkList{
    public:
        LinkList(){}
        LinkList(int num,...);
        int find(const int& num);
        void deleteByIndex(const int& index);
        void print();
        void insert(const int& index,const int& num);
        int listLength()const{
            return node.size();
        }

    private:
       vector<int> node; 

};
#endif
