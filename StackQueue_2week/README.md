# 2주차_스택과 큐

## 스택 / 큐
- 사용 언어 : C / C++<br>
- 풀지 못해도 문제는 읽고 오기!
- 풀었는지 상관없이, 다른 사람 풀이가 궁금한 문제는 체크하고 공유하기!

### 백준

- <a href="https://www.acmicpc.net/problem/10828" style="color: blue;">스택</a>
- <a href="https://www.acmicpc.net/problem/12605" style="color: blue;">단어순서 뒤집기</a>
- <a href="https://www.acmicpc.net/problem/10845" style="color: blue;">큐</a>
- <a href="https://www.acmicpc.net/problem/2164" style="color: blue;">카드2</a>
- <a href="https://www.acmicpc.net/problem/1158" style="color: blue;">요세푸스</a> ⭐ 
- <a href="https://www.acmicpc.net/problem/12789" style="color: blue;">도키도키 간식드리미</a>

### 프로그래머스

- <a href="https://school.programmers.co.kr/learn/courses/30/lessons/12906" style="color: blue;">같은 숫자는 싫어</a>
- <a href="https://school.programmers.co.kr/learn/courses/30/lessons/42586" style="color: blue;">기능개발</a>
- <a href="https://school.programmers.co.kr/learn/courses/30/lessons/12909" style="color: blue;">올바른 괄호</a>⭐ 

### 도전문제
위에 문제가 **너무 쉬운 분들**만 해보세요

- <a href="https://www.acmicpc.net/problem/2493" style="color: blue;">탑</a>
- <a href="https://www.acmicpc.net/problem/6198" style="color: blue;">옥상 정원 꾸미기</a>
- <a href="https://www.acmicpc.net/problem/17298" style="color: blue;">오큰수</a>⭐ 


------------------------------------
관리를 위해 github의파일트리를 교체했습니다.

아래 내용을 따라 브랜치 설정을 다시 해주세요

## 브렌치 설정

### 1. 브렌치 전환
여러분들의 로컬에서 main 브렌치로 전환해 주세요

```bash
git checkout main
```

main 브렌치 중에서 Intel7_condingTest_studyGropu 안의 내용은 백업하거나 삭제해 주세요

여러분이 작성한 내용은 모두 github에 넣었습니다

원격 저장소에서 변경 내용을 가져옵니다.


```bash
git pull
```

이제 깃허브에 주차별로 정리된 폴더가 여러분의 로컬 저장소에 들어왔습니다

이제 브렌치를 만들고 브렌치를 원격 저장소에 올려 추적되게 하겠습니다.


```bash
git branch -D 기존브렌치
git checkout -b 깃허브닉네임    #브렌치 생성
cd StackQueue_2week
mkdir 깃허브닉네임_w2
cd 깃허브닉네임_w2
touch test.txt  #아무 파일이나 추가하면 됩니다
git add .
git commit -m "branch config"
git push -u origin 깃허브닉네임 #-u 플래그는 로컬브랜치와 원격 브랜치 간의 추적관계를 설정합니다.
```

이제 1주차 했던 것과 동일하게 작업하시면 됩니다.

git은 commit만 하면 이전 커밋으로 되돌아가기 등도 모두 지원되니깐 찾아 보면서 써보세요

## 이번주 내용
이번 주는 스택과 큐에 문제입니다.

c 스타일로 풀 수도 있게지만 대부분 코딩테스트에서는 c를 지원하지 않고 c++은 지원합니다. 그리고 c++로 해결하는 것이 휠씬 쉽고 간단하니 c++의 STL을 사용합니다.

아래 STL를 공부하고 문제를 해결하고 수요일에 만나요
질문 있으면 해주세요

C++ STL에서 스택과 큐 관련 문제를 풀 때 주로 사용되는 컨테이너 어댑터(adapter)와 기본 컨테이너들은 다음과 같습니다.

    <stack>
        스택(stack) 컨테이너 어댑터
        주요 멤버 함수
        • push(x) : 원소를 스택 맨 위에 추가
        • pop() : 맨 위 원소 제거
        • top() : 맨 위 원소 접근
        • empty() : 비어 있는지 여부 확인
        • size() : 원소 개수 반환

    <queue>
        일반 큐(queue) 컨테이너 어댑터
        주요 멤버 함수
        • push(x) : 원소를 큐 뒤에 추가
        • pop() : 큐 앞 원소 제거
        • front() : 큐 앞 원소 접근
        • back() : 큐 뒤 원소 접근
        • empty() : 비어 있는지 여부 확인
        • size() : 원소 개수 반환

    <deque>
        양쪽 끝 삽입/삭제가 가능한 double-ended queue
        스택이나 큐 어댑터의 기본(recommended) underlying 컨테이너
        random access(iteration), push_front, push_back, pop_front, pop_back 등 지원

    <vector> 또는 <list>
        필요에 따라 직접 구현하거나 다른 알고리즘에 활용
        vector는 인덱스 접근이 빠르고, list는 임의 위치 삽입/삭제가 빠름

    <priority_queue>
        힙(Heap) 기반 우선순위 큐
        기본은 max-heap, 최소힙(min-heap)으로 쓰려면 비교 함수(comparator) 지정







