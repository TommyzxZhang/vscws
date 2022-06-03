#include "RecordStores.h"

void sort(Amoeba** store, int n) {
    bool flag = true;
    int begin = 0;
    int finish = n - 1;
    while (flag)
    {
        flag = false;
        for (int i = begin; i < finish; i++)
        {
            if (store[i] > store[i + 1]) {
                swap(store[i], list[i + 1]);
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
        flag = false;
        finish--;

        for (int i = finish - 1; i >= begin; i--)
        {
            if (list[i] > list[i + 1])
            {
                swap(list[i], list[i + 1]);
                flag = true;
            }
        }
        begin++;
    }
}