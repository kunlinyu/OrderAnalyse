#include <iostream>
#include <string>
#include <fstream>
#include "Read.h"
#include "Read.h"

int main(int argc, char **argv) {
    std::string FileName;
    std::cout << "输入文件名 "<< std::endl;
    std::cin >> FileName;
    std::ifstream file(FileName);
    file =OpenFile("")
    Lines(file);
    cout << Data::GetBLC() << endl;
    return 0;
}