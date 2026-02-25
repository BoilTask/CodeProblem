#include <iostream>

int a[100020];
int endAns[100020]; // 以i结尾的最长递增子序列
int startAns[100020]; // 以i开头的最长递增子序列

int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        int n;
        std::cin >> n;
        for (int i = 0; i < n; ++i)
        {
            std::cin >> a[i];
        }

        int tempAns = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i == 0 || a[i] > a[i - 1])
            {
                ++tempAns;
            }
            else
            {
                tempAns = 1;
            }
            endAns[i] = tempAns;
        }
        tempAns = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            if (i == n - 1 || a[i] < a[i + 1])
            {
                ++tempAns;
            }
            else
            {
                tempAns = 1;
            }
            startAns[i] = tempAns;
        }

        // for (int i = 0; i < n; ++i)
        // {
        //     std::cout << endAns[i] << " ";
        // }
        // std::cout << std::endl;
        // for (int i = 0; i < n; ++i)
        // {
        //     std::cout << startAns[i] << " ";
        // }
        // std::cout << std::endl;

        int ans = 1;
        for (int i = 0; i < n; ++i)
        {
            if (i == 0 && i == n - 1)
            {
                // 只有一个数
                ans = 1;
            }
            else if (i == 0)
            {
                // 考虑将第一个数修改为比第二个数小的数
                ans = std::max(ans, startAns[i + 1] + 1);
            }
            else if (i == n - 1)
            {
                // 考虑将最后一个数修改为比倒数第二个数大的数
                ans = std::max(ans, endAns[i - 1] + 1);
            }
            // 判断修改一个数能否让endAns与startAns接上
            else if (a[i - 1] + 1 < a[i + 1])
            {
                ans = std::max(ans, endAns[i - 1] + startAns[i + 1] + 1);
            }
            else
            {
                // 否则至少能接上其中一个
                ans = std::max(ans, endAns[i - 1] + 1);
                ans = std::max(ans, startAns[i + 1] + 1);
            }
        }
        std::cout << ans << std::endl;
    }
    return 0;
}
