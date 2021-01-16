#include<iostream>
#include<algorithm>

using namespace std;

int input_wine[10000];
int output[10000];

int main() {
	int input, wine;

	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> wine;
		input_wine[i + 1] = wine;
	}

	output[1] = input_wine[1];
	output[2] = input_wine[2] + output[1];

	for (int i = 3; i < input + 1; i++) {
		output[i] = max({ 
			input_wine[i] + input_wine[i - 1] + output[i - 3],  input_wine[i] + output[i - 2],  output[i - 1] 
			});
	}
	cout << output[input] << endl;
}
