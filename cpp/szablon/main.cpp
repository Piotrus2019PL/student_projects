#include <iostream>

using namespace std;

int main(){
	char pl[3][3];
	for(int i = 0; i<3; i++){
		for(int j=0; j<3; j++){
		pl[i][j]='-';
		}
	}

	int stX;
	int stY;
	cin>>stX;
	cin>>stY;

	while(0==0){
		for(int i = 0; i<3; i++){
			for(int j = 0; j<3; j++){
			cout<<pl[i][j]<<" ";
			}
		cout<<endl;
		}
	int x,y;
	cout<<"Gdzie strzelasz (x y): ";
	cin>>x>>y;
	if (x == stX && y == stY){
		cout<<"Trafiony zatopiony!"<<endl;
		break;
	}else{
		cout<<"Pudło!"<<endl;
		pl[x][y] = '1';
		}
	}
	
	return 0;
}
	
