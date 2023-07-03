#include "demo.h"
#include <cstdlib>
#include <ctime>
#include <string>

#define ARRAY_SIZE 10

void random(unsigned int* arr, size_t length)
{
	srand(time(NULL));
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = rand() % 25;
	}
}

void randomChar(char* arr, size_t length)
{
	srand(time(NULL));

	size_t i = 0;
	while(i < length)
	{
		char randOut = rand() % 90;
		if (randOut >= 65)
		{
			arr[i] = randOut;
			i++;
		}
	}
}

namespace Demo
{
	void demoBubble()
	{
		// demo : bubbleSort(unsigned int)
		{
			unsigned int unsorted[ARRAY_SIZE];
			random(unsorted, ARRAY_SIZE);

			std::cout << "Bubble::bubbleSort(unsigned int) ------" << std::endl << std::endl;
			std::cout << "unsorted: " << std::endl << std::endl;
			for (const auto& e : unsorted) { std::cout << e << " "; }

			std::cout << std::endl << std::endl << "->" << std::endl << std::endl;
			if (Bubble::bubbleSort(unsorted, ARRAY_SIZE) == false)
			{
				std::cout << "already sorted" << std::endl;
			}
			std::cout << std::endl << std::endl << std::endl << std::endl;
		}

		// demo : bubbleSort(char)
		{
			char unsorted[ARRAY_SIZE];
			randomChar(unsorted, ARRAY_SIZE);

			std::cout << "Bubble::bubbleSort(char) ------" << std::endl << std::endl;
			std::cout << "unsorted: " << std::endl << std::endl;
			for (const auto& e : unsorted) { std::cout << e << " "; }

			std::cout << std::endl << std::endl << "->" << std::endl << std::endl;
			if (Bubble::bubbleSort(unsorted, ARRAY_SIZE) == false)
			{
				std::cout << "already sorted" << std::endl;
			}
			std::cout << std::endl << std::endl << std::endl << std::endl;
		}

		// demo : bubbleSortAndFind(unsigned int)
		{
			unsigned int unsorted[ARRAY_SIZE];
			random(unsorted, ARRAY_SIZE);
			
			unsigned int target = 4;
			/* find 4th biggest element */

			std::cout << "Bubble::bubbleSortAndFind `"<< target  << "` thBiggest(unsigned int) ------" << std::endl << std::endl;
			std::cout <<  target << "th Biggest element in array ";
			for (const auto& e : unsorted) { std::cout << e << " "; }
			std::cout << "is :  " << Bubble::bubbleSortAndFindXthBiggest(unsorted, ARRAY_SIZE, target); 
			std::cout << std::endl << std::endl << std::endl << std::endl;
		}

		// demo : bubbleSortAndFind(char)
		{
			char unsorted[ARRAY_SIZE];
			randomChar(unsorted, ARRAY_SIZE);
			
			unsigned int target = 4;
			/* find 4th biggest element */

			std::cout << "Bubble::bubbleSortAndFind `"<< target  << "` thBiggest(char) ------" << std::endl << std::endl;
			std::cout <<  target << "th Biggest element in array ";
			for (const auto& e : unsorted) { std::cout << e << " "; }
			std::cout << "is :  " << Bubble::bubbleSortAndFindXthBiggest(unsorted, ARRAY_SIZE, target); 
			std::cout << std::endl << std::endl << std::endl << std::endl;
		}
	}

	void demoInsertion()
	{
		// demo : insertionSort(unsigned int)
		{
			unsigned int unsorted[ARRAY_SIZE];
			random(unsorted, ARRAY_SIZE);

			std::cout << "Insertion::insertionSort(unsigned int) ------" << std::endl << std::endl;
			std::cout << "unsorted: " << std::endl << std::endl;
			for (const auto& e : unsorted) { std::cout << e << " "; }

			std::cout << std::endl << std::endl << "->" << std::endl << std::endl;
			if (Insertion::insertionSort(unsorted, ARRAY_SIZE) == false)
			{
				std::cout << "already sorted" << std::endl;
			}
			std::cout << std::endl << std::endl << std::endl << std::endl;
		}
		
		// demo : insert()
		{
			size_t length = 5;
			std::string* unsorted_str = new std::string[length];
			unsorted_str[0] = "Tomo";
			unsorted_str[1] = "Sakaki";
			unsorted_str[2] = "Kagura";
			unsorted_str[3] = "Koyomi";
			unsorted_str[4] = "Nyamo";


			std::string param = "Chiyo";
			/* param will be inserted into proper position */

			std::cout << "Insertion::insert(" << param << ") ------ into" << std::endl << std::endl;
			Bubble::bubbleSort(unsorted_str, length);
			std::cout << std::endl << std::endl << "->" << std::endl << std::endl;
			
			unsorted_str = Insertion::insert(unsorted_str, length, param);
			for (size_t i = 0; i < length + 1; i++)
			{
				std::cout << unsorted_str[i] << " ";
			}
			std::cout << std::endl << std::endl << std::endl << std::endl;


			param = "Kaoring";
			/* param will be inserted into proper position */

			std::cout << "Insertion::insert(" << param << ") ------ into" << std::endl << std::endl;
			for (size_t i = 0; i < length + 1; i++) { std::cout << unsorted_str[i] << " "; }
			std::cout << std::endl << std::endl << "->" << std::endl << std::endl;

			unsorted_str = Insertion::insert(unsorted_str, 6, param);
			for (size_t i = 0; i < length + 2; i++)
			{
				std::cout << unsorted_str[i] << " ";
			}
			std::cout << std::endl << std::endl << std::endl << std::endl;

			delete[] unsorted_str;
		}		
	}

	void demoQuick()
	{
		unsigned int unsorted[] = { 90, 80, 70, 60, 50, 40 ,30, 20, 10, 0 };
		std::cout << "Quick::quickSort() ------" << std::endl << std::endl;
		Quick::quickSort(unsorted, 0, ARRAY_SIZE - 1);

		for (size_t i = 0; i < ARRAY_SIZE; i++)
		{
			std::cout << unsorted[i] << std::endl;
		}

		std::cout << std::endl << std::endl;
		
		std::string* unsorted_str = new std::string[5];
		unsorted_str[0] = "Sakaki";
		unsorted_str[1] = "Nyamo";
		unsorted_str[2] = "Koyomi";
		unsorted_str[3] = "Kagura";
		unsorted_str[4] = "Chiyo";

		Quick::quickSort(unsorted_str, 0, 4);

		for (size_t i = 0; i < 5; i++)
		{
			std::cout << unsorted_str[i] << std::endl;
		}

		return;
	}
}
