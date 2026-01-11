// #include <iostream>
// 
// int main()
// {
// 	std::ios::sync_with_stdio(false);
// 	std::cin.tie(nullptr);
// 
// 	char c[1000001];
// 	std::cin.getline(c, 1000001);
// 
// 	int num = 0;
// 	bool bIsWord = false;
// 	for (int i = 0; c[i] != '\0'; i++)
// 	{
// 		if (c[i] != ' ')
// 		{
// 			if (bIsWord != true)
// 			{
// 				bIsWord = true;
// 				num++;
// 			}
// 		}
// 		else // if(c[i] == ' ')
// 		{
// 			bIsWord = false;
// 		}
// 	}
// 
// 	std::cout << num << '\n';
// 
// 	return 0;
// }