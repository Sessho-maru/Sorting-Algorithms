#pragma once
#include <iostream>

namespace Insertion
{
	template<typename T>
	const bool insertionSort(T* arr, const size_t length)
	{
		bool isSorted = false;

		for (unsigned int i = 1; i < length; i++)
		{
			int j = i - 1;
			T valueAtI = arr[i];

			while (j > -1 && arr[j] > valueAtI)
			{
				arr[j + 1] = arr[j];
				j--;

				isSorted = true;
			}
			arr[j + 1] = valueAtI;
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
	T* insert(T* arr, const size_t length, const T param) // insert param into alraedy sorted arr and return it
	{
		T* insertedArr = new T[length + 1];
		memcpy(insertedArr, arr, sizeof(T) * length);

		int tail = length - 1;

		while (tail > -1 && arr[tail] > param)
		{
			insertedArr[tail + 1] = insertedArr[tail];
			tail--;
		}
		insertedArr[tail + 1] = param;

		return insertedArr;
	}
}