// 2022/06/28 Tazoe

#include <iostream>
#include <algorithm>
using namespace std;

int c;

int binarysearch(int S[],int N,  int x) // x: キー S: 配列 N: データ数
{
	int B = 0; // 始点
	int T = N-1; // 終点
	while(B<=T){
		c++;
		int mid = (B+T)/2; // 中央
		if(S[mid]==x){ // 見つかったら
			return mid;
		}
		else if(S[mid]<x){ // 中央のデータより大きかったら
			B = mid+1;
		}	
		else{ // 中央のデータより小さかったら
			T = mid-1;
		}
	}
	return -1; // 見つからなかった
}


int main()
{
    c = 0;
	int n;
	cin >> n;
	int S[n];


	for(int i=0; i<n ; i++){
		cin >> S[i];
	}
	for(int i=0; i<n ; i++){
		cout <<  S[i];
	}
	std::sort(S, S+n);
	cout << endl;
	
	cout << binarysearch(S, n, 20293) << endl;
    cout << "count::"<<c<< endl;
    c = 0;
	cout << binarysearch(S, n, 7789) << endl;
    cout << "count::"<<c<< endl;
    c = 0;
	cout << binarysearch(S, n, 4021) << endl;
    cout << "count::"<<c << endl;
    c = 0;
	cout << binarysearch(S, n, 6586) << endl;
    cout << "count::"<<c << endl;
    c = 0;
	cout << binarysearch(S, n, 30000) <<  endl;
    cout << "count::"<<c << endl;
    cout << "end" <<endl;
	
	return 0;
}
