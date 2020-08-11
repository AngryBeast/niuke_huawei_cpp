
#include <iostream>
using namespace std;
void without_repetition(int num);
int main()
{
    int num;
    cin >> num;
    without_repetition(num);
    //system("pause");
}

void without_repetition(int num) {
    //char str[256] = { 0 };
    //int apper[11] = {0};
    //sprintf(str, "%d", num);
    int apper[11] = { 0 };
    int temp = 0;
    while (num) {
        temp = num % 10;
        if (apper[temp] != 1) {
            cout << temp;
        }
        apper[temp] = 1;
        num /= 10;
    }
    
}