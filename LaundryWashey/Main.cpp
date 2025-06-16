#include<iostream>

//making a laundry calculation
int main() {
	int numberOfClothes{ 0 };


	std::cout << "Enter the number of clothes to wash: ";
	std::cin >> numberOfClothes;


	std::cout << "The price of a cloth is $8 " << std::endl;
	std::cout << "The cost of " << numberOfClothes << " clothes is : " << 8 * numberOfClothes << std::endl;
	std::cout << "Tax is : " << 8 * numberOfClothes * 0.05 << std::endl;
	std::cout << "The total estimate : " << (8 * numberOfClothes * 0.05) + (8 * numberOfClothes) << std::endl;
	std::cout << "this esimate is vald for " << 30 << " days" << std::endl;



	return 0;
}