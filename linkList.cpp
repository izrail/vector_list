#include"./linkList.hpp"
#include<iostream>
#include<cstdarg>
using namespace std;

template<typename T>
LinkList<T>::LinkList(int num,...){
    va_list valist;
    double sum=0.0;
    int i;
    va_start(valist,num);
    for(i=0;i<num;i++){
        node.push_back(va_arg(valist,int));
    }
    va_end(valist);
}

template<typename T>
T LinkList<T>::find(const T& num){
    for(vector<int>::size_type i=0;i!=node.size();i++){
        if(node[i]==num){
            return i;
        }
    }
        return -1;
}

template<typename L>
std::ostream& operator<<(std::ostream& out,const LinkList<L>& linkList){
    for(vector<int>::size_type i=0;i!=linkList.node.size();i++){
        if(i!=linkList.node.size()-1){
            out<<linkList.node[i]<<" ";
        }
        else{
            out<<linkList.node[i];
        }
    }
    return out;
}

template<typename T>
void LinkList<T>::deleteByIndex(const int& index){
    if(index<0||index>listLength()){
        cout<<"wrong index"<<endl;
    }
    else{
        for(vector<int>::size_type i=0;i!=node.size();i++){
            if(i==index){
                node.erase(node.begin()+i);
                break;
            }
        }   
    }
}

template<typename T>
void LinkList<T>::print(){
    for(vector<int>::size_type i=0;i!=node.size();i++){
        if(i!=node.size()-1){
            cout<<node[i]<<" ";
        }
        else{
            cout<<node[i];
        }
    } 
    cout<<endl;
}

template<typename T>
void LinkList<T>::insert(const int& index,const T& num){
    if(index<0||index>listLength()){
        std::cout<<"wrong index"<<std::endl;
    }
    /*if(node.size()==0&&(index<0||index>node.size())){
        cout<<"wrong index"<<endl;
    }*/
    else{
        node.insert(node.begin()+index,num);
    }
}
