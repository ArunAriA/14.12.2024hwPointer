#include <iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

//ВКАЗІВНИКИ та ДИНАМІЧНА ПАМ'ЯТЬ (new/delte)


//№1
//
//Дано два масиви : А[M] і B[N](M і N вводяться з клавіатури).
//Необхідно створити третій масив мінімально можливого розміру,
//у якому потрібно зібрати елементи масиву A, які не включаються до масиву B, без повторень.
//
//Приклад :
//	A = [1, 2, 3, 4, 3, 2, 1]
//	B = [3, 4, 5, 6]
//	Результат :
//	Елементи A, яких немає в B : [1, 2]
//
//void enterNum(int size, int* arr)
//{
//	cout << "Enter Num for arr :";
//	for (int i = 0; i < size; i++)
//	{
//		cin >> *(arr + i);
//	}
//}
//
//int sizeArr(int size1, int* arr1, int size2, int* arr2)
//{
//    int count = 0;
//    for (int i = 0; i < size1; i++)
//    {
//        bool unik = true;
//        for (int j = 0; j < size2; j++)
//        {
//            if (*(arr1 + i) == *(arr2 + j))
//            {
//                unik = false;
//                break;
//            }
//        }
//        if (unik)
//        {
//            count++;
//        }
//    }
//    return count;
//}
//
//void fillArr(int size1, int* arr1, int size2, int* arr2, int* arr3)
//{
//    int index = 0;
//    for (int i = 0; i < size1; i++)
//    {
//        bool unik = true;
//        for (int j = 0; j < size2; j++)
//        {
//            if (*(arr1 + i) == *(arr2 + j))
//            {
//                unik = false;
//                break;
//            }
//        }
//        if (unik)
//        {
//            arr3[index] = *(arr1 + i);
//            index++;
//        }
//    }
//}
//
//
//
//int main()
//{
//	srand(time(NULL));
//	int size1, size2;
//	cout << "Enter size for Array: ";
//	cin >> size1 >> size2;
//	int* arr1 = new int[size1];
//	int* arr2 = new int[size2];
//
//
//
//
//	enterNum(size1, arr1);
//	enterNum(size2, arr2);
//	
//	int sizeNum = sizeArr(size1, arr1, size2, arr2);
//
//    int* arr3 = new int[sizeNum];
//
//	fillArr(size1, arr1, size2, arr2, arr3);
//
//
//    cout << "Unikalnie elementi v pervom masive:\n";
//    if (sizeNum == 0) {
//        cout << "Unikalnih elementov ne naydeno." << endl;
//    }
//    else {
//        cout << "[ ";
//        for (int i = 0; i < sizeNum; i++)
//        {
//            cout << arr3[i];
//            if (i < sizeNum - 1)
//                cout << ", ";
//        }
//        cout << " ]" << endl;
//    }
//
//	delete[] arr1;
//	delete[] arr2;
//	delete[] arr3;
//}























//	№2
//	Дано два масиви : А[M] і B[N](M і N вводяться з клавіатури).
//	Необхідно створити третій масив мінімально можливого розміру,
//	у якому потрібно зібрати елементи масивів A і B, які не є загальними для них, без повторень.
//	Тобто потрібно сформувати третій масив, що містить тільки ті елементи, які унікальні для кожного з двох масивів, без дублювання.
//
//	Приклад :
//	A = [1, 2, 3, 4]
//	B = [3, 4, 5, 6]
//	Результат : [1, 2, 5, 6]


