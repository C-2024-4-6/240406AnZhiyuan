#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }
    return -1;
}

int main() {
    char s1[100], s2[100];
    cout << "请输入第一个字符串：";
    cin >> s1;
    cout << "请输入第二个字符串：";
    cin >> s2;

    int result = indexOf(s1, s2);
    if (result != -1) {
        cout << s1 << "是" << s2 << "的子串，在" << s2 << "中的下标为 " << result << endl;
    }
    else {
        cout << s1 << "不是" << s2 << "的子串" << endl;
    }

    return 0;
}