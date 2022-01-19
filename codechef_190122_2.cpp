//STARTER22C
#include<iostream>
using namespace std;
int main()
{
	int T,K;
	cin >> T;
	
	while(T--){
		cin >> K;//number of friends
		if(K>=2 && K<=52)
			cout << 52%K << endl;
	}
	
	return 0;
}
