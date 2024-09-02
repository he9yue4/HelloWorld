#include <iostream>
using namespace std;

void sort(int arr[], int i, int j){
	int val = arr[i];
	int left = i;
	int right = j;
	while(left < right){
		while(left < right && arr[right] >= val){
			right--;
		}
		if(left < right){
			arr[left] = arr[right];
			left++;
		}
		while(left < right && arr[left] <= val){
			left++;
		}
		if(left < right){
			arr[right] = arr[left];
			right--;
		}
	}
	arr[left] = val;
	sort(arr, i, left - 1);
	sort(arr, left + 1, j);
}

void sort(int arr[], int size){
	sort(arr, 0, size);
}

int main(){
	int arr[] = {1, 9, 12, 0, -1, 5115, 102};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr, size);
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
