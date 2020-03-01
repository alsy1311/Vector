#include<iostream>
#include<vector>

int main() {
	std::vector<int> myVector1;
/*	myVector.push_back(1);
	myVector.push_back(1);
	myVector.push_back(1);
	myVector.push_back(1);
	myVector.push_back(1);
	*/
	for (int i = 0; i <= 20; i++) {
		std::cout << "MyVector1 contains of " << i << " element " << std::endl;
		std::cout << " Capacity is " << myVector1.capacity() << std::endl;
		
		myVector1.push_back(1);
	}
	std::vector<int> myVector2;
	myVector2.reserve(10);
	for (int i = 0; i <= 20; i++) {
		std::cout << "MyVector2 contains of " << i << " element " << std::endl;
		std::cout << " Capacity is " << myVector2.capacity() << std::endl;

		myVector2.push_back(1);
	}

	system("pause");
	return 0;
}