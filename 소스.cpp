//저작자: 신예원 202201901 컴퓨터공학부

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

void main() {
	string greeting = "Hello world!\n";     //greeting 문자열 변수에 "Hello world!" 할당
	string time = "It's lunch time now.\n"; //time 문자열 변수에 "It's lunch time now." 할당
        cout << "--Start--\n";                  //"--Start--" 문자열 출력   
	cout << greeting;                       //"Hello world!" 문자열 출력
	cout << time;                           //"It's lunch time now." 문자열 출력
}
