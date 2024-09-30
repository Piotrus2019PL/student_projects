#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector<int> numbers;
	numbers.push_back(4);
	numbers.push_back(5);
	numbers.push_back(2);
	numbers.push_back(3);
	

	for(int x=0;x<numbers.size(); x++){
		for(int y=0;y<numbers.size(); y++){
		swap(numbers[x], numbers[y]);
	}

}
for(int v=0; v<numbers.size(); v++){
	cout<<numbers[v]<<'\n';
}

	return 0;
}
