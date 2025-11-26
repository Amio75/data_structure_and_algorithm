#include <bits/stdc++.h>
using namespace std;

void trav(vector<int> &v, int *cnt)
{
    for (int i = 0; i < *cnt; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void insert(vector<int> &v, int index, int val, int *cnt)
{
    for (int i = *cnt - 1; i >= index; i--)
    {
        v[i + 1] = v[i];
    }
    v[index] = val;
    *cnt += 1;
}

void Delete(vector<int> &v, int index, int *cnt)
{
    for (int i = index + 1; i < *cnt; i++)
    {
        v[i - 1] = v[i];
    }
    v.pop_back();
    *cnt -= 1;
}

int main()
{
    int n;
    cout << "How many elements: ";
    cin >> n;
    vector<int> v(1000);
    cout << "Elements as input: ";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (true)
    {
        cout << endl
             << "-------------Menu--------------" << endl;
        cout << "1. Traversal" << endl
             << "2. Insertion" << endl
             << "3. Deletion" << endl;
        cout << "Operation: ";
        int choice;
        cin >> choice;
        int index, val;
        switch (choice)
        {
        case 1:
            trav(v, &n);
            break;
        case 2:
            cout << "Enter the index (0-" << n << ") & value : ";
            cin >> index >> val;
            insert(v, index, val, &n);
            break;
        case 3:
            cout << "Enter the index (where you want to delete) : ";
            cin >> index;
            Delete(v, index, &n);
        }
    }
}
