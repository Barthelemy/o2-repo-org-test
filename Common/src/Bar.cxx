///
/// @file    Bar.cxx
/// @author  Barthelemy von Haller
///

#include "Common/Bar.h"
#include "NonPublic.h"
// is it ok that we do not prefix it with "Common/" or is it confusing because the public
// headers are prefixed ?

#include <iostream>

namespace AliceO2 {
namespace Common {

void Bar::greet()
{
  std::cout << "Hello Common world!!" << std::endl;
  NonPublic nonPublic;
  nonPublic.secret();
}

int Bar::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace ProjB
} // namespace AliceO2
