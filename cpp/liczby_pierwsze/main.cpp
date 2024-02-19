#include <iostream>

using namespace std;

int main(){
int n;
cout<<"Podaj zakres liczb:  ";
cin>>n;
for(int i=2; i<= n; ++i){
    bool czy_pierwsza = true;
	for (int j = 2; j * j <= i; ++j){
		if(i%j==0){
			czy_pierwsza = false;
			break;}
		}
	if (czy_pierwsza){
	cout<<i<<" ";
	}
}
cout<<endl;
	return 0;
}
