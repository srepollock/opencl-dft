#include "main.h"
int main(int argc, char ** argv)
{
	std::cout << "Hello World" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(10));
}