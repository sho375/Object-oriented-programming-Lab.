#include<iostream>
using namespace std;
int main(){
	for(int i=1; i<=20; i++){
		for(int j=20; j>=i; j--){
			cout << " ";
		}
		for(int k=1; k<2*i; k++){
			cout << "*";
		}
		for(int l=20; l>=i; l--){
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}