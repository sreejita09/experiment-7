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
|      strings                                       |      arrays                                       |
| it is a class that defines a objects in characters | array of characters terminated by null characters |
| it can define a number of functions                | do not have a lot of functions inbuilt            |

# 1. creating array declaration 
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

# 2. reversing an array 
~~~
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < size / 2; i++) {
        int temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }

    cout << "The reversed array is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
~~~

# output 
![image](https://github.com/user-attachments/assets/4511c6f0-8050-49a4-b6c0-6a11b0d20460)

# 3. creating InputOutput 
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

# 4. array addition and average 
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

# 5. find max and min
~~~
#include<iostream>
using namespace std;
int main() {
    int n, i, max=0;
    cout<<"number of elements: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cout<<"enter element: "<<i<<": ";
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min;
}
~~~
# output 
![image](https://github.com/user-attachments/assets/63f2ae4a-6fee-49ac-880a-54df1e3d923f)

# 6. search 
~~~
#include<iostream>
using namespace std;
int main() 
{
    int marks[5];
    int num, count = 0;

    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "Enter element to be searched: ";
    cin >> num;

    for (int i = 0; i < 5; i++) 
    {
        if (marks[i] == num) 
        {
            cout << "Position of " << num << ": " << i + 1 << endl;
            count++;
        }
    }

    if (count == 0) {
        cout << "Element not present" << endl;
    } else {
        cout << "Element is present: " << count << " times" << endl;
    }

    return 0;
}
~~~
# output
![image](https://github.com/user-attachments/assets/535c1795-e40e-44dd-9740-90f612f7e072)

# 7. string 
~~~
#include<iostream>
using namespace std;

int main()
{
    string a; 
    cout<<"enter a string: ";
    cin>>a;
    cout<<"the string is: "<<a<<endl;
    return 0;
}
~~~
# output 
![image](https://github.com/user-attachments/assets/d54e0097-b86b-448d-9e51-5eae643e1ff6)

# 8. string concaternation 
~~~
#include<iostream>
using namespace std;

int main()
{
    string a,b,c; 
    cout<<"enter a string a: ";
    cin>>a;
    cout<<"enter a string b: ";
    cin>>b;

    c=a+b;
    cout<<"concaternation of the strings is: "<<c; 

    return 0;
}
~~~
# output 
![image](https://github.com/user-attachments/assets/46fa6be2-e509-4552-88b9-48511d2e0ea1)

# 9. string reversal 
~~~
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int i;
    cout<<"enter a string: ";
    getline(cin,a);

    for(i=a.length()-1;i>=0;i--)
    {
        cout<<a[i ];
    }

    return 0; 
}
~~~
# output 
![image](https://github.com/user-attachments/assets/42147f21-9911-4d32-91c1-5faf498df7e0)

# 10. string palindrome 
~~~
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cout << "Enter a string: ";
    cin >> a;
    int n = a.length();
    int var = 1;
    
    for(int i = 0; i < n / 2; i++)
    {
        if(a[i] != a[n - i - 1])
        {
            var = 0;
            break;
        }
    }
    
    if (var == 1)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
~~~
# output
![image](https://github.com/user-attachments/assets/05755eb2-2824-4ee0-a7be-a018dbc5ffb7)
