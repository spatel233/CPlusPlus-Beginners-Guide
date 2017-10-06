#include <iostream>
#include <thread>
#include <vector>

using namespace std;

const int NT = 10;

class task
{
public:
	task(){}
	void operator()(int i){
		cout << i << " Thread id = " << this_thread::get_id() << endl;
	}
};

int main(){
	vector<thread> threads;

	for (int i = 0; i < NT; i++)
		threads.push_back(thread(task(), i));

	//synchronize their execution here
	for (auto& thread : threads)
		thread.join();

	system("pause");
	return 0;
}