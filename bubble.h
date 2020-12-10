#pragma once
#include <iostream>

namespace Bubble
{
	template<typename T>
	void swap(T* x, T* y)
	{
		T temp = *y;
		*y = *x;
		*x = temp;
	}

	template<typename T>
	const bool bubbleSort(T* arr, const size_t length)
	{
		bool isSorted = false;

		for (size_t i = 0; i < length - 1; i++) // each pass
		{
			for (unsigned int j = 0; j < length - 1 - i; j++) // each comparison
			{
				if (arr[j] > arr[j + 1])
				{
					swap(&arr[j], &arr[j + 1]);
					isSorted = true;
				}
			}

			if (isSorted == false)
			{
				return false;
			}
		}

		for (size_t i = 0; i < length; i++)
		{
			std::cout << arr[i] << std::endl;
		}
		return true;
	}

	template<typename T>
	const bool bubbleSortAndFindnthBiggest(T* arr, const size_t length, const unsigned int nth) // third param for finding 'specified'th biggest value in arr
	{
		bool isSorted = false;

		for (size_t i = 0; i < nth; i++)
		{
			for (unsigned int j = 0; j < length - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					swap(&arr[j], &arr[j + 1]);
					isSorted = true;
				}
			}

			if (isSorted == false)
			{
				return false;
			}
		}

		std::cout << arr[length - nth] << std::endl << std::endl;
		for (size_t i = 0; i < length; i++)
		{
			std::cout << arr[i] << std::endl;
		}
		return true;
	}
}