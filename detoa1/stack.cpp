#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

class Stack{
private:
 int sp; // スタックポインタ 
 int S[100]; // スタックの配列
public:
 Stack() { sp = 0; } bool isFull() const { return (sp==100); }
	bool isEmpty() const { return (sp==0); }
	void push(int d);
	int top();
	void pop();
};
void Stack::push(int d)
{
	if(isFull()) return; // 満杯
 	S[sp++] = d; // スタックにデータを追加する
}
int Stack::top()
{
if(isEmpty()) return -1; // 異常終了（空）
 return S[sp-1]; // 頂上のデータ
}
void Stack::pop()
{
if(isEmpty()) return; // 空
 sp--; // スタックからデータを取り出す
}


int main()
{
	Stack D;
	string S;

	while (cin >> S)
	{
	    if (S == "+" || S == "-" || S == "*")
		{
			int B = D.top();
			D.pop();

			int A = D.top();
			D.pop();
			if (S == "+")
			{
				D.push(A + B);
			}
			if (S == "-")
			{
				D.push(A - B);
			}
			if (S == "*")
			{
				D.push(A * B);
			}
		}
		else
		{
			D.push(atoi(S.c_str()));
		}
	}

	cout << D.top() << endl;

	return 0;
}