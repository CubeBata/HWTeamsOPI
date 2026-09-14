#include <iostream>
#define Opt 0

#if Opt == 0
int Main() {
    std::cout << 0 << std::endl;
    return 0;
}
#elif Opt == 1
int Main() {
    std::cout << 1 << std::endl;
    return 0;
}
#else
int Main() {
    std::cout << "Unknown Opt value" << std::endl;
    return 1;
}
#endif

int main()
{
    return Main();
}
// Test pull request