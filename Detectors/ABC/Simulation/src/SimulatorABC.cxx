///
/// @file    SimulatorABC.cxx
/// @author  Barthelemy von Haller
///

#include "SimulatorABC.h"

#include <iostream>

namespace AliceO2 {
namespace ABC {

void SimulatorABC::greet()
{
  std::cout << "Hello SimulatorABC" << std::endl;
}

int SimulatorABC::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace ProjB
} // namespace ProjectTemplate
