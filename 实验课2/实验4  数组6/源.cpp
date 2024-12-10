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
    cout << "������һ���ַ�����" << endl;
    cin >> s;

    count(s.c_str(), counts);

    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            cout << char('a' + i) << "���ֵĴ���Ϊ��" << counts[i] << endl;
        }
    }

    return 0;
}