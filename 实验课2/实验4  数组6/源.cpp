#include <iostream>
#include <cctype>
#include <string>
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;
        }
    }
}
int main() {
    string s;
    int counts[26] = { 0 };
    cout << "请输入一个字符串：" << endl;
    cin >> s;

    count(s.c_str(), counts);

    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            cout << char('a' + i) << "出现的次数为：" << counts[i] << endl;
        }
    }

    return 0;
}