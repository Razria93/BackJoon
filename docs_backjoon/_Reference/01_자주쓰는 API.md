## 1. 자료구조 관련 (`Container / String`)

```cpp
#include <string>
#include <vector>

#include <deque>
#include <queue>
#include <stack>

#include <map>
#include <unordered_map>

#include <set>
#include <unordered_set>
```

### 핵심 용도 요약

|헤더|주요 용도|
|---|---|
|`<string>`|문자열 처리|
|`<vector>`|동적 배열 (가장 많이 사용)|
|`<deque>`|양방향 큐|
|`<queue>`|BFS, FIFO|
|`<stack>`|DFS, LIFO|
|`<map>`|정렬된 key-value|
|`<unordered_map>`|해시 기반 key-value|
|`<set>`|중복 제거 + 정렬|
|`<unordered_set>`|중복 제거 + 빠른 탐색|

---

## 2. 알고리즘 / 연산 (`Algorithm / Utility`)

```cpp
#include <algorithm>
#include <numeric>
#include <cmath>
#include <climits>
```

### 자주 쓰는 함수들

#### `<algorithm>`

```cpp
sort(v.begin(), v.end());
reverse(v.begin(), v.end());
min(a, b);
max(a, b);
lower_bound(v.begin(), v.end(), x);
upper_bound(v.begin(), v.end(), x);
```

#### `<numeric>`

```cpp
accumulate(v.begin(), v.end(), 0);
```

#### `<cmath>`

```cpp
sqrt(x);
abs(x);   // 정수는 <cstdlib> 또는 <algorithm>에서도 가능
```

#### `<climits>`

```cpp
INT_MAX, INT_MIN
LLONG_MAX, LLONG_MIN
```

---

## 3. 입출력 (`I/O`)

```cpp
#include <iostream>
#include <iomanip>
```

### 기본 입출력

```cpp
std::cin >> x;
std::cout << x;
```

### 성능 최적화 (거의 필수)

```cpp
std::ios::sync_with_stdio(false);
std::cin.tie(nullptr);
```

### 출력 포맷 (소수점 출력)

```cpp
std::fixed << std::setprecision(2);
```

### 기타 입출력 관련
```cpp
std::cin.ignore();
std::getline(std::cin, S); // 먼저 cin으로 비워주기. 빈 줄이 읽힐 수 있음.
std::get(std::cin, C);
```

---

## 4. 기타 유틸리티 (상황별)

```cpp
#include <utility>   // pair
#include <tuple>     // tuple
#include <cstring>   // memset
#include <cassert>   // assert
```

### 예시

```cpp
std::pair<int,int> p;
memset(arr, 0, sizeof(arr));
assert(condition);
```

---

## 5. “최소 세트” (실전용 템플릿)

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
```

---

## 6. 카테고리별 추천 세트

### 🔹 수학 / 구현

```cpp
#include <iostream>
#include <cmath>
#include <climits>
```

### 🔹 정렬 / 탐색

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
```

### 🔹 해시 / 빈도 계산

```cpp
#include <iostream>
#include <unordered_map>
```

### 🔹 그래프 / BFS·DFS

```cpp
#include <iostream>
#include <vector>
#include <queue>
```

---