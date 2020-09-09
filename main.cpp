#include "bubble.h"
#include "cstdlib"
#include <string>

#define ARRAY_SIZE 10
using namespace Bubble;

int main()
{
	int unsorted[ARRAY_SIZE];
	for (size_t i = 0; i < ARRAY_SIZE; i++)
	{
		unsorted[i] = rand() % 25;
	}
	unsigned int length = sizeof(unsorted) / sizeof(int);

	// std::string unsorted[] = { "Kaorin","Chihiro","Sakaki","Osaka","Kagura","Chiyo", "Koyomi", "Tomo", "Yukari", "Nyamo" };
	// unsigned int length = sizeof(unsorted) / sizeof(std::string);
	

	if (bubbleSortAndFindnthBiggest(unsorted, length, 3) == false)
	{
		std::cout << "already sorted" << std::endl;
	}
	// bubble sort

	return 0;
}