/*
string reverse

*/
#include <iostream>
#include <stack>
using namespace std;

#define MAX_LIMIT 100

void Reverse(char *c, int n){
	stack<char> s;
	//loop for push
	for(int i = 0; i<n; i++){
		s.push(c[i]);
	}
	//loop for pop
	for(int i = 0; i<n; i++){
		c[i] = s.top();
		s.pop();
	}
}

int main(){
	char str[MAX_LIMIT];
	printf("Enter a string: \n");
	fgets(str, MAX_LIMIT, stdin);

	Reverse(str, strlen(str));
	printf("Output = %s ", str);
	printf("\n");
}