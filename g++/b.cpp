#include <iostream>
#include <fstream>

int main()
{
    std::ifstream ifs("test.txt");
    char c;
    while (ifs >> c) std::cout << c;
    return 0;
}