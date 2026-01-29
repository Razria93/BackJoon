### iostream을 사용할 경우

```cpp
#include <iostream>

std::ios::sync_with_stdio(0);
std::cin.tie(0);
std::cout.tie(0);

// 입출력 최적화
// 이후 std 기반의 출력
// 위 설정까지 설정하면 입출력속도가 빨라짐
// 그러나 c스타일(cstdio)과 c++스타일(iostream)은 혼재하지 말 것
```

#### cstdio를 사용할 경우

```cpp
#include <cstdio>
int idx;

scanf(%d, &idx);                // std::cin과 유사
pritnf("%s: %d", "idx: ", idx); // std::cout과 유사

// 주의사항
// 1. 타입-포멧 일치 (참고: 00_cstdio Type-Format 참조표)
// 2. `%c` 앞에는 공백을 넣어야함. 공백으로 구분하여 들어오는 입력값을 받을 때, 
//    공백을 읽고 저장할 여지가 있음
scanf("%c", &ch);  // X
scanf(" %c", &ch); // O (공백무시)
// 3. iostream과 stdio 혼용은 지양
```

---
### 자료형을 사용할 경우

```cpp
// 입력되는 자료형을 보고 자료형 정하기
// 곱셈을 하게 될 경우 숫자가 매우 커질 수 있으므로 
// - 정수형은 long long 사용
// - 실수형은 double 사용
// int로 longlong을 곱셈할 경우 1LL * a * b 와 같은 방식으로 급셈
// float로 double을 곱셈할 경우 1.0 * a * b 와 같은 방식으로 곰셈
```

|      자료형      |     크기 (byte)     | 표현 가능한<br>경우의 수 |                            범위                             |    접미사    |
| :-----------: | :---------------: | :-------------: | :-------------------------------------------------------: | :-------: |
|    `char`     |      1 byte       |       255       |                   -128 ~ 127 또는 0 ~ 255                   |    없음     |
|    `short`    |      2 byte       |      약 6만       |                     -32,768 ~ 32,767                      |    없음     |
|     `int`     |      4 byte       |      약 42억      |              -2,147,483,648 ~ 2,147,483,647               |    없음     |
|    `long`     |    4 or 8 byte    |                 |                 `int` 또는 `long long`과 유사                  |    `L`    |
|  `long long`  |      8 byte       |     약 1800경     | -9,223,372,036,854,775,808 ~<br>9,223,372,036,854,775,807 |   `LL`    |
|    `float`    |      4 byte       |  유효숫자 <br>7자리   |                   약 -3.4e+38 ~ 3.4e+38                    | `f` / `F` |
|   `double`    |      8 byte       |  유효숫자 <br>15자리  |                  약 -1.8e+308 ~ 1.8e+308                   |    없음     |
| `long double` | 8, 10, 또는 16 byte |                 |                   `double`과 유사하거나 더 넓음                    |    `L`    |

---
### 반복문을 사용할 경우

#### for문

```cpp
int N;
for(int i = 1; i <= N; ++i)
{
}

// 와 같이 일반적으론 범위 `1 ~ N` 으로 반복문 실행
```

### while문

```cpp
// EOF 대표템플릿
// 1) 공백 구분 입력 (정수/실수/단어 등)
int a, b;
while (std::cin >> a >> b) 
{
    std::cout << a + b << '\n';
}
// cin >> a >> b가 성공하면 true, 실패(EOF 포함)하면 false가 되어 자동 종료

// 2) 한 줄 입력 (공백 포함)
std::string line;
while (std::getline(std::cin, line)) 
{
    std::cout << line << '\n';
}

// 3) C 스타일 scanf
int a, b;
while (scanf("%d %d", &a, &b) == 2) 
{
    printf("%d\n", a + b);
}
// scanf는 입력된 값의 갯수를 반환하므로 갯수 기반으로 종료시키고 싶을 경우 사용
// scanf(%d, &a): 
// - 입력이 들어왔을 경우 지정한 형태(여기서는 %d)으로 받아서 a에 저장
// - 반환값으로 입력 갯수를 반환

// while문은 for문과는 다르게 종료조건을 정확하게 명시해야함.
// 그러지 않을 경우 무한 루프에 빠지거나 의도치 않은 동작을 할 가능성이 높음
```

### eof()를 직접 사용할 경우 (권장하지 않음)

```cpp
while(true)
{
	if(std::cin.eof()) break; // 권장하지 않음
}

while(!eof()) // 권장하지 않음
{
}

// eof()는 입력값으로 들어올 바이너리 데이터가 더 없는지를 체크하는 함수 (없으면 true)
// 종료조건으로 eof()를 사용하지 않는 이유는 eof()는 '읽기 시도 이후에야' true를 반환해서
// true로 바뀌기전에 본문이 실행되어 읽기 시도를 했던 실패값으로 한번 더 처리하는 자주 발생함
// 따라서 위에 사용했던 것 처럼 입력값에 대해서 즉각적으로 판단하여 종료하는 구조가 바람직
```

---
### 인덱스를 사용할 경우 (for문, 배열 etc)

```cpp
// 인덱스를 [번호]로 사용할 경우에는 1-based
std::vector<int> vec(N + 1);
for (int i = 1; i <= N; ++i)
{
	int X;
	vec[i] = X;
}

// 인덱스를 [오프셋]으로 사용할 경우에는 0-based
for (int i = 0; i < M; ++i)
{
	int temp = vec[minIdx + i];
	vec[minIdx + i] = vec[maxIdx - i];
	vec[maxIdx - i] = temp;
}
```

