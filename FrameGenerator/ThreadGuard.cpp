#include "ThreadGuard.h"

ThreadGuard::ThreadGuard(std::thread& t_) : t(t_)
{}

ThreadGuard::~ThreadGuard()
{
	if (t.joinable())
	{
		t.join();
	}
}
