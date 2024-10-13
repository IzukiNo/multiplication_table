#include <iostream>
using namespace std;

int main(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			cout<<j<<"x"<<i<<"="<<i*j;
			if(j==2&&i<=4){
				cout<<"   ";
			} else if(j==3&&i<=3){
				cout<<"   ";
			} else if(j==4&&i<=2){
				cout<<"   ";
			} else if(j>=5&&i==1){
				cout<<"   ";
			} else {
				cout<<"  ";
			}
		}
		cout<<endl;
	}
}
