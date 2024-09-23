#include <iostream>

using namespace std;

void sortowanie_babelkowe(int tab[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(tab[j]>tab[j+1]){
				swap(tab[j], tab[j+1]);
			}
		}
	}
}

int main(){
	int tab[] = {3,2,5,4};
	

	sortowanie_babelkowe(tab, 4);

	cout << "Posorotwane liczby: ";
	for(int i=0; i<4; i++){
		cout << tab[i] << " ";
	}
	cout<<endl;

	return 0;
}
