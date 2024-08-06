# experiment-7
# Aim: 
To study and implement C++ Arrays and Strings

# Software used
Vs code 

# Theory 
An array stores a fixed-size sequential collection of elements of the same type. All arrays consist of contiguous memory locations. 
The lowest address corresponds to the first element and the highest address to the last element
To declare an array in C++, we must specify the type of elements and the number of elements required by an array −: type arrayName [ array_size ]
You can initialize C++ array elements either one by one or using a single statement as follows −: int arr[5] = {1000, 2, 3, 17, 50}
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

# creating array declaration 
~~~
#include<iostream>
using namespace std;

int main()
{
    int array1[5] = {1,6,10,34,3}, array2[3] = {2,8,4}, array3[2] = {5,6};

    cout<<"traditional method"<<endl;
    for (int i=0;i<3;i++)
    {
        cout<<array1[i]<<" "<<endl;
    }

    cout<<"modern method"<<endl;
    for(int j : array2)
    {
        cout<<j<<" ";
    }
    return 0;
}
~~~
# output
![image](https://github.com/user-attachments/assets/6e3f9235-171a-47eb-85cd-03eb3ed48378)

# reversing an array 
~~~
#include<iostream>
using namespace std;

int main() 
{
    int n, i, j=0, k, l, temp;
    cout<<"Enter size of array: ";
    cin>>n;
    int a1[n], a2[n];

    for(i=0;i<5;i++) 
    {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
    cout<<"\nArray given by user: ";
    for(l=0;l<5;l++) 
    {
        cout<<a1[l];
    }
    cout<<endl;
    for(k=4;k>=0;k--) 
    {
        temp = a1[k];
        a2[j] = temp;
        j++;
    }
    cout<<"Reversed array: ";
    for(l=0;l<5;l++) {
        cout<<a2[l];
    }
}
~~~

# output 
![image](https://github.com/user-attachments/assets/4511c6f0-8050-49a4-b6c0-6a11b0d20460)

# creating InputOutput 
~~~
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
   
    int array[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
    return 0;
}
~~~
# output 
![image](https://github.com/user-attachments/assets/b3ef6ed9-9867-4ce8-a10a-1bdaea0ddbc5)

# array addition and average 
~~~
#include <iostream>
using namespace std;

int main() 
{
  int numbers[] = {6,7,8,9,3,5};

  int sum = 0;
  int count = 0;
  int average;

  cout << "The numbers are: ";

  for (const int n : numbers) 
  {
    cout << n << "  ";
    sum += n;
    ++count;
  }

  cout << "Sum = " << sum << endl;

  average = sum / count;
  cout << "Their Average = " << average << endl;
  return 0;
}
~~~
# output 
![image](https://github.com/user-attachments/assets/3994981d-35e1-41ac-bd19-b20917d2f5c1)


