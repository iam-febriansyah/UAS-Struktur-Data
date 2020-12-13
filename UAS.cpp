#include <iostream>
using namespace std;

int main(){
	int countList;
	int x[100];
	cout<<"Please Insert Count of Array :";
	cin>>countList;
	for(int m=0;m<countList;m++){
		cout<<"Array No "<<m<<" :";
		cin>>x[m];
	}

	cout<<"Origin array :"<<endl;
	int y=countList-2;
	int param;
	for(int m=0;m<countList;m++){
		cout<<x[m]<<" ";
	}


	//cout<<endl<<endl<<"On Processing Data Sorting"<<endl;
	while(y >= 0){
		int index = 0;
		while(index <= y){
			if(x[index] > x[index+1]){
				param = x[index];
				x[index] = x[index+1];
				x[index+1] = param;

			}
			index++;
		}
		for(int m=0;m<countList;m++){
		//cout<<x[m]<<" ";
	}
	cout<<endl;
		y--;
	}
	//processing end

	cout<<"Result Bubble Sort:"<<endl;

	for(int m=0;m<countList;m++){
		cout<<x[m]<<" ";
	}
}
