#include <future>
#include <iostream>

int factorial(std::shared_future<int> f){
	int res = 1;
	int N = f.get();

	for (int i = N; i > 1; i--){
		res *= i;
	}

	std::cout << "Result is: " << res << std::endl;
	return res;
}

int main(){
	std::promise<int> p;
	std::future<int> f = p.get_future();
	std::shared_future<int> sf = f.share();

	std::future<int> fu = std::async(std::launch::async, factorial, sf);
	std::future<int> fu2 = std::async(std::launch::async, factorial, sf);
	std::future<int> fu3 = std::async(std::launch::async, factorial, sf);
	std::future<int> fu4 = std::async(std::launch::async, factorial, sf);
	std::future<int> fu5 = std::async(std::launch::async, factorial, sf);

	p.set_value(4);

	std::cout << "fu:  " << fu.get() << std::endl;
	std::cout << "fu2: " << fu2.get() << std::endl;
	std::cout << "fu3: " << fu3.get() << std::endl;
	std::cout << "fu4: " << fu4.get() << std::endl;
	std::cout << "fu5: " << fu5.get() << std::endl;

	system("pause");
}