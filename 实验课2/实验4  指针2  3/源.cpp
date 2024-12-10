#include <iostream>
using namespace std;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int size;
    cout << "����������Ԫ�ظ���: ";
    cin >> size;
    int* arr = new int[size];
    cout << "���������������Ԫ��: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, size);
    cout << "����������Ԫ��Ϊ: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}