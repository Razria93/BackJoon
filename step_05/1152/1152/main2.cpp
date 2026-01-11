#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::getline(std::cin, s);

    int num = 0;
    bool bIsWord = false;

    for (char c : s)
    {
        if (c != ' ')
        {
            if (bIsWord != true)
            {
                bIsWord = true;
                ++num;
            }
        }
        else
        {
            bIsWord = false;
        }
    }

    std::cout << num << '\n';

	return 0;
}