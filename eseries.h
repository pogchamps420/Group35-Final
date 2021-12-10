#pragma once
#ifndef ESERIES_H
#define ESERIES_H

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include "componentmatch.h"

namespace npv
{

	bool CheckENumber(int E);

	class Eseries
	{
	public:

		Eseries(int E);
		void PrintSeries();
		std::pair<double,double> FindNearest(double target);
		
	private:
		int _E;
		std::vector<double> _values;
	protected:
		static const std::vector<double> E24Values;
	};

}
#endif