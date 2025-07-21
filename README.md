# 인텔 7기 코딩 테스트 스터디 레포

**※소스코드 파일명 끝에는 항상 이니셜 작성 ex) hello_이니셜.cpp**

최초 한 번은 깃허브 로그인 해서 들어와서 초대 수락하기 or 깃허브와 연동된 이메일 확인

## 1. git bash 설치

[https://git-scm.com/downloads](https://github.com/git-for-windows/git/releases/download/v2.50.1.windows.1/Git-2.50.1-64-bit.exe)

해당 링크 클릭(자동 설치)

## 2. 로컬 설정

1. 작업 디렉토리 생성
2. 해당 디렉토리에 마우스 오른쪽 클릭, Open Git Bash Here 클릭
3. git init
4. git clone https://github.com/uniljetstream/Intel7_codingTest_studyGroup.git
5. cd codingtest/Intel7_codingTest_studyGroup
6. git checkout 본인 깃허브 닉네임
   - ex) git checkout beakjoon
8. 경로 옆에 괄호로 본인 깃허브 닉네임으로 변경된 것 확인
  - **항상 본인 브렌치에서 작업하고 업로드 하세요!!!**

## 3. 업로드 설정

1. 원격저장소 생성
  - git remote add origin https://github.com/uniljetstream/Intel7_codingTest_studyGroup.git
2. 업스트림 설정
  - git push -u origin 본인브랜치이름
    ex) git push -u origin beakjoon

## 4. 업로드 및 다운로드 방법
git에는 3가지 작업 영역이 있습니다. 따라서 3단계를 거쳐야 합니다.

1. git status
   - 변경 사항을 확인한다. (변경 내용이 있을 경우 빨간 문자가 보임)
2. git add . 또는 git add 변경파일
   - 변경 사항을 스테이징 상태로 변경한다.
   - 이후 git status를 하면 변견 내용이 초록색으로 바뀜
3. git commit -m "이번주푼알고리즘, 하고싶은 코멘트"
   - 실제 GitHub에 등록되기 전 로컬 저장소
   - **따옴표 안에 내용 반드시 채울 것! 아니면 오류남. 알아서 해결하셈**
4. git push origin 본인브랜치이름
  - 원격 저장소(GitHub의)에 최종적으로 올라감. 반드시 본인 브랜치에 업로드 할 것.
  - 남 브랜치에 등록하지 말 것. 해결하기 힘듬.
---
- 선택사항
5. git pull origin main
  - main 브랜치에 올라가 있는 이번주 풀 문제, 공지 등 자동으로 로컬로 다운로드됨.
  - 충돌이 날경우 해당 부분을 직접 수정 후 git add > git commit > git push를 차례로 수행
