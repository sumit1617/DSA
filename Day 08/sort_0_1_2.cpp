#include<iostream>
using namespace std;

void printArray(int arr[], int n){
	for(int i = 0; i<n; i++){
		cout<<arr[i]<< " ";
	}

	cout<<endl;
}

void sortOne(int arr[], int n){
	int start = 0;
    int mid = 1;
	int last = n-1;

	while(start<last){

		while(arr[start] == 0 && start<mid<last){
			start++;
		}

        while(arr[mid]==1 && start<mid<last){
            mid++;
        }

		while(arr[last]==2 && start<mid<last){
			last--;
		}

		if(start<mid<last){
			swap(arr[start], arr[last]);
			start++;
            mid++;
			last--;
		}
	}
}


int main() {

	int arr[6] = {0,1,2,0,1,2};

	sortOne(arr, 6);
	printArray(arr, 6);
	
}