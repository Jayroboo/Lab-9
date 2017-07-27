#include <iostream>
#include "Event.h"
#include "BinaryHeap.h"

using namespace std;

int main() {

	BinaryHeap testheap;

	Event first_event = Event('A', 5, 5);
	Event second_E = Event('A',4, 3);

	testheap.insert(first_event);
	testheap.insert(second_E);

	//cout << testheap;



	//system("pause");
	return 0;
}