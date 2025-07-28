#pragma once
#include<string>
#include<vector>
#include <fstream>
#include "Data.h"

class CSVReader {
    std::ifstream file;

    public:
    bool OpenFile(std::string FileName);
    std::vector<std::string> ScanHeaders();
    std::vector<std::string> SplitRow(std::string str);
    int ScanRows();
    void Read(Data &data);
};
//done

//一文件一对象，处理所有文件读取工作，读完传给data后析构