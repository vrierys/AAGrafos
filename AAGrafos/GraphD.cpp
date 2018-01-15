#include "stdafx.h"
#include "GraphD.h"


GraphD::GraphD(std::vector<std::pair<int, int>> num)
{
	int key;
	for (int i = 0; i < num.size(); ++i)
	{
		key = std::get<0>(num[i]);
		graph[key].push_back = std::get<1>(num[i]);
	}
}

GraphD::~GraphD()
{
}

void GraphD::InsertArc(std::pair<int, int> ramon)
{
	int key;
	key = std::get<0>(ramon);
	if (graph.find(key)->first) {
		graph[key].push_back = std::get<1>(ramon);
	}
}

void GraphD::DeleteArc(std::pair<int, int> ramon)
{
	int key;
	key = std::get<0>(ramon);
	int value = std::get<1>(ramon);
	if (graph.find(key)->first) 
	{
		for (std::list<int>::iterator it = graph[key].begin(); it != graph[key].end(); ++it) 
		{
			if (*it == value) 
			{
				graph[key].erase(it);
			}
		}
	}
}

int GraphD::consIndex(int carla)
{
	if (graph.find(carla)->first) 
	{
		int count = 0;
		count += graph[carla].size();

		for (auto it = graph.begin(); it != graph.end(); ++it) 
		{
			if (it->first != carla)
			{
				for (std::list<int>::iterator it2 = it->second.begin(); it2 != it->second.end(); ++it2)
				{
					if (*it2 == carla)
					{
						count++;
					}
				}
			}
		}
		return count;
	}
	else 
	{
		return 0;
	}
}

bool GraphD::verifyPath(int start, int end)
{
	
	if (graph.find(start)->first) 
	{
		std::stack<int> bea;
		std::set<int> aux;

		for (std::list<int>::iterator it = graph[start].begin(); it != graph[start].end(); ++it)
		{
			if (*it != end) 
			{
				bea.push(*it);
			}
			else 
			{
				return true;
			}
		}
		aux.insert(start);

		while (!bea.empty) 
		{
			int key = bea.top();
			bea.pop();
			for (std::list<int>::iterator it = graph[key].begin(); it != graph[key].end(); ++it)
			{
				if (*it != end)
				{
					if (aux.find(key) != aux.end())
					{
						bea.push(*it);
					}
				}
				else
				{
					return true;
				}
			}
			aux.insert(key);
		}
		return false;
	}
}

bool GraphD::verifyCirc(int node)
{
	
	if (graph.find(node)->first)
	{
		std::stack<int> bea;
		std::set<int> aux;

		for (std::list<int>::iterator it = graph[node].begin(); it != graph[node].end(); ++it)
		{
			if (*it != node)
			{
				bea.push(*it);
			}
			else
			{
				return true;
			}
		}
		aux.insert(node);

		while (!bea.empty)
		{
			int key = bea.top();
			bea.pop();
			for (std::list<int>::iterator it = graph[key].begin(); it != graph[key].end(); ++it)
			{
				if (*it != node)
				{
					if (aux.find(key) != aux.end())
					{
						bea.push(*it);
					}
				}
				else
				{
					return true;
				}
			}
			aux.insert(key);
		}
		return false;
	}

}

bool GraphD::soyEuler()
{
	




}
