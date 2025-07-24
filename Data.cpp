#include<string>
using std::string;

class Data
{
    private:
    string BatchID;
    string OS1;
    string OrderID;
    string ItemCode;
    string ItemCount;
    string Weight;
    string ship_time;
    string Date;
    string Total;
    string BinLocation;
    static int BinLocCounter;//BinLocation种类计数器
    static string BinLocKinds[];//BinLocation种类存储器
    
    public:
    int GetBLC();//返回BinLocation种类数量
    bool AlreadyHave(string str);//是否已有该种类
    Data(string BatchID,string OS1,string OrderID,string ItemCode,string ItemCount,string Weight,string ship_time,string Date,string Total,string BinLocation);

};

int Data::BinLocCounter = 0; 

int Data::GetBLC(){
        return BinLocCounter;
    }
bool Data::AlreadyHave(string str){
        bool flag=0;
        for(int i=0;i<BinLocCounter;i++)
        {
            if(BinLocKinds[i]==str)
        {
            flag=1;
            break;
        }
        }
        return flag;
    }

Data::Data(    
    string BatchID,
    string OS1,
    string OrderID,
    string ItemCode,
    string ItemCount,
    string Weight,
    string ship_time,
    string Date,
    string Total,
    string BinLocation){
        this->BatchID=BatchID;
        this->OS1=OS1;
        this->OrderID=OrderID;
        this->ItemCode=ItemCode;
        this->ItemCount=ItemCount;
        this->Weight=Weight;
        this->ship_time=ship_time;
        this->Date=Date;
        this->Total=Total;
        this->BinLocation=BinLocation;
        if(AlreadyHave(BinLocation))//计数,待封装
        {
            BinLocKinds[BinLocCounter]=BinLocation;
            BinLocCounter++;
        }
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