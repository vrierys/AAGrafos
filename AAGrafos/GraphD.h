#pragma once
#include <map>
#include <vector>
#include <list>
#include <utility>
#include <iostream>
#include <stack>
#include <set>

class GraphD
{
public:
	GraphD(std::vector<std::pair<int,int>> num);
	~GraphD();
	void InsertArc(std::pair<int, int> ramon);
	void DeleteArc(std::pair<int, int> ramon);
	int consIndex(int carla);
	bool verifyPath(int start, int end);
	bool verifyCirc(int node);
	bool soyEuler();

private:
	std::map<int, std::list<int>> graph;

};

