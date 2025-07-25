#pragma once
#include<string>
#include<vector>
using std::string;
using std::vector;

enum ColumnHeading {
    BatchID,
    OS1,
    OrderID,
    ItemCode,
    ItemCount,
    Weight,
    ship_time,
    Date,
    Total,
    BinLocation
};//表头枚举



class Data {
    private:
    vector<string> data;
    static int BinLocCounter;//BinLocation种类计数器
    static string BinLocKinds[];//BinLocation种类存储器
    
    public:
    static int GetBLC();//返回BinLocation种类数量
    bool AlreadyHave(string str);//是否已有该种类
    bool Init(string str);
    void Count(string str);
};
