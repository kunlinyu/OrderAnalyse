#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include "Data.h"
#include "Read.h"

// CSVReader
// std::ifstream file;
// std::ifstream OpenFile(std::string FileName)；

bool OpenFile(std::string FileName) {
    file.open(FileName);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << FileName << std::endl;
        return false;
    }
    return true;
}

std::vector<std::string> CSVReader::ScanHeaders() {
    file.seekg(0 , std::ios::beg);
    std::string str;
    std::getline(file , str);
    return SplitRow(str);
}

std::vector<std::string> CSVReader::SplitRow(std::string str) {
    int pos1=0;
    int pos2=0;
    std::string s;
    std::vector<std::string> Headers;
    while(std::string::npos != pos2) {
        pos1=pos2+1;
        pos2=str.find(",",pos2+1);
        s=str.substr(pos1,pos2-pos1);
        Headers.emplace_back(s);
    }
    return Headers;
}

int CSVReader::ScanRows(){
    std::string str;
    file.seekg(0, std::ios::beg);
    std::getline(file,str);
    int i=0;
    while(std::getline(file,str) != false)
        i++;
    return i;
}

void CSVReader::Read(Data &data) {
    std::string str;
    file.seekg(0, std::ios::beg);
    std::getline(file,str);
    while(std::getline(file,str) != false)
    {
        std::SetRow()
    }
}
