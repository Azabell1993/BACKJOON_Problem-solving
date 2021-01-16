#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    deque<int> de;
    for (int i = 0; i < N; i++)

    {

        string str;
        cin >> str;
        int num;

        //push_back X : 정수 X를 덱의 뒤에 넣는다.
        if (str == "push_back")
        {
            cin >> num;
            de.push_back(num);
        }

        //push_front X : 정수 X를 덱의 앞에 넣는다.
        else if (str == "push_front")
        {
            cin >> num;
            de.push_front(num);
        }

        //pop_front : 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다.
        //만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        else if (str == "pop_front")
        {
            if (de.empty())
                cout << -1 << "\n";
            else
            {
                cout << de.front() << "\n";
                de.pop_front();
            }
        }
        else if (str == "pop_back")
        {
            if (de.empty())
                cout << -1 << "\n";
            else
            {
                cout << de.back() << "\n";
                de.pop_back();
            }
        }
        //size : 덱에 들어있는 정수의 개수를 출력한다.
        else if (str == "size")
        {
            cout << de.size() << "\n";
        }

        //empty : 덱이 비어있으면 1을, 아니면 0을 출력한다.
        else if (str == "empty")
        {
            if (de.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        //front : 덱의 가장 앞에 있는 정수를 출력한다. 
        //만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        else if (str == "front")
        {
            if (de.empty())
                cout << -1 << "\n";
            else
                cout << de.front() << "\n";
        }
        //back : 덱의 가장 뒤에 있는 정수를 출력한다.
        //만약 덱에 들어있는 정수가 없는 경우에는 -1를 출력한다.
        else if (str == "back")
        {
            if (de.empty())
                cout << -1 << "\n";
            else
                cout << de.back() << "\n";
        }
    }
    return 0;
}
