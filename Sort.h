#ifndef _SORT_H
#define _SORT_H

using namespace std;

class Sort 
{
	public:
		Sort();
		//bubble: A
		void BubbleSort(int arr[], int size);
		//insertion:B
		void InsertionSort(int arr[],int size);
		//selection: C
		void SelectionSort(int arr[],int size);
		//comb sort: D
		void CombSort(int arr[], int size);
		//Shakershort: H
		void ShakerSort(int arr[],int size);
		void sort(int a[], int lo0, int hi0);
		void bsort(int a[], int lo, int hi);
		//Shellsort: The Unidentifed Sorter
		void ShellSort(int arr[],int size);
		//mergesort :E
		void MergeSort(int arr[], int size, int lo0, int hi0);
		//quicksort: F
		void QuickSort(int arr[], int size);
		//GoofySort: J
		void GoofySort(int arr[], int size);
};

#endif // !_SORT_H

