#include<iostream>
#include "pnc_map.h"
using std::cout, std::endl;

void mapTest(){
    PNC_Map my_map;
    my_map.mapInfo(); 
    cout<<"this is map test"<<endl;
}
int main(){
    mapTest();
    return 0;
}