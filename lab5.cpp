//including library
#include<iostream>
//using namespace std
using namespace std;

//function to swap  2 integers
void swap(int &a,int &b){
	                   int temp;
	                   temp = a;
	                   a = b;
	                   b = temp;
                        }
//this function puts the pivot where it's supposed to be and also places elements smaller than pivot to its left
//elements larger than it to its right
int partition(int arr[],int low,int high){
	                                    int pivot = arr[high];
	while(low<high){
		            while(arr[low]<pivot)
                    low++;
                    while(arr[high]>pivot)
                    high--;
                    swap(arr[low],arr[high]);
	                }
	return low;
}
//sorting the array
void quicksort(int arr[],int low,int high){
	                                      int p;
	                                     if(low<high){
		                                            p = partition(arr,low,high);
		                                            quicksort(arr,low,p-1);
		                                            quicksort(arr,p+1,high);
	                                                  }
                                           }
//including main function
int main(){
	//declaring variable
	int arr[30],size;
	//entering the size of array
	cout<<"Enter the size of the array: "<<endl;
	cin>>size;
	//entering elements of the array
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<size;i++)
		                  cin>>arr[i];
	//function call to sort the array
	quicksort(arr,0,size-1);
	//displaying the sorted array
	cout<<"QuickSorted array: "<<endl;
	for(int j=0;j<size;j++)
		                  cout<<arr[j]<<" ";
	cout<<endl;
	return 0;
}
