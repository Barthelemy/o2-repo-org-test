///
/// @file    Foo.cxx
/// @author  Barthelemy von Haller
///

#include "GlobalTracking/Foo.h"
#include "Common/Bar.h"

#include <iostream>

namespace AliceO2 {
namespace GlobalTracking {

void Foo::greet()
{
  std::cout << "Hello GlobalTracking world!!" << std::endl;
  AliceO2::Common::Bar bar;
  bar.greet();
}

int Foo::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace ProjB
} // namespace AliceO2
