#include "Thread.h"

Thread::Thread()
{
	start();
}

Thread::~Thread()
{
	quit();
	wait();
}

void Thread::run()
{
	exec();
}
