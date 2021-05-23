# Student_search_project
1. 목적

   학생 정보(기업, 이름, 성별, 연락처, 이메일, 생년월일, 전공) 파일을 입력 받고 그룹별로 검색할 수 있다.

2. 역할분담

   공통 : 알고리즘 설계, 변수 통일, 필요한 함수 선정, 디버깅

   김태현(팀장) : 데이터 전처리, 구조체, 파일 입력, main 함수

   강형준(팀원) : 초기 화면, 검색 모드 결정, 그룹별 검색 함수

3. 설계

   프로그램 실행 -> 학생 정보 파일 불러오기 -> 학생 구조체에 정보 입력하기 -> 검색 모드 결정하기 -> 검색 결과 출력하기
   
   C언어 코드 파일

   main.c : 메인 함수 파일

   search.c : 그룹별 검색 함수 파일

   student.h : 학생 정보가 담겨있는 구조체 헤더 파일

4. 결과

   초기화면
   
   ![image](https://user-images.githubusercontent.com/62055003/119252389-e98aec00-bbe6-11eb-9b3a-9f558434feef.png)
   
   기업 검색 모드 결정
   
   ![image](https://user-images.githubusercontent.com/62055003/119252439-3bcc0d00-bbe7-11eb-8863-4d9729380839.png)
   
   기업 검색 결과
   
   ![image](https://user-images.githubusercontent.com/62055003/119252456-4dadb000-bbe7-11eb-875d-04163325e353.png)
