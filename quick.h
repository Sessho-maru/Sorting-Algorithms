#pragma once
#include <iostream>

namespace Quick
{
	template<typename T>
	void swap(T* x, T* y)
	{
		T temp = *y;
		*y = *x;
		*x = temp;
	}

	template<typename T>
	const int partition(T* arr, int start, int end)
	{
		T pivot = arr[start];
		int i = start;
		int j = end;

		do
		{
			while (arr[i] <= pivot && i < end)
			{
				i++;
			}
			while (arr[j] > pivot && j > start)
			{
				j--;
			}
			if (j > i) swap(&arr[i], &arr[j]);

		} while (j > i);

		swap(&arr[start], &arr[j]);
		return j;
	}

	template<typename T>
	void quickSort(T* arr, int start, int end)
	{
		if (end <= start)
		{
			return;
		}

		const int flagIndex = partition(arr, start, end);
		quickSort(arr, start, flagIndex - 1);
		quickSort(arr, flagIndex + 1, end);
	}
}