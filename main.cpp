#include <iostream>
#include <string>
#include <fstream>
#include "Read.h"
#include "Data.h"

int main(int argc, char **argv) {
    std::string FileName;
    std::cout << "输入文件名 "<< std::endl;
    std::cin >> FileName;
    Calculator data;
    CSVReader reader;
    reader::OpenFile(std::string FileName);
    data::Init(reader);
    reader::Read(data);
    delete reader;
    std::cout << "输入要计算种类的表头" << std::endl;
    std::string header;
    std::cin >> header;
    cout << data::CategoryCounter(header);
    return 0;
}
//done