#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <chrono>
#include <thread>
#include "Globals.h"

class ImageGenerator
{
public:
	ImageGenerator(Globals* globals);

	bool copyFile(const char* SRC, const char* DEST);

	void generate();

private:
	Globals* globals;
};

