#pragma once
#include <string>
#include <vector>
#include <map>
#include "Read.h"

class Data {
    std::string Header;
    std::vector<std::map<std::string>> Rows;
    std::map<std::string> Cells;

    public:
    virtual CategoryCounter(std::string header)=0;
    std::string Search(int rows , std:string header);
    bool Init(CVSReader &reader);
    bool SetRow();
};
//done