---
### 동적배열을 사용할 경우

#### new 키워드 사용

```cpp
int N;
int* arr = new int[N + 1] {0};
delete[] arr;

// 일반적으로 반복문을 0번 인덱스를 사욯하지 않고 1 ~ N으로 저장하고 접근해서 사용하기 때문에 
// N + 1 로 확보해줘야 OOB(Out Of Bound)가 발생하지 않음 (1-based 배열)
// 배열 생성 후 삭제는 습관화 해두기
// 생성시 {} 으로 초기화 값을 설정할 수 있음. 기본적으로는 MIN 값이 설정되어 있음
```

#### std::vector 사용

```cpp
#include <vector>

std::vector<int> vec = std::vector<int>(N + 1, 0);

vec.begin() // 벡터의 시작주소 (오프셋과 같이 사용)
vec.end() // 벡터의 마지막주소 (마지막 요소의 다음 주소이기 때문에 접근하면 OOB)

// 마찬가지로 N + 1로 확보 (1-based 벡터)
// 첫번째 인수가 벡터의 크기, 두번째 인수가 초기화값
// 접근은 일반 정적 배열과 똑같이 접근 가능
// new delete 키워드보다 실수할 여지가 적어 안전함
```

---
### 특정 값 카운팅
#### Hard Coding

```cpp
#include <vector>

std::vector<int> arr;

int V;

for (int i = 1; i <= N; ++i)
{
	if (arr[i] == V)
		 ++Num;
}
```

#### std::count 사용

```cpp
#include <vector>
#include <algorithm>

int answer = std::count(vec.begin(), vec.end(), target);

// 매개변수는 시작주소, 끝주소, 카운트 저장 변수(비교대상)
// 끝주소는 메모리 블럭의 끝주소이므로 N번째 요소의 시작주소 + Offset 
// (== N + 1번째 요소의 시작주소)
```

---
### 구간 값 채우기
#### Hard Coding

```cpp
#include <vector>

std::vector<int> arr;

for (int i = 1; i <= M; ++i)
{
	int startIndex, endIndex;
	int cpyNum;

	for (int j = startIndex; j <= endIndex; ++j)
	{
		arr[j] = cpyNum;
	}
}
```

#### std::fill 사용 (특정값 채우기)

```cpp
#include <vector>
#include <algorithm>

std::fill(vec.begin() + startIndex, vec.begin() + (endIndex + 1), k);

// 매개변수는 시작주소, 끝주소, 채울 값
// 끝주소는 메모리 블럭의 끝주소이므로 N번째 요소의 시작주소 + Offset 
// (== N + 1번째 요소의 시작주소)
```

#### std::iota 사용 (연속값 채우기)

```cpp
#include <vector>
#include <algorithm>

std::iota(vec.begin() + startIndex, vec.begin() + (endIndex + 1), s);

// 매개변수는 시작주소, 끝주소, 채울 연속값의 시작 값
// 끝주소는 메모리 블럭의 끝주소이므로 N번째 요소의 시작주소 + Offset 
// (== N + 1번째 요소의 시작주소)
// startIndex부터 endIndex까지 {s, s + 1, s + 2 ... }
```

#### “1 ~ N 초기화”에 쓰는 형태 (1-based)

```cpp
#include <vector>
#include <algorithm>

std::vector<int> vec(N + 1);
std::iota(vec.begin() + 1, vec.end(), 1); // vec[1]=1, vec[2]=2, ..., vec[N]=N

// 1 ~ N번 idx를 사용하기 때문에 0번 idx[vec.begin()]는 사용하지 않음
// 따라서 배열의 크기도 N이 아닌 N + 1
// iota의 start도 vec.begin() 이 아닌 vec.begin() + 1
```

---
### 누적합
#### Hard Coding

```cpp
#include <vector>

std::vector<int> arr;

long long sum = 0;
for (int i = start; i <= end; ++i)
{
	sum += arr[i];
}
```

#### std::accumlate 사용

```cpp
#include <vector>
#include <numeric>

long long sum = std::accumulate(vec.begin(), vec.end(), 0LL);

// 매개변수는 시작주소, 끝주소, 초기값
// 끝주소는 메모리 블럭의 끝주소이므로 N번째 요소의 시작주소 + Offset 
// (== N + 1번째 요소의 시작주소)

```

#### 1부터 N까지 자연수의 합

```cpp
// 1부터 N까지 자연수를 더할 때
long long sum = N * (1 + N) * 0.5f
// 첫째항이 1이고 공자가 1인 등차수열에만 적용 (1부터 N까지)

// 일반적인 등차수열 합공식
long long N * (vec[1] + vec[N]) * 0.5f
// 해당식에 vec[1] == 1, vec[N] == N 이면 위 공식과 같음
```


---
### Swap

#### Hard Coding

```cpp
int A, B;
int temp = arr[A];
arr[A] = arr[B];
arr[B] = temp;

// temp에 백업한 변수부터 데이터 삽입
// 이후 이전 차례에 삽입한 변수에 다음 idx의 변수 데이터를 삽입
// 반복 후 마지막 idx에 temp 데이터 삽입
```

#### std::reverse 사용

```cpp
#include <algorithm>
std::reverse(vec.begin() + A, vec.begin() + B + 1);

// 구간 내 멤버들을 뒤집는 API
// [vec.begin() + A, vec.begin() + B + 1) 이기 때문에 B까지 포함하려면 B + 1
```

---
