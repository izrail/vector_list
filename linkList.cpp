#include"./linkList.hpp"
#include<iostream>
#include<cstdarg>
using namespace std;

LinkList::LinkList(int num,...){
    va_list valist;
    double sum=0.0;
    int i;
    va_start(valist,num);
    for(i=0;i<num;i++){
        node.push_back(va_arg(valist,int));
    }
    va_end(valist);
}
int LinkList::find(const int& num){
    for(vector<int>::size_type i=0;i!=node.size();i++){
        if(node[i]==num){
            return i;
        }
    }
        return -1;
}

std::ostream& operator<<(std::ostream& out,const LinkList& linkList){
    for(vector<int>::size_type i=0;i!=linkList.node.size();i++){
        if(i!=linkList.node.size()-1){
            out<<linkList.node[i]<<" ";
        }
        else{
            out<<linkList.node[i];
        }
    }
    out<<endl;
    return out;
}

void LinkList::deleteByIndex(const int& index){
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

void LinkList::print(){
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

void LinkList::insert(const int& index,const int& num){
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
