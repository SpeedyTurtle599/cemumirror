//
//  wrapper.cpp
//  cemumirror
//
//  Created by Benjamin Coveler on 2/25/23.
//

#include <stdio.h>
#include "nimbase.h"
#include "msock.cpp"

// Example of importing a function from C/C++
// https://swiftprogrammer.info/swift_call_cpp.html
/* extern "C" int getIntFromCPP()
{
    // Create an instance of A, defined in
    // the library, and call getInt() on it:
    return A(1234).getInt();
}
*/

extern "C" int getIntFromCPP()
{
    // Create an instance of A, defined in
    // the library, and call getInt() on it:
    return A(1234).getInt();
}
