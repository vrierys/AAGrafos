#pragma once
#include <vector>
#include <stack>
#include <set>
class GraphM
{

public:
	GraphM(std::vector<std::pair<int, int>> num);
	~GraphM();
	void InsertArc(std::pair<int, int> marc);
	void DeleteArc(std::pair<int, int> marc);
	int consIndex(int marc);
	bool verifyPath(int start, int end);
	bool verifyCirc(int node);
	bool soyEuler();


private:
	std::vector<std::vector<bool>> ramon;
};

