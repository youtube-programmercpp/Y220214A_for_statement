#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> f()
{
	return { "ABC", "DEF", "GHI" };
}

int main()
{
	for (const std::string& value : f()) {
		std::cout << value << '\n';
	}
}
