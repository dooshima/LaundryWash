#include<iostream>

//making a laundry calculation
int main() {
	int numberOfClothes { 0 };
	const double priceofCloth{ 8 };
	const double  taxes{ 0.05f };
	const int  estimatedays{ 30 };

	std::cout << "Enter the number of clothes to wash: ";
	std::cin >> numberOfClothes;


	std::cout << "The price of a cloth is $8 " << std::endl;
	std::cout << "The cost of " << numberOfClothes << " clothes is : " << priceofCloth * numberOfClothes << std::endl;
	std::cout << "Tax is : " << priceofCloth * numberOfClothes * taxes << std::endl;
	std::cout << "The total estimate : " << (priceofCloth * numberOfClothes * taxes) + (priceofCloth * numberOfClothes) << std::endl;
	std::cout << "this esimate is vald for " << estimatedays << " days" << std::endl;



	return 0;
}