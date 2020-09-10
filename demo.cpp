#include "demo.h"
#include<cstdlib>
#include<ctime>
#include <string>

#define ARRAY_SIZE 10

void random(unsigned int* arr, unsigned int length)
{
	srand(time(0));
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = rand() % 25;
	}
}

namespace Demo
{
	void demoBubble()
	{
		unsigned int unsorted[ARRAY_SIZE];
		random(unsorted, ARRAY_SIZE);
		std::cout << "Bubble::bubbleSort() ------" << std::endl << std::endl;
		if (Bubble::bubbleSort(unsorted, ARRAY_SIZE) == false)
		{
			std::cout << "already sorted" << std::endl;
		}

		std::cout << std::endl << std::endl;

		random(unsorted, ARRAY_SIZE);
		unsigned int target = 4;
		std::cout << "Bubble::bubbleSortAndFind"<< target  << "thBiggest() ------" << std::endl << std::endl;
		if (Bubble::bubbleSortAndFindnthBiggest(unsorted, ARRAY_SIZE, target) == false)
		{
			std::cout << "already sorted" << std::endl;
		}

		std::cout << std::endl << std::endl;
	}

	void demoInsertion()
	{
		unsigned int unsorted[ARRAY_SIZE];
		random(unsorted, ARRAY_SIZE);
		std::cout << "Insertion::insertionSort() ------" << std::endl << std::endl;
		if (Insertion::insertionSort(unsorted, ARRAY_SIZE) == false)
		{
			std::cout << "already sorted" << std::endl;
		}

		std::cout << std::endl << std::endl;

		std::string* unsorted_str = new std::string[5];
		unsorted_str[0] = "Kaorin";
		unsorted_str[1] = "Sakaki";
		unsorted_str[2] = "Kagura";
		unsorted_str[3] = "Koyomi";
		unsorted_str[4] = "Nyamo";

		std::string param = "Osaka";

		std::cout << "Insertion::insert(" << param << ") ------" << std::endl << std::endl;
		Bubble::bubbleSort(unsorted_str, 5);
		std::cout << std::endl;

		unsorted_str = Insertion::insert(unsorted_str, 5, param);
		for (unsigned int i = 0; i < 6; i++)
		{
			std::cout << unsorted_str[i] << std::endl;
		}
		delete[] unsorted_str;

		std::cout << std::endl << std::endl;
	}
}
