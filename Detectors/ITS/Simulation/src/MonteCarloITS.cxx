///
/// @file    MonteCarloITS.cxx
/// @author  Barthelemy von Haller
///

#include <iostream>
#include "ITSSimulation/MonteCarloITS.h"

namespace AliceO2 {
namespace ITS {

void MonteCarloITS::greet()
{
  std::cout << "Hello MonteCarloITS" << std::endl;
}

int MonteCarloITS::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace ITS
} // namespace AliceO2
