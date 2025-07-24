#include<iostream>
#include<string>
#include <fstream>
#include"OrderAnalyse.h"
using std::cout;
using std::endl;
using std::string;




Data* ReadFile()
{
    Data *dptr = new data[41155]//行数，待改为变量
    std::ifstream file("仿真订单-a0-1109-1115s.csv.txt");
    if (!file.is_open()) {
        cout << "未检测到文件" << endl;
        return NULL;
    }
    string str;
    std::getline(file, str);
    for(int i=0;i<41155;i++)
    data[i](ReadOne(),
            ReadOne(),  
            ReadOne(), 
            ReadOne(), 
            ReadOne(), 
            ReadOne(), 
            ReadOne(), 
            ReadOne(), 
            ReadOne(), 
            ReadOne())
    return dptr;
    
}