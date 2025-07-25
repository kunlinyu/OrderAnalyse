#include"Data.h"
#include<iostream>
using std::cout;
using std::endl;

const int HeadingKinds = 10;

int Data::BinLocCounter = 0;
string Data::BinLocKinds[100];

int Data::GetBLC(){
        return BinLocCounter;
    }

bool Data::AlreadyHave(string str) {
        bool flag=0;
        for(int i=BinLocCounter-1;i>=0;i--)
        {
            if(BinLocKinds[i].compare(str)==0)
        {
            flag=1;
            break;
        }
        }
        return flag;
    }

bool Data::Init(string str) {
    int pos1=0,pos2=0;
    string s;
    for(int i=0;i<HeadingKinds-1;i++)
    {
        pos2=str.find(",",pos2);
        s=str.substr(pos1,pos2-pos1);
        pos2=pos1=pos2+1;
        data.push_back(s);
    } //提取单个表头
    str.substr(pos2);
    data.push_back(s);
    Count(data[BinLocation]);
    return 1;
}

void Data::Count(string str) {
    if(AlreadyHave(str))
    return ;
    BinLocKinds[BinLocCounter]=str;
    BinLocCounter++;
}

// 1-SD241115-0073_1
// 1-SD
// C24111571491198
// ys-cuphunhemengzhongqinghe 35g*81
// 3.525
// 2024/11/15 15:24
// D11-15
// Total
// 1H09-17-1-2

// string BatchID,
// string OS1,
// string OrderID,
// string ItemCode,
// string ItemCount,
// string Weight,
// string ship_time,
// string Date,
// string Total,
// string BinLocation       