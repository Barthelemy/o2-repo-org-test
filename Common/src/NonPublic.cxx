///
/// @file    NonPublic.cxx
/// @author  Barthelemy von Haller
///

#include "NonPublic.h"

#include <iostream>

namespace AliceO2 {
namespace Common {

void NonPublic::secret()
{
  std::cout << "non public !" << std::endl;
}

} // namespace Common
} // namespace AliceO2
