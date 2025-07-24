#include<iostream>
#include<string>
#include"OrderAnalyse.h"
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv) {
    Data *dptr = ReadFile();
    cout << dptr->GetBLC() << endl;
    return 0;
}