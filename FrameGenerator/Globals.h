#pragma once

#include <iostream>
#include <string>

class Globals
{
public:
	static Globals* GetInstance();

	Globals(const Globals&) = delete;
	Globals& operator= (const Globals&) = delete;

	int getAndIncrementFrameNo();

	bool ExitGenerator();

	void SetCurrentSpeakerName(std::string current_speaker_name_str);

	std::string GetCurrentSpeakerName();

	bool exit_generator = false;

	std::string current_speaker_name = "";

protected:
	Globals();
	~Globals();

private:
	static Globals* pinstance_;
	std::string name;
	int frameNo = -1;
};
