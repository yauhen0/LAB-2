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


    //цикл для ввода  с клавы
    if (selection == 1)
    {
        cout << "Enter values" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    /// цикл заполняет массив рандомными числами 
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
     //сортировка массива по возрастанию
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

    //сумма положительных элементов
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            sum = sum + arr[i];
        }
    }
    cout << "sum is: " << sum << endl;;

    //находишь позицию мин элемента 
    int min;
    min = arr[0];
    int pos_min = 0;

    for (int i = 0; i < size; i++)
    {
        if (fabs(arr[i]) < min)
        {
            pos_min = i;
            min = arr[i];
        }
    }

    //находишь макс позицию элемента
    int max;
    max = arr[0];
    int pos_max = 0;

    for (int i = 0; i < size; i++)
    {
        if (fabs(arr[i]) > max)
        {
            pos_max = i;
            max = arr[i];
        }
    }

    //произведение элементов массива, расположенных между первым максимальным по модулю и последним минимальным по модулю элементами.

    int mult = 1;

    for (int i = pos_max - 1; i != pos_min; i--)
    {
        mult = mult * arr[i];
    }
    cout << "Multiply: " << mult << endl;

    //Упорядочить элементы массива с нечетными номерами по убыванию.
    for (int i = 0; i < (size / 2); i++)
    {
        for (int j = 0; j < size - i - 2; j++)
        {
            if (j % 2 != 0 && fabs(arr[j]) < fabs(arr[j + 2]))
            {
                temp = arr[j];
                arr[j] = arr[j + 2];
                arr[j + 2] = temp;
            }
        }
    }
    // цикл выводит массив
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}