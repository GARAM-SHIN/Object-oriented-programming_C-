#include <iostream>
using namespace std;

#include "Ram.h"

Ram::Ram(){
    size=MEM_SIZE;
    for(int i=0;i<size;++i)
    {
        mem[i]=0;
    }
}

Ram::~Ram(){
    cout<<"메모리에서 제거됨"<<endl;
}

char Ram::read(int addr)
{
    if(!isVaildAddr(addr))
    {
        cout<<"주소 범위를 벗어남"<<endl;
        return -1;
    }
    return mem[addr];
}

void Ram::write(int addr, char value)
{
    if(!isVaildAddr(addr))
    {
        cout<<"주소 범위를 벗어남"<<endl;
        return;
    }
    mem[addr]= value;
}

bool Ram::isVaildAddr(int addr)
{
    return (addr>=0 && addr<MEM_SIZE);
}