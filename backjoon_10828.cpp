#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int input_count;
	cin >> input_count;

	stack<int> stk;
	string str;

	for (int i = 0; i < input_count; i++) {
		cin >> str;
		//push N : 정수 N을 스택에 넣는다.
		if (str == "push") {
			int num;
			cin >> num;
			stk.push(num);
		}//push

		//pop : stack의 맨 위에 정수를 빼고, 출력이 없는 경우 -1 출력
		else if (str == "pop") {
			if (!stk.empty()) {
				cout << stk.top() << "\n";
				stk.pop(); 
			}
			else { cout << "-1" << "\n";
			}
		}//pop

		else if (str == "size") {
			cout << stk.size() << "\n";

			//empty : stack이 비어있으면 1, 아니면 0 출력
		}
		else if (str == "empty") {
			if (stk.empty()) {
				cout << "1" << "\n"; }
			else {
				cout << "0" << "\n";
			}} //empty

		//top : stack의 가장 위의 정수를 출력, 없는 경우 -1 출력
		else if (str == "top") {
			if (!stk.empty()) {
				cout << stk.top() << "\n"; }
			else {
				cout << "-1" << "\n"; }
		}//top
	}
	return 0;
}