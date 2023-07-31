#include <iostream>

int main()
{
	bool go { true };

	if constexpr (auto speed { 10 }, speed2 { 2 }; false)
	{
		std::cout << "speed : " << speed << std::endl;

		if (speed > 5)
		{
			std::cout << "Slow down!" << std::endl;
		}
		else
		{
			std::cout << "All good!" << std::endl;
		}
	}
	else
	{
		std::cout << "speed : " << speed << std::endl;
		std::cout << "speed : " << speed2 << std::endl;
		std::cout << "Stop" << std::endl;
	}

	//std::cout << "Out of the if block , speed : " << speed << std::endl;

	return 0;
}