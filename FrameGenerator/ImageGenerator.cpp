#include "ImageGenerator.h"

ImageGenerator::ImageGenerator(Globals* globals_) : globals(globals_)
{}

bool ImageGenerator::copyFile(const char* SRC, const char* DEST)
{
	std::ifstream src(SRC, std::ios::binary);
	std::ofstream dest(DEST, std::ios::binary);
	dest << src.rdbuf();
	return src && dest;
}

void ImageGenerator::generate()
{
	const char* src = "C:\\Users\\virgo\\OneDrive\\Desktop\\out.jpg";

	std::string base_dest = "C:\\Users\\virgo\\OneDrive\\Desktop\\out_";

	auto start = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();

	while (!globals->ExitGenerator())
	{
		std::string currentSpeakerName = globals->GetCurrentSpeakerName();
		int frameNo = globals->getAndIncrementFrameNo();

		std::string destStr = base_dest + std::to_string(frameNo) + ".jpg";

		copyFile(src, destStr.c_str()) ? 0 : 1;

		std::this_thread::sleep_for(std::chrono::milliseconds(30));
	}
}
