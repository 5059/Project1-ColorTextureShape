#pragma once
#include <vector>

namespace ColorTextureShape
{

	class Similarity
	{
		public:
            double Compute(const std::vector<double> &v1, const std::vector<double> &v2) const;
	};

}
