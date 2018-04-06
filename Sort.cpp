#include "Sort.h"
#include <iostream>
using namespace std;

Sort::Sort() 
{}

void Sort::BubbleSort(int arr[], int size) 
{
	for (int i = 0; i < size;++i ) {
		for (int j = 0; j<i; j++) {
			if (arr[j] > arr[j + 1]) {
				int T = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = T;
			}
		}
	}
}

void Sort::InsertionSort(int arr[],int size) 
{
	for (int i = 1; i < size;++i) 
	{
		int j = i;
		int B = arr[i];
		while ((j > 0) && (arr[j - 1] > B)) 
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = B;
	}
}

void Sort::SelectionSort(int arr[], int size) 
{
	for (int i = 0; i <size; ++i)
	{
		int min = i;
		int j;
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		int T = arr[min];
		arr[min] = arr[i];
		arr[i] = T;
	}
}

void Sort::CombSort(int arr[], int size) 
{
	   float SHRINKFACTOR = (float)1.3;
		bool flipped = false;
		int gap, top;
		int i, j;
		gap = size;
		do {
			gap = (int)((float)gap / SHRINKFACTOR);
			switch (gap) {
			case 0:
				gap = 1;
				break;
			case 9:
			case 10:
				gap = 11;
				break;
			default: break;
			}
			flipped = false;
			top = size - gap;
			for (i = 0; i < top; i++) {
				j = i + gap;
				if (arr[i] > arr[j]) {
					int T = arr[i];
					arr[i] = arr[j];
					arr[j] = T;
				}
			}
		} while (flipped || (gap > 1));
	}

void Sort::ShakerSort(int arr[], int size) 
{
	int i = 0;
	int k = size - 1;
	while (i < k)
	{
		int min = i;
		int max = i;
		int j;
		for (j = i + 1; j <= k; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
			if (arr[j] > arr[max]) 
			{
				max = j;
			}
		}
		int T = arr[min];
		arr[min] = arr[i];
		arr[i] = T;
		if (max == i)
		{
			T = arr[min];
			arr[min] = arr[k];
			arr[k] = T;
		}
		else
		{
			T = arr[max];
			arr[max] = arr[k];
			arr[k] = T;
		}
		i++;
		k--;
	}
}

void Sort::ShellSort(int arr[], int size) 
{
	int h = 1;
	while ((h * 3 + 1) < size) {
		h = 3 * h + 1;
	}

	while (h > 0) {
	
		for (int i = h - 1; i < size; i++) {
			
			int B = arr[i];
			int j = i;
			for (j = i; (j >= h) && (arr[j - h] > B); j -= h) {
				
				arr[j] = arr[j - h];
			}
			arr[j] = B;
		}
		h = h / 3;
	}

}

void Sort::bsort(int a[], int lo, int hi)
{
	for (int j = hi; j > lo; j--)
	{
		for (int i = lo; i < j; i++)
		{
			if (a[i] > a[i + 1]) 
			{
				int T = a[i];
				a[i] = a[i + 1];
				a[i + 1] = T;
			}
		}
	}
}

void Sort::sort(int a[], int lo0, int hi0) 
{
	int lo = lo0;
	int hi = hi0;

	/*
	*  Bubble sort if the number of elements is less than 6
	*/
	if ((hi - lo) <= 6) {
		return;
	}

	/*
	*  Pick a pivot and move it out of the way
	*/
	int pivot = a[(lo + hi) / 2];
	a[(lo + hi) / 2] = a[hi];
	a[hi] = pivot;

	while (lo < hi) {
		/*
		*  Search forward from a[lo] until an element is found that
		*  is greater than the pivot or lo >= hi
		*/
		while (a[lo] <= pivot && lo < hi) {
			lo++;
		}

		/*
		*  Search backward from a[hi] until element is found that
		*  is less than the pivot, or hi <= lo
		*/
		while (pivot <= a[hi] && lo < hi) {
			hi--;
		}

		/*
		*  Swap elements a[lo] and a[hi]
		*/
		if (lo < hi) {
			int T = a[lo];
			a[lo] = a[hi];
			a[hi] = T;
			
		}
	}

	/*
	*  Put the median in the "center" of the list
	*/
	a[hi0] = a[hi];
	a[hi] = pivot;

	/*
	*  Recursive calls, elements a[lo0] to a[lo-1] are less than or
	*  equal to pivot, elements a[hi+1] to a[hi0] are greater than
	*  pivot.
	*/
	sort(a, lo0, lo - 1);
	sort(a, hi + 1, hi0);
}

void Sort::MergeSort(int arr[], int size, int lo0, int hi0)
{
	int lo = lo0;
	int hi = hi0;
	if (lo >= hi) {
		return;
	}
	int mid = (lo + hi) / 2;

	sort(arr, lo, mid);
	sort(arr, mid + 1, hi);

	int end_lo = mid;
	int start_hi = mid + 1;
	while ((lo <= end_lo) && (start_hi <= hi)) {
		if (arr[lo] < arr[start_hi]) {
			lo++;
		}
		else {
		
			int T = arr[start_hi];
			for (int k = start_hi - 1; k >= lo; k--) {
				arr[k + 1] = arr[k];
			}
			arr[lo] = T;
			lo++;
			end_lo++;
			start_hi++;
		}
	}
}

void Sort::QuickSort(int arr[], int size)
{
	int lo = 0;
	int hi = 0;
	if (lo >= hi) {
		return;
	}
	else if (lo == hi - 1) {
		if (arr[lo] > arr[hi]) {
			int T = arr[lo];
			arr[lo] = arr[hi];
			arr[hi] = T;
		}
		return;
	}
	int pivot = arr[(lo + hi) / 2];
	arr[(lo + hi) / 2] = arr[hi];
	arr[hi] = pivot;

	while (lo < hi) {
		
		while (arr[lo] <= pivot && lo < hi) {
			lo++;
		}
		while (pivot <= arr[hi] && lo < hi) {
			hi--;
		}
		if (lo < hi) {
			int T = arr[lo];
			arr[lo] = arr[hi];
			arr[hi] = T;	
		}
	}
	arr[hi] = arr[hi];
	arr[hi] = pivot;
	QuickSort(arr, lo-1);
	QuickSort(arr, hi + 1);
}

void Sort::GoofySort(int arr[], int size) 
{

	/*Examine the array element where you are, and the previous array element.If they are in the right order, “step forward” to the next element.*/
	for (int i =0; i <size; ++i) 
	{
		if (i == 0) 
		{
		}
		else 
		{
		/*	If you examine the element where you are, and the previous element, if they are out of order, swap them and “step back” one element.*/
			if (arr[i] < arr[i - 1])
			{
				int temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;
				i -= 2;
			}
		}
	}
}
