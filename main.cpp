#include <iostream>
#define Opt = 0
#if Opt == 0
int Main() {
    std::cout << 0 << std::endl;
    return 0;
}
#if Opt == 1
int Main() {
    std::cout << 1 << std::endl;
    return 0;
}
#endif
int main()
{
    return  Main();
}