#include <iostream>
#include <algorithm>

int main()
{
	const int length(9);
	int arr[length] = {6,3,2,9,7,1,5,4,8};

	int iter_end(0);

	for (int i = length-1; i > 0; --i)
	{
		bool isswap = false;
		for(int j = 0; j < i; ++j)
		{
			if (arr[j] > arr[j+1])
			{
				std::swap(arr[j],arr[j+1]);
				isswap = true;
			}
		}
		iter_end++;
		if (!isswap)
		{
			std::cout << "Early termination on iteration: " << iter_end << '\n';
			break;
		}
	}

	for (int i =0; i< length; ++i)
		std::cout << arr[i] << " ";
	std:: cout << '\n';
	return 0;
}
