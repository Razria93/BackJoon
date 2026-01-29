#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int N;
	std::cin >> N;

	std::string S;
	std::cin >> S; // cin은 저장하는 변수 타입에 맞춰 파싱(해석)

	int Sum = 0;

	for (int i = 0; i < N; ++i)	// S.size()
	{
		// int Zero = static_cast<int>('0'); // 48
		// 
		// char C = S[i];
		// int Char = static_cast<int>(C);
		// 
		// int Sub = Char - Zero;
		// Sum += Sub;

		// digit값 변환: 
		// 문자(ex. '7')를 정수(ex. 7)로 바꾸는 것을 말함
		// 작은 정수타입 (char, unsigned char, short..)는 산술연산으로 들어가면 int형으로 자동승격됨
		Sum += S[i] - '0';	
	}

	std::cout << Sum << '\n';

	return 0;
}