#include <iostream>
#include <vector>
#include <stack>
#include <sstream>

using namespace std;

struct CharIntConstruct {
    int type; // 0 == number, 1 == operator
    int number;
    char symbol;
};


vector<CharIntConstruct> make_postfix(istream& ins);
int evaluate_postfix(vector<CharIntConstruct> postfix);
bool evaluate_stack(stack<int>& numbers, const char symbol);

int main() {
    int result = -1;
    while (1) {
        cout << "Enter an expression in postfix notation: ";
        result = evaluate_postfix(make_postfix(cin));
        cout << "Result: " << result << endl;
    }
    return 0;
}


vector<CharIntConstruct> make_postfix(istream& ins)
{
    vector<CharIntConstruct> result;
    string input;
    getline(ins, input); // 한 줄 입력 받기
    stringstream ss(input);
    string token;

}

int evaluate_postfix(vector<CharIntConstruct> postfix)
{

}


bool evaluate_stack(stack<int>& numbers, const char symbol)
{

}
