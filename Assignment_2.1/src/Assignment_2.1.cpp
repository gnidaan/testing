//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int count=0,flag,j;
	int arr[11]={ 1, 2, 3, -1, 2, 1, 0, 4, -1, 7, 8};
	for (int i = 0; i < 11; ++i) {
		flag=0;
		for (j = 0; j < 11; ++j) {
			if(i!=j && arr[i]==arr[j]){
				flag=0;break;}
			else
				flag=1;

		}
		if(flag==1)
			cout<<arr[i]<<endl;

	}

	cout<<count;

	return 0;
}
