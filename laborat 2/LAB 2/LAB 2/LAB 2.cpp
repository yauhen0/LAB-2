#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int size;
    int selection;

    cout << "Enter size of arr: ";
    cin >> size;

    int* arr = new int[size];

    cout << "1.Enter from the keyboard" << endl;
    cout << "2.Random values" << endl;

    cin >> selection;


    if (selection == 1)
    {
        cout << "Enter values" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
 
    else if (selection == 2)
    {
        int BeginRange;
        int EndRange;

        cout << "Enter range of numbers" << endl;
        cout << "from: ";
        cin >> BeginRange;
        cout << "to: ";
        cin >> EndRange;

        for (int i = 0; i < size; i++)
        {
            arr[i] = rand() % EndRange + BeginRange;
        }
    }
    
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (fabs(arr[j]) > fabs(arr[j + 1]))
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
   
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            sum = sum + arr[i];
        }
    }
    cout << "sum is: " << sum << endl;;

   
    int max_count = 0;
    int min_count = 0;
    for (int i = size - 1, j = 0; i > 0 && j < size; i--, j++)
    {
        if (arr[size - 1] == arr[i])
        {
            max_count++;
        }
        else
        {
            if (arr[0] == arr[j])
            {
                min_count++;
            }
        }
    }

    
    for (int i = size - max_count - 1; i != 0 + min_count; i--)
    {
        mult = mult * arr[i];
    }
    cout <<" Multiply:" << mult << endl;
    for (int i = 0; i < (size / 2); i++)
    {
        for (int j = 0; j < size - i - 2; j++)
        {
            if (j % 2 != 0 && fabs(arr[j]) < fabs(arr[j + 2]))
            {
                temp + arr[j];
                arr[j] = arr[j + 2];
                arr[j + 2] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;
}
