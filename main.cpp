#include <iostream>
using namespace std;

void sort(int arr[], int size){
	int tmp = 0;
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; ++j){
			if(arr[j] > arr[j + 1]){
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(){
	int arr[] = {1, 9, 12, 0, -1, 5115, 102};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr, size);
	return 0;
}
