

//#include <iostream>
//# include <math.h>
//using namespace std;
//int small_product(int a, int b);
//
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//    cout << small_product(a, b);
//    system("pause");
//    return 0;
//
//}
//
//
//int small_product(int a, int b) {
//    int small;
//    int big;
//    int i;
//    int product;
//    bool flag = true;
//    if (a > b) {
//        small = b;
//        big = a;
//    }
//    else
//    {
//        small = a;
//        big = b;
//    }
//    float temp = (float)big / (float)small;
//    if (temp < 1) {
//        return a * b;
//    }
//    else
//    {
//        if (fabs(temp - (int)temp) <= 1e-6) {
//            return big;
//        }
//        else {
//            for (i = small; i > 0; i--)
//            {
//                product = big * i;
//                temp = product / small;
//                if (fabs(temp - 1) <= 1e-6)
//                    return product;
//            }
//        }
//    }
//
//}


#include <iostream>
# include <math.h>
using namespace std;

int main() {
	int a, b, big, small;
	int count = 0;
	cin >> a >> b;
	//int num[500];
	int result = 1;
	if (a > b) {
		big = a;
		small = b;
	}
	else
	{
		big = b;
		small = a;
	}


	for (int i = small; i > 0; i--)			//先找出最小公因数
	{
		for (int j = 2; j <= small; j++)
		{
			if (small % j == 0 && big % j == 0) {
				small /= j;
				big /= j;
				//num[count] = j;
				result *= j;
			}
		}
	}
	cout << small * big * result;			//再将剩下的
	system("pause");
	
}