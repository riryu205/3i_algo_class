// 2017/04/21 Tazoe

#include <iostream>
using namespace std;

int count;

int LinearSearch(int x, int S[], int N)
{
	for(int i=0; i<N; i++){
		count++;
		if(S[i]==x)
			return i;
	}

	return -1;
}

int main()
{
	count = 0;
	int n;
	cin >> n;
	int S[n];

	for(int i=0; i<n ; i++){
		cin >> S[i];
	}

	cout << '\n';
		cout << LinearSearch( 20293, S, n) << '\n';
		cout <<count << endl;
		count = 0;
		cout << LinearSearch(7789,S, n) << endl;
		cout << count << endl;
		count = 0;
		cout << LinearSearch(4021,S,n) << endl;
		cout << count << endl;
		count = 0;
		cout << LinearSearch(6586, S, n) << endl;
		cout << count << endl;
		count = 0;
		cout << LinearSearch(30000, S, n) <<endl;
		cout << count << endl;
		cout << "end" <<endl;
	return 0;
}