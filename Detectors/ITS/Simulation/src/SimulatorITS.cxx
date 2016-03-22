///
/// @file    SimulatorITS.cxx
/// @author  Barthelemy von Haller
///

#include <iostream>
#include "SimulatorITS.h"

namespace AliceO2 {
namespace ITS {

void SimulatorITS::greet()
{
  std::cout << "Hello SimulatorITS" << std::endl;
}

int SimulatorITS::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace ITS
} // namespace AliceO2
