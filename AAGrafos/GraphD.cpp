#include "stdafx.h"
#include "GraphD.h"


GraphD::GraphD(std::vector<std::pair<int, int>> num, std::map<node*, std::list<node*>> map)
{

	int key;
	std::list<node*> aux;

	for (int i = 0; i < num.size(); ++i)
	{
		key = std::get<0>(num[i]);

		if (!map.find(key)->first->first) 
		{
			//Guardamos el segundo elemento del vector en un nodo auxiliar y lo metemos en la lista
			node *paux = new node();
			paux->info = std::get<1>(num[i]);
			aux.push_back(paux);
			delete(paux);
			//Guardamos en el mapa
			map[key] = aux;
		}
		else 
		{




		}





		//map[std::get<0>(num[i])] =
		//std::get<0>(num)



	}


}

GraphD::~GraphD()
{
}
