
#include <iostream>
#include <I_Printable.hpp>

// void print(const I_Printable &obj) {
//     std::cout << obj << std::endl;
// }

std::ostream &operator <<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return os;
}
