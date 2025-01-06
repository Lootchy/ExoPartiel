#pragma once
#include <list>
#include <vector>
#include <map>


class Tools {
public:
	static void DisplayList(std::list<int> Ilist);
	static void EraseList(std::list<int>& IList, int index);
	static void AddList(std::list<int>& IList, int index, int value);


	static void DisplayVector(std::vector<int> IVector);
	static void EraseVector(std::vector<int>& IVector, int index);
	static void AddVector(std::vector<int>& IVector, int index, int value);
	static void FindInVector(std::vector<int> IVector, int value);

	static void DisplayMap(std::map<int, int> iMap);
	static void EraseMap(std::map<int, int>& iMap, int index);
	static void AddMap(std::map<int, int>& iMap, int index, int value);
	static void FindInMap(std::map<int, int>& iMap, int index);
};