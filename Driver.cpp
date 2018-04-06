#define Array_Size 50000
#define FILENAME "BJTest50K.txt"

#include <fstream>
#include <time.h>
#include <iostream>

#include "Sort.h"

using namespace std;

int main()
{
	ifstream input;
	ofstream exporter;
	Sort theOneWhoSorts;

	clock_t start, stop;

	int array1[Array_Size];
	int array2[Array_Size];

	double differences = 0;
	double seconds = 0;

	input.open(FILENAME);
	if (!input) 
	{
		cout << "Error";
		return 0;
	}
	exporter << "\nThe fileName is: "<<FILENAME
		<<"Array size" <<Array_Size;

	//iterate through the arrays
	for(int i = 0; i< Array_Size; ++i)
	{
		input >> array1[i];
		array2[i] = array1[i];
	}
	//iterate through each sorting alg
	// Start with Bubble
	cout << "\nHere's the Bubble Sort: \n";
	start = clock();
	theOneWhoSorts.BubbleSort(array2, Array_Size);
	stop = clock();
	differences = (stop-start);
	seconds = differences / 1000;
	cout << "The results are:\n"<<
		seconds <<" Bubble ";
	//Next is Insertion sort
	for (int i = 0; i<Array_Size; ++i) 
	{
		input >> array1[i];
		array2[i] = array1[i];
	}
	cout << "\nHere's the Insertion Sort: \n";
	start = clock();
	theOneWhoSorts.InsertionSort(array2, Array_Size);
	stop = clock();
	differences = (stop - start);
	seconds = differences / 1000;
	cout << "The results are:\n " <<
		seconds << " seconds ";
	//selection
	for (int i = 0; i<Array_Size; ++i)
	{
		input >> array1[i];
		array2[i] = array1[i];
	}
	cout << "\nHere's the Selection Sort: \n";
	start = clock();
	theOneWhoSorts.SelectionSort(array2, Array_Size);
	stop = clock();
	differences = (stop - start);
	seconds = differences / 1000;
	cout << "The results are:\n" <<
		seconds << " seconds ";
	//comb sort
	for (int i = 0; i<Array_Size; ++i)
	{
		input >> array1[i];
		array2[i] = array1[i];
	}
	cout << "\nHere's the Comb Sort: \n";
	start = clock();
	theOneWhoSorts.CombSort(array2, Array_Size);
	stop = clock();
	differences = (stop - start);
	seconds = differences / 1000;
	cout << "The results are:\n" <<
		seconds << " seconds ";
	//shaker
	for (int i = 0; i<Array_Size; ++i)
	{
		input >> array1[i];
		array2[i] = array1[i];
	}
	cout << "\nHere's the Shaker Sort: \n";
	start = clock();
	theOneWhoSorts.ShakerSort(array2, Array_Size);
	stop = clock();
	differences = (stop - start);
	seconds = differences / 1000;
	cout << "The results are:\n" <<
		seconds << " seconds ";
	//Shellsort
	for (int i = 0; i<Array_Size; ++i)
	{
		input >> array1[i];
		array2[i] = array1[i];
	}
	cout << "\nHere's the Shell Sort: \n";
	start = clock();
	theOneWhoSorts.ShellSort(array2, Array_Size);
	stop = clock();
	differences = (stop - start);
	seconds = differences / 1000;
	cout << "The results are:\n" <<
		seconds << " seconds ";
	//MergeSort
	for (int i = 0; i<Array_Size; ++i)
	{
		input >> array1[i];
		array2[i] = array1[i];
	}
	cout << "\nHere's the Merge Sort: \n";
	start = clock();
	theOneWhoSorts.MergeSort(array2, Array_Size,1,50000);
	stop = clock();
	differences = (stop - start);
	seconds = differences / 1000;
	cout << "The results are:\n" <<
		seconds << " seconds ";
	//quicksort
	for (int i = 0; i<Array_Size; ++i)
	{
		input >> array1[i];
		array2[i] = array1[i];
	}
	cout << "\nHere's the Quick Sort: \n";
	start = clock();
	theOneWhoSorts.QuickSort(array2, Array_Size);
	stop = clock();
	differences = (stop - start);
	seconds = differences / 1000;
	cout << "The results are:\n" <<
		seconds << " seconds ";
	//GOoooofy sort
	for (int i = 0; i<Array_Size; ++i)
	{
		input >> array1[i];
		array2[i] = array1[i];
	}
	cout << "\nHere's the Goofy Sort: \n";
	start = clock();
	theOneWhoSorts.GoofySort(array2, Array_Size);
	stop = clock();
	differences = (stop - start);
	seconds = differences / 1000;
	cout << "The results are:\n" <<
		seconds << " seconds ";


	return 0;
}