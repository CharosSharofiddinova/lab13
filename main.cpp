//Lab13
//Problem1 access each element
// #include<iostream>
// using namespace std;
// int main() {
//     int array[5]={10,20,30,40,50};
//     int *ptr=array;
//     for (int i=0;i<5;i++) {
//         cout<<*(ptr+i)<<endl;
//     }
//     return 0;
// }

//PROBLEM2 multiply by 3
 // #include<iostream>
 // using namespace std;
 // int main() {
 //     int array[6]={2,4,6,8,10,12};
 //     int *ptr=array;
 //     for(int i=0;i<6;i++) {
 //         cout<<*(ptr+i)<<" ";
 //         *(ptr+i)=*(ptr+i)*3;
 //     }
 //     cout<<endl;
 //     for(int j=0;j<6;j++) {
 //             cout<<*(ptr+j)<<" ";
 //         }
 //     return 0;
 // }

//Problem3
 // #include<iostream>
 // using namespace std;
 // int main () {
 //     int arr[4];
 //     int *ptr=arr;
 //     cout<<"Enter array elements: \n";
 //     for (int i = 0; i < 4; i++) {
 //         cin>>arr[i];
 //     }
 //     cout<<"arr[2]= "<<arr[2]<<endl;
 //     cout<<"(arr+2)= "<<*(arr+2)<<endl;
 //     return 0;
 // }

//Problem4
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5];
//     cout << "Enter 5 integers: ";
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }
//     int *ptr = arr + 4;
//     cout << "Array in reverse order: ";
//     for (int i = 0; i < 5; i++) {
//         cout << *ptr << " ";
//         ptr--;
//     }
//     cout << endl;
//     return 0;
// }

//Problem6
// #include<iostream>
// using namespace std;
// int main () {
//  int arr[4];
//  int *ptr=arr;
//  cout<<"Enter 4 integer values: \n";
//  for ( int i=0; i<4; i++) {
//   cin>>arr[i];
//   cout<<"Value: "<<*(ptr+i)<<endl;
//   cout<<"Address: "<<&ptr<<endl;
//  }
//  return 0;
// }

//Problem7
// #include<iostream>
// using namespace std;
// int main() {
//  int arr[7];
//  cout<<"Enter elements of array; \n";
//  for (int i=0; i<7; i++) {
//   cin>>arr[i];
//  }
//  int* ptr = arr;
//  cout << "Even elements are: ";
//  for (int i = 0; i < 7; i++) {
//   if (*(ptr + i) % 2 == 0) {
//    cout << *(ptr + i) << " ";
//   }
//  }
//  cout << endl;
//  return 0;
// }

//Problem8
// #include <iostream>
// using namespace std;
// int main() {
//  int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
//  int* ptr = &matrix[0][0];
//  cout << "Matrix elements: ";
//  for (int i = 0; i < 2 * 3; i++) {
//   cout << *(ptr + i)<<" ";
//  }
//  cout << endl;
//  return 0;
// }

//Problem9
// #include<iostream>
// using namespace std;
// int main () {
//  int a,b,c;
//  cout<<"Enter an integer: ";
//  cin>>a;
//  cout<<"Enter an integer: ";
//  cin>>b;
//  cout<<"Enter an integer: ";
//  cin>>c;
//  int *ptr[3]={&a,&b,&c};
//  cout<<"Values via pointer: \n";
//  for (int i=0; i<3; i++) {
//   cout<<i+1<<":"<<*ptr[i]<<endl;
//  }
//  return 0;
// }

//Problem10 didnt understand
// #include<iostream>
// using namespace std;
// int main () {
//  int arr[5];
//  cout<<"Enter array elements: ";
//  for (int i=0; i<5; i++) {
//   cin>>arr[i];
//  }
//  int *ptr=arr;
//
// }

//Problem11
// #include <iostream>
// using namespace std;
// int main() {
//  const char* suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
//  for (int i = 0; i < 4; i++) {
//   cout << suit[i] << " ";
//  }
//  cout << endl;
//  return 0;
// }

//Problem12
// #include <iostream>
// using namespace std;
// int main() {
//  const char* days[3] = {"Mon", "Tue", "Wed"};
//  for (int i = 0; i < 3; i++) {
//   cout << *(*(days + i) + 1);
//  }
//  cout << endl;
//  return 0;
// }

//Problem13
// #include <iostream>
// using namespace std;
// int main() {
//  const char* suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
//  const char* faces[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
//                           "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
//  int deck[4][13] = {0};
//  deck[0][0] = 1;
//  deck[3][1] = 1;
//  deck[1][12] = 1;
//  cout << "Selected Cards:\n";
//  for (int suit = 0; suit < 4; suit++) {
//   for (int face = 0; face < 13; face++) {
//    if (deck[suit][face] == 1) {
//     cout << faces[face] << " of " << suits[suit] << endl;
//    }
//   }
//  }
//  return 0;
// }

//problem 15
// #include <iostream>
// using namespace std;
// void greet() {
//  cout << "Hello from greet!" << endl;
// }
// void bye() {
//  cout << "Goodbye from bye!" << endl;
// }
// int main() {
//  void (*fptr)();
//  fptr = greet;
//  fptr();
//  fptr = bye;
//  fptr();
//  return 0;
// }

//Problem16
// #include <iostream>
// using namespace std;
// int add(int a, int b) {
//  return a + b;
// }
// int multiply(int a, int b) {
//  return a * b;
// }
// int main() {
//  int (*fptr)(int, int);
//  int num1, num2, choice;
//  cout << "Enter two integers: ";
//  cin >> num1 >> num2;
//
//  cout << "Choose operation: 1 for addition, 2 for multiplication: ";
//  cin >> choice;
//  if (choice == 1) {
//   fptr = add;  // Point to the add function
//   cout << "Addition: " << fptr(num1, num2) << endl;
//  }
//  else if (choice == 2) {
//   fptr = multiply;
//   cout << "Multiplication: " << fptr(num1, num2) << endl;
//  }
//  else {
//   cout << "Invalid choice!" << endl;
//  }
//  return 0;
// }

//Problem17
// #include <iostream>
// using namespace std;
// int add(int a, int b) {
//  return a + b;
// }
// int multiply(int a, int b) {
//  return a * b;
// }
// void calculate(int (*op)(int, int), int x, int y) {
//  int result = op(x, y);
//  cout << "Result: " << result << endl;
// }
// int main() {
//  int num1, num2, choice;
//  cout << "Enter two integers: ";
//  cin >> num1 >> num2;
//  cout << "Choose operation: 1 for addition, 2 for multiplication: ";
//  cin >> choice;
//  if (choice == 1) {
//   calculate(add, num1, num2);
//  }
//  else if (choice == 2) {
//   calculate(multiply, num1, num2);
//  }
//  else {
//   cout << "Invalid choice!" << endl;
//  }
//  return 0;
// }

//Problem18
// #include <iostream>
// using namespace std;
// int add(int a, int b) {
//  return a + b;
// }
// int multiply(int a, int b) {
//  return a * b;
// }
// int main() {
//  int num1, num2, choice;
//  int (*ops[])(int, int) = {add, multiply};
//  cout << "Enter two integers: ";
//  cin >> num1 >> num2;
//  cout << "Choose operation: 1 for addition, 2 for multiplication: ";
//  cin >> choice;
//  if (choice == 1) {
//   cout << "Result: " << ops[0](num1, num2) << endl;
//  }
//  else if (choice == 2) {
//   cout << "Result: " << ops[1](num1, num2) << endl;
//  }
//  else {
//   cout << "Invalid choice!" << endl;
//  }
//  return 0;
// }







