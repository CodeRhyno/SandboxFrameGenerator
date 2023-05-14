#include <iostream>
#include <time.h>
#include <filesystem>
#include <Windows.h>
#include <string>
#include "Globals.h"
#include "ImageGenerator.h"
#include "ThreadGuard.h"

int main(int argc, char* argv[])
{

	Globals* globals = Globals::GetInstance();
	ImageGenerator* image_generator = new ImageGenerator(globals);

	std::thread t(&ImageGenerator::generate, image_generator);
	ThreadGuard g(t);

	return 0;
}
