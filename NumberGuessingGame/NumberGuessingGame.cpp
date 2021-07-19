#include<iostream>

void get_range()
{
	int range_start, range_end;
	std::cout << "Range: What do you want the smallest number to be? ";
	std::cin >> range_start;
	std::cout << "Range: What do you want the largest number to be? ";
	std::cin >> range_end;

	std::cout << "Range set to " << range_start << " & " << range_end << std::endl;
}
int main()
{
	get_range();
}