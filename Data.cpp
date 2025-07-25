int Data::BinLocCounter = 0;
string Data::BinLocKinds[5000];

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
    s=str.substr(pos2);
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
