#include "Tools.h"
#include <iostream>

void Tools::DisplayList(std::list<int> Ilist) {
	std::cout << "List : ";
	for (auto it : Ilist) {
		std::cout << it << " ";
	}
	std::cout << std::endl;
}

void Tools::DisplayVector(std::vector<int> IVector) {
	std::cout << "Vector : ";
	for (auto it : IVector) {
		std::cout << it << " ";
	}
	std::cout << std::endl;

}

void Tools::FindInVector(std::vector<int> IVector, int value) {
	auto it = std::find(IVector.begin(), IVector.end(), value);
	if (it != IVector.end()) {
		std::cout << value << " find in index : " << std::distance(IVector.begin(), it) << std::endl;;
	}
}

void Tools::AddList(std::list<int>& IList, int index, int value) {
	auto it = IList.begin();
	std::advance(it, index);
	IList.insert(it, value);
}


void Tools::EraseList(std::list<int>& Ilist, int index) {
	if (Ilist.size() > 1) {
		auto it = Ilist.begin();
		std::advance(it, index);
		Ilist.erase(it);
	}
	else {
		std::cout << "Missing Index" << std::endl;
	}
}

void Tools::EraseVector(std::vector<int>& IVector, int index) {
	if(index >= 0 && index <= IVector.size())
	{
		IVector.erase(IVector.begin() + index);
	}
	else {
		std::cout << "Missing Index" << std::endl;
	}
}

void Tools::AddVector(std::vector<int>& IVector, int index, int value) {
	IVector.insert(IVector.begin() + index, value);
}


void Tools::AddMap(std::map<int, int>& iMap, int index, int value) {
	iMap.insert({ index, value });
}

void Tools::EraseMap(std::map<int, int>& iMap, int index) {
	iMap.erase(index);
}

void Tools::FindInMap(std::map<int, int> iMap, int value) {
	auto it = std::find_if(iMap.begin(), iMap.end(), [value](const std::pair<int, int>& element) 
		{
			return element.second == value;
		});

	if (it != iMap.end()) {
		std::cout << value << " find in index : " << it->first << std::endl;;
	}
}

void Tools::DisplayMap(const std::map<int, int>& iMap) {
	std::cout << "Map : ";
	for (const auto& it : iMap) {
		std::cout << "[" << it.first << " : " << it.second << "] ";
	}
	std::cout << std::endl;
}