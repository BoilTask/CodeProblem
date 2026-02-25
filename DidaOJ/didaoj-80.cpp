#include <iostream>

int main()
{
    int n, m;
    while (std::cin >> n >> m)
    {
        std::cout << (n == 1 && m == 1 ? "Bwin" : "Ewin") << std::endl;
    }
    return 0;
}
