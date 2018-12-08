#include <iostream>
int main(){
	using namespace std;
	
	int miao;
	cin >> miao;
	int shi,fen;
	shi = miao / 3600;
	fen = miao % 3600 / 60;
	miao = miao % 60;
	cout << shi << "hours"
	     << fen << "minutes"
	     << miao << "seconds"
	     << endl; 
}
