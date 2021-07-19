#include<iostream>

int range_start, range_end;
int answer_req;
int res;
void get_range()
{
	std::cout << "Range: What do you want the smallest number to be? ";
	std::cin >> range_start;
	std::cout << "Range: What do you want the largest number to be? ";
	std::cin >> range_end;

	std::cout << "Range set to " << range_start << " & " << range_end << std::endl;
}

void select_randon_in_range()
{
	res = rand() % range_end + range_start;
}
void check_answer()
{
	if (answer_req == res)
	{
		std::cout << "Correct! The number was " << res << "!" << std::endl;
	}
	else
	{
		std::cout << "Incorrect. The answer was " << res << std::endl;
	}
}
void answer()
{
	std::cout << "Type your answer: ";
	std::cin >> answer_req;

		check_answer();

}

int main()
{
	get_range();

	if (!range_start || !range_end)
	{
		std::cout << "You must specify to ranges" << std::endl;
		get_range();
	}
	else
	{
		select_randon_in_range();
		answer();
	}
}