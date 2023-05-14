#include "Globals.h"

Globals* Globals::pinstance_;

Globals::Globals() {}
Globals::~Globals() {}

int Globals::getAndIncrementFrameNo()
{
	frameNo++;
	return frameNo;
}

Globals* Globals::GetInstance()
{
	if (pinstance_ == nullptr)
	{
		pinstance_ = new Globals();
	}

	return pinstance_;
}

bool Globals::ExitGenerator()
{
	return exit_generator;
}

void Globals::SetCurrentSpeakerName(std::string current_speaker_name_str)
{
	current_speaker_name = current_speaker_name_str;
}

std::string Globals::GetCurrentSpeakerName()
{
	return current_speaker_name;
}
