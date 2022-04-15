#include <memory>
#include <cstdio>

class Test 
{ 
	public: ~Test() { 
		std::puts("Test destroyed."); 
		} 
};

int main()
{
	std::shared_ptr<Test> p = std::make_shared<Test>();
	std::shared_ptr<Test> q = p;
	std::shared_ptr<Test> r = p;
	std::puts("p.reset()...");
	p.reset();
	std::puts("q.reset()...");
	q.reset();
	std::puts("done");
	return 0;
}