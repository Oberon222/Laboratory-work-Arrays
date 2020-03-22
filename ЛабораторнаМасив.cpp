#include "ЛабораторнаМасив.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

void FillingArray(int arr[], const int size) {
	ofstream fout("Arr.txt");
	int range = 0;
	cout << "Enter range: ";
	cin >> range;
	if (!fout.is_open()) {
		cout << "Error" << endl;
	}
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % range;
		fout << arr[i] << " ";
	}
	fout.close();

}

void DisplayArray() {
	ifstream fin("Arr.txt");
	int data;
	cout << "Array numbers ->";
	while (!fin.eof())
	{
		fin >> data;
		cout << data << " ";
	}
	cout << endl;
	fin.close();
}

void FindElementArray() {
	ifstream fin("Arr.txt");
	int data;
	int element;
	int counter = 0;
	cout << "Enter element: ";
	cin >> element;
	while (!fin.eof())
	{
		fin >> data;
		counter++;
		if (data == element) {
			cout << "#" << counter << " Element " << data << endl;
		}

	}
	fin.close();
	if (data != element) {
		cout << "The specified element is not in the array" << endl;
	}
	
	
}

void IncreasingSortingBubble(int arr[],const int size)
{
	ifstream fin("Arr.txt");
	int numb;
	int arr[];
	int i = 0;
	while (!fin.eof()) {
		fin >> numb;
		arr[i] = numb;
		i++;
	}
	fin.close();

	ofstream fout("Arr.txt",fstream::app);
	for (i = 0; i < size-1; i++) {
		for (int j = 0; j < size-1; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		fout << arr[i] << " ";

	}
	cout << endl;
	fout.close();

}

void IncreasingSortingInsert()
{
}

void AverageElements()
{
	ifstream fin("Arr.txt");
	int number;
	int sum=0;
	int average;
	int counter=0;
	while (!fin.eof())
	{
		counter++;
		fin >> number;
		sum += number;
	}
	fin.close();
	cout << "Sum= " << sum << endl;
	cout << "Counter= " << counter << endl;

	average = sum / counter;
	cout << "Average: " << average << endl;
}

void ElementsMultiples_5()
{
	ifstream fin("Arr.txt");
	int counter = 0;
	int number=0;
	while (!fin.eof())
	{
		fin >> number;
		if (number % 5 == 0) {
			counter++;
		}
	}
	fin.close();

	cout << "Number of elements of multiples 5 ->" << counter << endl;
}
