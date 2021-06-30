
#include <iostream>
using namespace std;

//Prototypes of Functions
int mergeSort(int arr[], int array_size, int left, int right);
int merge(int arr[], int temp[], int left, int mid,int right);


int mergeSort(int arr[], int array_size,int left ,int right)
{
	int temp[array_size];
	int mid, inversioncCounter = 0;
	if (right > left) {
		//Divide the array into 2 parts
		mid = (right + left) / 2;

		//Summing the numer of inversions seprately in the left part and in the right part
		inversioncCounter += mergeSort(arr, array_size, left, mid);
		inversioncCounter += mergeSort(arr, array_size, mid + 1, right);

		//merging two parts
		inversioncCounter += merge(arr, temp, left, mid + 1, right);
	}
	// return The number of inversions
	return inversioncCounter;
}


int merge(int arr[], int temp[], int left, int mid, int right)
{
//Note: we can ignore copying back the original array and only get the numer of inversions
	int i, j, o;
	int inversioncCounter = 0;

	i = left; //i is index for left part
	j = mid; // j is index for right spart
	o = left; //o is index for output merged array
	while ((i <= mid - 1) && (j <= right)) {
		if (arr[i] <= arr[j]) {
			temp[o++] = arr[i++];
		}
		else {
			temp[o++] = arr[j++];
			inversioncCounter = inversioncCounter + (mid - i);
		}
	}

	//Copy the remaining elements of left subarray to temp
	while (i <= mid - 1)
		temp[o++] = arr[i++];

	//Copy the remaining elements of right subarray to temp
	while (j <= right)
		temp[o++] = arr[j++];

	//Copy result in original array
	for (i = left; i <= right; i++)
		arr[i] = temp[i];

	return inversioncCounter;
}

int main()
{
    int arraySize=0;
    int arr[arraySize]={0};
    // Get inputs from User
    cout << "Please enter the size of the array you'll enter( n must be 1<n<10^5)" << endl;
    cin >> arraySize;
    cout << "Now please enter the elements of the array a0 a1 ..an( ai must be 1<ai<10^9)" << endl;
    //Initialize the array
    for(int i =0 ; i < arraySize; i++){
        cin >> arr[i];
    }
	int ans = mergeSort(arr, arraySize ,0 ,arraySize-1);
	cout << "Number of inversions are = " << ans;
	return 0;
}
