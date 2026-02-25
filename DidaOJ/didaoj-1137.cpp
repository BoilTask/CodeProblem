#include <iostream>

int dp[32];

int main()
{
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    for (int i = 4; i < 32; ++i)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    int T;
    std::cin >> T;
    while (T--)
    {
        int n;
        std::cin >> n;
        if (n <= 1)
        {
            std::cout << 0 << std::endl;
        }
        else
        {
            std::cout << dp[n] << std::endl;
        }
    }
    return 0;
}
