//Task 1:
#include <iostream>
using namespace std;


//Task 2:

int task2()
{
    
    int score = 70;
    int *ptr2 = &score; // stores the address of score
    *ptr2 = 100; // changes the value of score to 100
    cout << score << endl;
    return 0;
}


//Task 3:

void swapNum (int &i, int &j);
int task3()
{
  int num1 = 20;
  int num2 = 30;
  swapNum (num1, num2);
  cout << "num1 = " << num1 << endl;
   cout << "num2 = " << num2 << endl;
  return 0;
}
void swapNum (int &i, int &j)
{
    int temp = i;
    i = j;
    j = temp;
}



//Task 4:

int task4()
{
  int *dynamicInt = new int(25);
  cout << *dynamicInt << endl; // print 25
  delete dynamicInt;
   return 0;
}


//Task 5:

int task5() {
    int size = 5;

    // Dynamically allocate an array of 5 integers
    int* numbers = new int[5]{1, 2, 3, 4, 5};

    // Loop through the dynamic array to calculate the sum
    int sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        sum += numbers[i];
    }

        cout << "Sum = " << sum << endl;
   

    return 0;
}


int main()
{
    
    int num = 50;
    cout << "value of num = " << num << endl;
    int *ptr = &num; // ptr stores the address of num
    cout << "address of num = " << *ptr << endl;
  return 0;
}
//g++ class1.cpp -o program && ./program