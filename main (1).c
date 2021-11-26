#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int mas[100], mas_positive[100];
    int p, count_positive = 0, tmp;
    cout << "введіть число p: ";
    cin >> p;
    if (p > 100 || p < 1)
    {
        cout << "введене число p не належить від 1 до 100 ";
        return 1;
    }
    for (int i = 0; i < p; i++)
    {
        cin >> tmp;
        if (abs(tmp) > 100)
        {
            do
            {
                cout << "ви ввели невірне значеня p, p має бути в межах (-100;100)" << endl;
                cout << "введіть його ще раз: " << endl;
                cin >> tmp;
            }
            while (abs(tmp) > 100);
        }
        mas[i] = tmp;
        if (mas[i] > 0)
        {
            count_positive++;
            mas_positive[count_positive - 1] = mas[i];
        }
    }
    if ( count_positive == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "кількість позитивних елементів: ";
        cout << count_positive;
        cout << endl; 
        for (int i = 0; i < count_positive; i++)
        {
            cout << mas_positive[i] << " ";
        }
    }
    
    return 0;
}





















