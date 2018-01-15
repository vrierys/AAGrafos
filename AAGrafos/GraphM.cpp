#include "stdafx.h"
#include "GraphM.h"


GraphM::GraphM(std::vector<std::pair<int, int>> num)
{
	int count = 0;
	int key = std::get<0>(num[count]);
	int value = std::get<1>(num[count]);

	for (int i = 0; i < num.size(); ++i)
	{
		std::vector<bool>aux;
		for (int j = 0; j < num.size(); ++j)
		{
			if (i + 1 == key && j + 1 == value) 
			{
				aux.push_back(true);
				count++;
				key = std::get<0>(num[count]);
				value = std::get<1>(num[count]);
			}
			else 
			{
				aux.push_back(false);
			}
		}
	}
}

GraphM::~GraphM()
{
}

void GraphM::InsertArc(std::pair<int, int> marc)
{
	int key = std::get<0>(marc);
	int value = std::get<1>(marc);

	ramon[key-1][value-1] = true;
}

void GraphM::DeleteArc(std::pair<int, int> marc)
{
	int key = std::get<0>(marc);
	int value = std::get<1>(marc);

	ramon[key - 1][value - 1] = false;

}

int GraphM::consIndex(int marc)
{
	int count = 0;

	for (int i = 0; i < ramon.size(); i++)
	{
		for (int j = 0; j < ramon.size(); j++)
		{
			//miramos la columna correspondiente a Marc
			if (marc == j + 1 && ramon[i][j] == true)
			{
				count++;
			}
			//miramos la fila correspondiente a Marc
			if (marc == i + 1 && ramon[i][j] == true) 
			{
				count++;
			}
		}
	}
}

bool GraphM::verifyPath(int start, int end)
{
	std::stack<int> noemvedegust;
	std::set<int> salmoperasopar;





}
