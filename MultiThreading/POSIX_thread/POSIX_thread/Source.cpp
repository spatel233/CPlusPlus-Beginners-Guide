#include <iostream>
#include "pthread.h"

using namespace std;

void *call_from_thread(void *){
	cout << "Launched by thread" << endl;
	return NULL;
}

int main()
{
	pthread_t t;

	//launch a thread

}