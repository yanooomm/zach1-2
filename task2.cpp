/*Дан дек D с нечетным количеством элементов N (≥ 5). Добавить в начало
дека пять его средних элементов в исходном порядке. Использовать один
вызов метода insert.*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    deque <int> deq;
    int N;
    cout << "Введите нечетное количество элементов в деке: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        deq.push_back(a);
    }
    if (N == 5)
    {
        deque <int> ::iterator it = deq.begin();
        deque <int> ::iterator beg = deq.begin();
        for (int i = 0; i < 5; i++)
            it++;
        deq.insert(beg, beg, it);
    }
    else
    {
        deque <int> ::iterator it = deq.begin();
        deque <int> ::iterator beg = deq.begin();
        deque <int> ::iterator itbeg = deq.begin();
        int count = (N - 5) / 2;
        for (int i = 0; i < 5+count; i++)
            it++;
        for (int i = 0; i < count; i++)
            itbeg++;
        deq.insert(beg, itbeg, it);
    }
    deque <int> ::iterator beg = deq.begin();
    for (beg; beg != deq.end(); beg++)
        cout << *beg << ' ';
}
/*
Введите нечетное количество элементов в деке: 5
1
2
3
4
5
1 2 3 4 5 1 2 3 4 5
*/

/*
Введите нечетное количество элементов в деке: 11
1
2
3
4
5
6
7
8
9
10
11
4 5 6 7 8 1 2 3 4 5 6 7 8 9 10 11
*/

