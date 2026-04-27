#include <iostream>
#include <vector>

int binarySearch(const std::vector<int> &s, int x)
{
    int mid;
    int left{0};
    int right{static_cast<int>(s.size() - 1)};
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (s[mid] == x)
            return mid;
        else if (x < s[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main()
{
    std::vector<int> s = {11, 13, 19, 20, 22, 26, 32, 37, 40, 45};
    int x_patterns[] {37, 15};
    for (int x : x_patterns)
    {
        std::cout << "x=" << x << ", result=" << binarySearch(s, x) << '\n';
    }
}
