// Пользователь вводит с клавиатуры7 целых чисел.Напишите
// программу, которая определяет максимальное из этих 7 чисел.

#include <iostream>
using namespace std;

/// <summary>
/// Метод поиска наибольшей цифры в числе
/// </summary>
/// <param name="num">Число введённое пользователем</param>
/// <returns>Int наибольшая цифры в числе</returns>
int FindMaxDigit(int num) 
{
    int input = num;
    int maxDigit = 0;

    while (input) 
    {
        int digit = input % 10;

        if (digit > maxDigit) 
            maxDigit = digit;

        input /= 10;
    }

    return maxDigit; 
}

/// <summary>
/// Метод валидации (проверки введённого числа 7 цифр) 
/// </summary>
/// <param name="num">Число введённое пользователем</param>
/// <returns>Bool валидность ввода пользователем</returns>
bool ValidationInput(int num)
{
    if (num >= 1000000 && num <= 9999999)
        return true;
    else
        return false;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int userInput = 0;
    bool isInputInvalid = false;

    cout << "Введи семизначное число, я найду в нём самую большую цифру : ";

    while (!isInputInvalid)   {
        
        cin >> userInput;
        isInputInvalid = ValidationInput(userInput);

        if (!isInputInvalid)
            cout << "Вы ввели не семизначное число, попробуйте ещё раз : ";
        else
            break;
    }   

    int result = FindMaxDigit(userInput);

    cout << "В числе " << userInput << " Самая большая цифра " << result << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------" << endl;
}

