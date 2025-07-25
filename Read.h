#pragma once
#include<string>

class CSVReader {
    std::ifstream file;
    std::vector<std::string> Headers;
    int Rows;

    std::ifstream OpenFile(std::string FileName)；
    bool ScanHeaders();
    bool ScanRows();
    int GetRows();
    std::ifstream GetFile();
    std::vector<std::string> GetHeader()；
    Read(std::ifstream file , Data &data);

};

//一文件一对象，处理所有文件读取工作，读完传给data后析构