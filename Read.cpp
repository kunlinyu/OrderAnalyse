#include<iostream>
#include<string>
#include <fstream>
#include"Data.h"
using std::cout;
using std::endl;
using std::string;




Data* ReadFile() {
    Data *dptr = new Data[40000];//行数，待改为变量
    std::ifstream file("data.csv");
    if (!file.is_open()) {
        cout << "Error" << endl;
        return NULL;
    }
    string str;
    std::getline(file, str);
    for(int i=0;i<40000;i++)
    {
        std::getline(file, str);
        dptr[i].Init(str);
        
    }

    return dptr;
    
}