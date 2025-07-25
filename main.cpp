#include<iostream>
#include<string>
#include<string>
#include"Data.h"
#include"Read.h"
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv) {
    ReadFile();
    cout << Data::GetBLC() << endl;
    return 0;
}