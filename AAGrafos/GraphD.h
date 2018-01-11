#pragma once
#include <map>
#include <vector>
#include <list>
#include <utility>
#include <iostream>

struct node {
	int info;
	node* next;
};


class GraphD
{
public:
	GraphD(std::vector<std::pair<int,int>> num, std::map<node*, std::list<node*>> map);
	~GraphD();


private:
	std::map<int, std::list<node>> graph;

};

