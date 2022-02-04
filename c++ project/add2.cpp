#include "head.h" 
void message(const std::string & msg)
{
	std::lock_guard<std::mutex> locker(cout_lock);
	std::cout << msg;
}