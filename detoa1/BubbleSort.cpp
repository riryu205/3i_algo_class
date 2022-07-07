#include <iostream>
using namespace std;

int count,count2;

void BubbleSort(int S[], int N)
{
	bool flg;

	do{
		flg = false;

		for(int i=0; i<N-1; i++){
			count++;
			if(S[i]>S[i+1]){
				count2++;
				int tmp = S[i];
				S[i] = S[i+1];
				S[i+1] = tmp;

				flg = true;
			}
		}
	}while(flg);
}

int main()
{
	int n;
	cin >> n;
	int S[n];
	
	count = 0;
	count2 = 0;
	for(int i=1;i<12;i++){
		cin >> S[i];
	}

	for(int i=0; i<10; i++){
		cout << S[i] << ' ';
	}
	cout << '\n';

	BubbleSort(S, 10);

	for(int i=0; i<10; i++){
		cout << S[i] << ' ';
	}
	cout << '\n';

	cout << count+count2 << endl;
	return 0;
}