#include <iostream>
#include <string>
#include <list>
using namespace std;

const int M = 100000;

class Hash{
    private:
        list<string> a[M];//配列a大きさM
    public:
        int getc(char ch);//文字列を数字に変換
        long long getk(string str);//keyの取得
        int h(string x);//計算
        void insereth(string x);//挿入
        bool memberh(string x);//正誤判定
};

int Hash::getc(char ch){
    if(ch=='A')
        return 1;
    else if(ch=='C')
        return 2;
    else if(ch=='G')
        return 3;
    else if(ch=='T')
        return 4;
}

long long Hash::getk(string str){
    long long sum = 0;
    long long p = 1;

    for (int i=0;i<str.size(); i++){
        sum += p*(getc(str[i]));
        p *= 5;
    }
    return sum;
}

int Hash::h(string x){
    return (int)getk(x)%M;
}

void Hash::insereth(string x){
    a[h(x)].push_front(x);
}

bool Hash::memberh(string x){
    list<string>::iterator it;
    for(it=a[h(x)].begin(); it!=a[h(x)].end(); it++){
        if(*it == x){
            return true;
        }
        return false;
    }
}


int main()
{
	Hash H;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string c,str;
        cin >> c >> str;

        if(c=="insert"){
            H.insereth(str);
        }
        else{
            if(H.memberh(str)){
                cout << "yes" << endl;
            }
            else{
                cout << "no" << endl;
            }
        }
    }
	return 0;
}