//void enterNum(int size, int* arr)
//{
//    cout << "Vvedite znacheniya dlya masivov :";
//    for (int i = 0; i < size; i++)
//    {
//        cin >> *(arr + i);
//    }
//}
//
//int sizeArr(int size1, int* arr1, int size2, int* arr2)
//{
//    int count = 0;
//    for (int i = 0; i < size1; i++)
//    {
//        bool unik = true;
//        for (int j = 0; j < size2; j++)
//        {
//            if (*(arr1 + i) == *(arr2 + j))
//            {
//                unik = false;
//                break;
//            }
//        }
//        if (unik)
//        {
//            count++;
//        }
//    }
//    for (int i = 0; i < size2; i++)
//    {
//        bool unik = true;
//        for (int j = 0; j < size1; j++)
//        {
//            if (*(arr1 + j) == *(arr2 + i))
//            {
//                unik = false;
//                break;
//            }
//        }
//        if (unik)
//        {
//            count++;
//        }
//    }
//    return count;
//}
//
//void fillArr(int size1, int* arr1, int size2, int* arr2, int* arr3)
//{
//    int index = 0;
//    for (int i = 0; i < size1; i++)
//    {
//        bool unik = true;
//        for (int j = 0; j < size2; j++)
//        {
//            if (*(arr1 + i) == *(arr2 + j))
//            {
//                unik = false;
//                break;
//            }
//        }
//        if (unik)
//        {
//            arr3[index] = *(arr1 + i);
//            index++;
//        }
//    }
//
//    for (int i = 0; i < size2; i++)
//    {
//        bool unik = true;
//        for (int j = 0; j < size1; j++)
//        {
//            if (*(arr1 + j) == *(arr2 + i))
//            {
//                unik = false;
//                break;
//            }
//        }
//        if (unik)
//        {
//            arr3[index] = *(arr2 + i);
//            index++;
//        }
//    }
//}
//
//
//
//int main()
//{
//    srand(time(NULL));
//    int size1, size2;
//    cout << "Vvedite razmer dlya 2 massivov: ";
//    cin >> size1 >> size2;
//    int* arr1 = new int[size1];
//    int* arr2 = new int[size2];
//
//
//
//
//    enterNum(size1, arr1);
//    enterNum(size2, arr2);
//
//    int sizeNum = sizeArr(size1, arr1, size2, arr2);
//
//
//    cout << endl << "Kolichestvo unikalnih elementov(Razmer massiva) = " << sizeNum << endl;
//    int* arr3 = new int[sizeNum];
//
//    fillArr(size1, arr1, size2, arr2, arr3);
//
//
//    cout << "Unikalnie elementi v masive:\n";
//    if (sizeNum == 0) {
//        cout << "Unikalnih elementov ne naydeno." << endl;
//    }
//    else {
//        cout << "[ ";
//        for (int i = 0; i < sizeNum; i++)
//        {
//            cout << arr3[i];
//            if (i < sizeNum - 1)
//                cout << ", ";
//        }
//        cout << " ]" << endl;
//    }
//
//    delete[] arr1;
//    delete[] arr2;
//    delete[] arr3;
//
//    return 0;
//}



//	№3
//	Дано два масиви : А[M] і B[N](M і N вводяться з клавіатури).
//	Необхідно створити третій масив мінімально можливого розміру,
//	у якому потрібно зібрати елементи обох масивів.


void enterNum(int size, int* arr)
{
    cout << "Vvedite znacheniya dlya masivov :";
    for (int i = 0; i < size; i++)
    {
        cin >> *(arr + i);
    }
}

void unionArr(int size1, int* arr1, int size2, int* arr2, int* arr3)
{
    int index = 0;

    for (int i = 0; i < size1; i++)
    {
        arr3[index++] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        arr3[index++] = arr2[i];
    }
}

int main()
{
    int size1, size2;
    cout << "Vvedite razmer dlya 2 massivov: ";
    cin >> size1 >> size2;
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];

    enterNum(size1, arr1);
    enterNum(size2, arr2);

    int* arr3 = new int[size1 + size2];

    unionArr(size1, arr1, size2, arr2, arr3);

    cout << "\nSliyanie massivov:\n";
    cout << "Rezultat: [ ";
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << arr3[i];
        if (i < size1 + size2 - 1)
            cout << " | ";
    }
    cout << " ]" << endl;

	return 0;
}
