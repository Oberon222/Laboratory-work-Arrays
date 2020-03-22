#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include "ЛабораторнаМасив.h"

using namespace std;

int main() {
	srand(time(0));
	const int size = 5;
	int arr[size];

	int action;
	int action2;
	int action3;

	do
	{
		cout << "1. Fill in an array with random numbers " << endl;
		cout << "2. Display the array" << endl;
		cout << "3. Find the element in the array" << endl;
		cout << "4. Sort the array" << endl;
		cout << "5. Determine the average value of the array elements" << endl;
		cout << "6. Find the number of elements that are multiples of 5" << endl;
		cout << "7. Move the array elements" << endl;
		cout << "8. Exit" << endl;
		cin >> action;
		switch (action)
		{

		case 1:
		{
			FillingArray(arr, size);
			break;
		}

		case 2:
		{
			DisplayArray();
			break;
		}
		case 3:
		{
			FindElementArray();
			break;
		}
		case 4:
		{
			cout << "Select an array sort method: 11- Ascending; 22 - descending." << endl;
			cin >> action2;
			switch (action2)
			{

			case 11:
			{
				cout << "Select the sorting algorithm: 1- Bubble, 2 - Insert, 3 - Select." << endl;
				cin >> action3;
				switch (action3)
				{
				case 1:
				{
					IncreasingSortingBubble(arr, size);
					break;

				}
				case 2:
				{
					break;
				}
				case 3:
				{
					break;
				}

				}

				break;
			}

			case 22:
			{

				break;
			}

			}

		}
		case 5:
		{
			AverageElements();
			break;
		}

		case 6:
		{
			ElementsMultiples_5();
			break;
		}


		}

	} while (action != 8);



		system("pause");
		return 0;
	
}
