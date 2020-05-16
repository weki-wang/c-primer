#include <iostream>

int main(void)
{
    int i = 43;
    const int &r = 42;
    const int i2 = 1, &r3 = 33;
    std::cout << "the i address is " << &i << std::endl;
    std::cout << "the r address is " << &r << std::endl;
    //std::cout << "the 42 address is " << &(42) << std::endl;
    return 0;
}