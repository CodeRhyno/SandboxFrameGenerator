#pragma once

#include <thread>

class ThreadGuard
{
	std::thread& t;

public:
	explicit ThreadGuard(std::thread& t_);
	~ThreadGuard();

	ThreadGuard(const ThreadGuard&) = delete;
	ThreadGuard& operator=(ThreadGuard const&) = delete;
};

