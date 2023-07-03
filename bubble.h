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
		}

		if (isSorted == false)
		{
			return false;
		}

		for (size_t i = 0; i < length; i++)
		{
			std::cout << arr[i] << " ";
		}
		return true;
	}

	template<typename T>
	const T bubbleSortAndFindXthBiggest(T* arr, const size_t length, const unsigned int x) // third param for finding Xth biggest value in arr
	{
		for (size_t i = 0; i < x; i++)
		{
			for (unsigned int j = 0; j < length - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					swap(&arr[j], &arr[j + 1]);
				}
			}
		}

		return arr[length - x];
	}
}