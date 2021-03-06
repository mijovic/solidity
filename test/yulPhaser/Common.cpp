/*
	This file is part of solidity.

	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <test/yulPhaser/Common.h>

#include <libyul/optimiser/Suite.h>

using namespace std;
using namespace solidity;
using namespace solidity::yul;

map<string, size_t> phaser::test::enumerateOptmisationSteps()
{
	map<string, size_t> stepIndices;
	size_t i = 0;
	for (auto const& nameAndAbbreviation: OptimiserSuite::stepNameToAbbreviationMap())
		stepIndices.insert({nameAndAbbreviation.first, i++});

	return stepIndices;
}
