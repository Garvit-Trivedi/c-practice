// 1. C++ Code to Check Grade Based on Score. This C++ program determines the grade of a student based on their score.

//  #include <iostream>
// using namespace std;

// char getGrade(int score) {
//     if (score >= 90) {
//         return 'A';
//     } else if (score >= 80) {
//         return 'B';
//     } else if (score >= 70) {
//         return 'C';
//     } else if (score >= 60) {
//         return 'D';
//     } else {
//         return 'F';
//     }
// }

// int main() {
//     int score;
//     cin >> score;
//     cout << getGrade(score) << endl;
//     return 0;
// }


// 2. Write a function to determine whether a given number is positive, negative, or zero.

// #include <iostream>
// using namespace std;

// void checkNumber(int num) {
//     if (num > 0) {
//         cout << "Positive" << endl;
//     } else if (num < 0) {
//         cout << "Negative" << endl;
//     } else {
//         cout << "Zero" << endl;
//     }
// }

// int main() {
//     int num;
//     cin >> num;
//     checkNumber(num);
//     return 0;
// }


// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.

// #include <iostream>
// using namespace std;

// void checkTriangleType(int a, int b, int c) {
//     if (a <= 0 || b <= 0 || c <= 0) {
//         cout << "Invalid sides" << endl;
//         return;
//     }

//     if (a == b && b == c) {
//         cout << "Equilateral" << endl;
//     } else if (a == b || b == c || a == c) {
//         cout << "Isosceles" << endl;
//     } else {
//         cout << "Scalene" << endl;
//     }
// }

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     checkTriangleType(a, b, c);
//     return 0;
// }


// 4. Write a function to check whether a given character is a vowel or consonant.
// #include <iostream>  


// #include <iostream>
// using namespace std;

// void checkVowelOrConsonant(char ch) {
//     ch = tolower(ch);
//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//         cout << "Vowel" << endl;
//     } else if ((ch >= 'a' && ch <= 'z')) {
//         cout << "Consonant" << endl;
//     } else {
//         cout << "Invalid character" << endl;
//     }
// }

// int main() {
//     char ch;
//     cin >> ch;
//     checkVowelOrConsonant(ch);
//     return 0;
// }


// 5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older.

// #include <iostream>
// using namespace std;

// void checkEligibilityToVote(int age) {
//     if (age >= 18) {
//         cout << "Eligible to vote" << endl;
//     } else {
//         cout << "Not eligible to vote" << endl;
//     }
// }

// int main() {
//     int age;
//     cin >> age;
//     checkEligibilityToVote(age);
//     return 0;
// }


// 6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; otherwise, print "Login failed."

// #include <iostream>
// #include <string>
// using namespace std;

// void checkLogin(string username, string password) {
//     if (username == "admin" && password == "1234") {
//         cout << "Login successful" << endl;
//     } else {
//         cout << "Login failed" << endl;
//     }
// }

// int main() {
//     string username, password;
//     cin >> username >> password;
//     checkLogin(username, password);
//     return 0;
// }


// 7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:


// #include <iostream>
// #include <string>
// using namespace std;

// void trafficLightAction(string color) {
//     if (color == "red") {
//         cout << "Stop" << endl;
//     } else if (color == "yellow") {
//         cout << "Slow down" << endl;
//     } else if (color == "green") {
//         cout << "Go" << endl;
//     } else {
//         cout << "Invalid color" << endl;
//     }
// }

// int main() {
//     string color;
//     cin >> color;
//     trafficLightAction(color);
//     return 0;
// }


// 8. Find the Average of an Array. Example: Input: arr=[1,2,3,4,5];

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int sum = 0;
//     int size = 5;

//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }

//     double average = (double)sum / size;
//     cout << "Average: " << average << endl;

//     return 0;
// }


// 9. Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].


// #include <iostream>
// #include <algorithm>
// using namespace std;

// void sortArray(int arr[], int size) {
//     sort(arr, arr + size);
// }

// int main() {
//     int nums[] = {4, 2, 8, 5, 1};
//     int size = sizeof(nums) / sizeof(nums[0]);

//     sortArray(nums, size);

//     cout << "Sorted Array: ";
//     for (int i = 0; i < size; i++) {
//         cout << nums[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// 10. Given an array of integers, count how many numbers are even and how many are odd.

// #include <iostream>
// using namespace std;

// void countEvenOdd(int arr[], int size) {
//     int evenCount = 0, oddCount = 0;

//     for (int i = 0; i < size; i++) {
//         if (arr[i] % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//     }

//     cout << "Even numbers: " << evenCount << endl;
//     cout << "Odd numbers: " << oddCount << endl;
// }

// int main() {
//     int arr[] = {4, 2, 8, 5, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     countEvenOdd(arr, size);

//     return 0;
// }


// 11. Remove duplicate elements from the array arr = [1, 2, 2, 3, 4, 4, 5] and print the updated array.

// #include <iostream>
// #include <set>
// using namespace std;

// void removeDuplicates(int arr[], int &size) {
//     set<int> uniqueElements;

    
//     for (int i = 0; i < size; i++) {
//         uniqueElements.insert(arr[i]);
//     }

   
//     int index = 0;
//     for (auto element : uniqueElements) {
//         arr[index++] = element;
//     }

  
//     size = uniqueElements.size();
// }

// int main() {
//     int arr[] = {1, 2, 2, 3, 4, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     removeDuplicates(arr, size);

//     cout << "Updated Array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// 12. Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array.

// #include <iostream>
// using namespace std;

// void addToEnd(int arr[], int &size, int value) {
//     arr[size] = value;
//     size++;
// }

// int main() {
//     int arr[6] = {1, 2, 3, 4, 5}; 
//     int size = 5; 
//     addToEnd(arr, size, 6);

//     cout << "Updated Array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

// #include <iostream>
// using namespace std;

// bool containsNumber(int arr[], int size, int number) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == number) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     bool result = containsNumber(arr, size, 3);
//     cout << (result ? "true" : "false") << endl;
//     return 0;
// }


// 14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].

// m-1
// #include <iostream>
// using namespace std;

// int main() {
//     int nums[] = {1, 2, 3, 4};
//     int size = 4;
//     int newNums[size + 1];

//     newNums[0] = 0;
//     for (int i = 0; i < size; i++) {
//         newNums[i + 1] = nums[i];
//     }

//     for (int i = 0; i <= size; i++) {
//         cout << newNums[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// m-2
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
//     int nums[] = {1, 2, 3, 4};
//     int size = 4;
//     int newNums[size + 1];

//     newNums[0] = 0;
//     memmove(newNums + 1, nums, size * sizeof(int));

//     for (int i = 0; i <= size; i++) {
//         cout << newNums[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// m-3
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> nums = {1, 2, 3, 4};
//     nums.insert(nums.begin(), 0);

//     for (int i = 0; i < nums.size(); i++) {
//         cout << nums[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
//  m-4
//  #include <iostream>
// using namespace std;

// int main() {
//     int nums[] = {1, 2, 3, 4};
//     int size = 4;
//     int* newNums = new int[size + 1];

//     newNums[0] = 0;
//     for (int i = 0; i < size; i++) {
//         newNums[i + 1] = nums[i];
//     }

//     for (int i = 0; i <= size; i++) {
//         cout << newNums[i] << " ";
//     }
//     cout << endl;

//     delete[] newNums;
//     return 0;
// }

// 15. Remove the Last element Input: nums = [1, 2, 3, 4,5]; Output: nums = [1,2,3,4].
//  m-1
// #include <iostream>
// using namespace std;

// void removeLast(int arr[], int& size) {
//     size--;
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int nums[] = {1, 2, 3, 4, 5};
//     int size = 5;
//     removeLast(nums, size);
//     return 0;
// }
 
//  m-2
//  #include <iostream>
// #include <vector>
// using namespace std;

// void removeLast(vector<int>& nums) {
//     nums.pop_back();
//     for (int i = 0; i < nums.size(); i++) {
//         cout << nums[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<int> nums = {1, 2, 3, 4, 5};
//     removeLast(nums);
//     return 0;
// }


// m-3
// #include <iostream>
// using namespace std;

// void removeLast(int arr[], int& size) {
//     int* newArr = new int[size - 1];
//     for (int i = 0; i < size - 1; i++) {
//         newArr[i] = arr[i];
//     }

//     for (int i = 0; i < size - 1; i++) {
//         cout << newArr[i] << " ";
//     }
//     cout << endl;

//     delete[] newArr;
//     size--;
// }

// int main() {
//     int nums[] = {1, 2, 3, 4, 5};
//     int size = 5;
//     removeLast(nums, size);
//     return 0;
// }



// 16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.

// #include <iostream>
// using namespace std;

// bool areAllPositive(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] <= 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int arr[] = {3, 5, 9, 1, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << (areAllPositive(arr, size) ? "true" : "false") << endl;
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// bool areAllPositive(int arr[], int size) {
//     return all_of(arr, arr + size, [](int num) { return num > 0; });
// }

// int main() {
//     int arr[] = {3, 5, 9, 1, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << (areAllPositive(arr, size) ? "true" : "false") << endl;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool areAllPositive(const vector<int>& nums) {
//     return all_of(nums.begin(), nums.end(), [](int num) { return num > 0; });
// }

// int main() {
//     vector<int> nums = {3, 5, 9, 1, 7};
//     cout << (areAllPositive(nums) ? "true" : "false") << endl;
//     return 0;
// }


// 17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.

// #include <iostream>
// using namespace std;

// void countPositiveNegative(int arr[], int size) {
//     int positiveCount = 0, negativeCount = 0;
    
//     for (int i = 0; i < size; i++) {
//         if (arr[i] > 0) positiveCount++;
//         else if (arr[i] < 0) negativeCount++;
//     }

//     cout << "Positive numbers: " << positiveCount << endl;
//     cout << "Negative numbers: " << negativeCount << endl;
// }

// int main() {
//     int arr[] = {1, -2, 3, -4, 5, -6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     countPositiveNegative(arr, size);
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// void countPositiveNegative(int arr[], int size) {
//     int positiveCount = count_if(arr, arr + size, [](int num) { return num > 0; });
//     int negativeCount = count_if(arr, arr + size, [](int num) { return num < 0; });

//     cout << "Positive numbers: " << positiveCount << endl;
//     cout << "Negative numbers: " << negativeCount << endl;
// }

// int main() {
//     int arr[] = {1, -2, 3, -4, 5, -6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     countPositiveNegative(arr, size);
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void countPositiveNegative(const vector<int>& nums) {
//     int positiveCount = count_if(nums.begin(), nums.end(), [](int num) { return num > 0; });
//     int negativeCount = count_if(nums.begin(), nums.end(), [](int num) { return num < 0; });

//     cout << "Positive numbers: " << positiveCount << endl;
//     cout << "Negative numbers: " << negativeCount << endl;
// }

// int main() {
//     vector<int> nums = {1, -2, 3, -4, 5, -6};
//     countPositiveNegative(nums);
//     return 0;
// }


// 18. Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50]. Output:[10,30,50]

// #include <iostream>
// using namespace std;

// void printEvenIndexes(int arr[], int size) {
//     for (int i = 0; i < size; i += 2) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printEvenIndexes(arr, size);
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// void printEvenIndexes(const vector<int>& arr) {
//     for (int i = 0; i < arr.size(); i += 2) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<int> arr = {10, 20, 30, 40, 50};
//     printEvenIndexes(arr);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void printEvenIndexes(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (i % 2 == 0) {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printEvenIndexes(arr, size);
//     return 0;
// }


// 19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

// #include <iostream>
// using namespace std;

// bool isSortedAscending(int arr[], int size) {
//     for (int i = 1; i < size; i++) {
//         if (arr[i] < arr[i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << (isSortedAscending(arr, size) ? "true" : "false") << endl;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     cout << (is_sorted(arr.begin(), arr.end()) ? "true" : "false") << endl;
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << (is_sorted(arr, arr + size) ? "true" : "false") << endl;
//     return 0;
// }


// 20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].

// #include <iostream>
// using namespace std;

// void findDifference(int arr[], int size) {
//     int max = arr[0], min = arr[0];

//     for (int i = 1; i < size; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }

//     cout << "Difference: " << max - min << endl;
// }

// int main() {
//     int arr[] = {80, 30, 70, 50, 20};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     findDifference(arr, size);
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void findDifference(const vector<int>& arr) {
//     int max = *max_element(arr.begin(), arr.end());
//     int min = *min_element(arr.begin(), arr.end());
//     cout << "Difference: " << max - min << endl;
// }

// int main() {
//     vector<int> arr = {80, 30, 70, 50, 20};
//     findDifference(arr);
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// void findDifference(int arr[], int size) {
//     int max = *max_element(arr, arr + size);
//     int min = *min_element(arr, arr + size);
//     cout << "Difference: " << max - min << endl;
// }

// int main() {
//     int arr[] = {80, 30, 70, 50, 20};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     findDifference(arr, size);
//     return 0;
// }

// 21. Write a program to convert a given string to uppercase.Example: Input: "hello", Output: "HELLO".

// #include <iostream>
// #include <string>
//  using namespace std;

// void Case(string& str){
//     for(int i=0; i< str.length();i++){
//         str[i]=toupper(str[i]);
//     }
// }

// int main(){
//     string str= "hello";
//     Case(str);
    
//     cout << "uppercase" << str << endl;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <string>
//  using namespace std;

// void Case(string& str){
//    transform(str.begin(),str.end(),str.begin(), ::toupper);
// }

// int main(){
//     string str= "hello";
//     Case(str);
    
//     cout << "uppercase" << str << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;


// string Case(string str) {
//     for (int i = 0; i < str.length(); i++) { 
       
//         if (str[i] >= 'a' && str[i] <= 'z') { 
            
//             str[i] = str[i] - 32; 
//         }
//     }
//     return str;
// }

// int main() {
//     string input = "hello"; 
//     cout << "Uppercase : " << Case(input) << endl;
//     return 0;
// }

// 22. Write a program to find the length of a given string.Example:Input:inputString = "Hello, World!"; Output:13;

// #include <iostream>
// using namespace std;


// int len(string str){
//     int length=0;
    
//     while(str[length] != '\0'){
//         length++;
//     }
//     return length;
// }

// int main() {
//     string str = "hello"; 
//     cout << "length : " << len(str) << endl;
//     return 0;
// }

// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".

// #include <iostream>
// using namespace std;


// string add(string str1, string str2){
//     return str1 + str2;
// }
// int main() {
//     string str1 = "hello";
//     string str2 = "world";
//     cout << "con.  : " << add(str1, str2) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;


// string add(string str1, string str2) {
//     str1.append(str2); 
//     return str1; 
// }

// int main() {
//     string str1 = "hello";
//     string str2 = " world";
//     cout << "Con.: " << add(str1, str2) << endl;
//     return 0;
// }





// 30.Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately. Example : Input: n = 132456, Output: 12, 9

    
// #include <iostream>
// using namespace std;

// void sum(int n){
    
//     int even=0;
//     int odd=0;
    
//     while(n!=0){
//         int digit = n%10;
        
//         if(digit%2==0){
//             even+=digit;
//         }
//         else{
//             odd+=digit;
//         }
//         n/=10;
    
// }

// cout << "even sum: "<< even << endl;
// cout << "odd sum " << odd << endl;
// }

// int main(){

//     int n=123;
//     sum(n);
    
//     return 0;
// }



// 29.Write a program to find all pairs in an array whose sum is equal to a given number.: Example 1: Input: nums = [2,7,11,15], target = 9 , Output: [0,1].

// #include <iostream>
// #include <vector>
// using namespace  std;
//  int js(vector<int>arr, int target){
//      int n=arr.size();
//      int count=0;
     
//      for(int i=0;i<n;i++){
//          for(int j=i+1;j<n;j++){
//              if(arr[i]+arr[j]==target){
//                  count++;
//              }
//          }
//      }
//      cout<< count;
//      return 0;
//  }
 
//  int main(){
//      vector<int>arr={1,2,3,4,5};
//      int target=6;
//      js(arr,target);
//      return 0;
//  }


// 28. Write a function that takes two numbers and prints the largest one.Example:Input:number1 = 10;, Number2= 20; Output:20;

// #include <iostream>
// using namespace std;


// void Number(int num1, int num2) {
   
//     if (num1 > num2) {
//         cout << "The largest number is: " << num1 << endl;
//     } else {
//         cout << "The largest number is: " << num2 << endl;
//     }
// }

// int main() {
//     int num1 = 10; 
//     int num2 = 20; 

   
//     Number(num1, num2);

//     return 0;
// }



// // // // // // // // // // Que-28

// // // // Approach-1

// #include <iostream>
// using namespace std;

// void large(int num1, int num2) {
//     if (num1 > num2) {
//         cout << num1 << endl;
//     } else {
//         cout << num2 << endl;
//     }
// }

// int main() {
//     int num1 = 10;
//     int num2 = 20;
//     large(num1, num2);
//     return 0;
// }



// // // // Approach-2



// #include <iostream>
// using namespace std;

// void large(int num1, int num2) {
//     cout << (num1 > num2 ? num1 : num2) << endl;
// }

// int main() {
//     int num1=10;
//     int num2=20;
//     large(num1,num2);
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;


// void Max(int number1, int number2) {
  
//     cout << "The largest number is: " << max(number1, number2) << endl;
// }

// int main() {
//     int number1 = 10; 
//     int number2 = 20; 
    
//     Max(number1, number2);

//     return 0;
// }



// 24. Write a program to remove whitespace from both ends of a string. Example: Input: " hello ", Output: "hello".

// #include <iostream>
// using namespace std;

// void trim(char str[]) {
//     int start = 0, end = 0;
//     while (str[start] == ' ') start++;
//     for (end = start; str[end] != '\0'; end++);
//     end--;
//     while (str[end] == ' ') end--;
//     for (int i = start; i <= end; i++) {
//         cout << str[i];
//     }
// }

// int main() {
//     char input[] = " hello ";
//     trim(input);
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
//  #include <cctype>
//  using namespace std;
 
//  string hello(string str){
//      str.erase(str.begin(),find_if(str.begin(),str.end(),[](unsigned char ch){
//          return !isspace(ch);
//      }));
     
//      str.erase(find_if(str.rbegin(), str.rend(),[](unsigned char ch){return !isspace(ch);}).base(), str.end());
//      return str;
//  }
 
//  int main(){
//      string str ="  hello ";
//      cout << "remove: " << hello(str) << endl;
//      return 0;
//  }
 
 


// #include <iostream>
// #include <algorithm>
// #include <cctype>
// using namespace std;

// string hello(string str){
//     auto start = find_if_not(str.begin(), str.end(), [](unsigned char ch){return !isspace(ch);});
    
//     auto end = find_if_not(str.rbegin(), str.rend(),[](unsigned char ch){
//         return  !isspace(ch);
//     }).base();
//     return(start < end ? string(start, end): "");
// }

// int main(){
//     string str = "  helleo  ";
//     cout << "remove" << hello(str);
//     return 0;
// }






// 25. Write a program to split a string into an array of words. Example: Input: inputString = "Hello world, welcome to JavaScript!";Output:'Hello', 'world', 'welcome', 'to', 'JavaScript'




// #include <iostream>
// #include <cstring>
// using namespace std;

// void split(string str) {
//     int start = 0;
//     int length = str.length();

//     for (int i = 0; i < length; i++) {
//         if (str[i] == ' ' || ispunct(str[i])) {
//             if (i > start) {
//                 cout << "'" << str.substr(start, i - start) << "', ";
//             }
//             start = i + 1;
//         }
//     }

//     if (start < length) {
//         cout << "'" << str.substr(start) << "'" << endl;
//     }
// }

// int main() {
//     string str = "Hello world, welcome to JavaScript!";
//     split(str);
//     return 0;
// }

// 27. Write a program to extract the file extension from a given filename.Example: Input: "document.pdf", Output: "pdf".

// #include <iostream>
// #include <string>
// using namespace Std;

// string hello(string filename){
//     int pos=filename.rfind(".");
//     cout << "pos" << pos << endl;
//     return filename.substr(pos+1);
// }

// int main(){
//     string filename="document.pdf";
//     cout << "filename" << hello(filename) << end;
//     return 0;
// }



// #include<iostream>
// #include<string>
// using namespace std;

// string extension(string filename) {
//     size_t pos = filename.find_last_of('.');
//     if (pos != string::npos && pos != 0) {
//         return filename.substr(pos + 1);
//     }
//     return "";
// }

// int main() {
//     string filename = "coding.gita.students";
//     cout << extension(filename) << endl;
    
//     return 0;
// }


// 26. Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"), Output: true.



// #include <iostream>
// #include <string>
// using namespace std;

// bool endsWith(string str, char ch) {
//     return str[str.length() - 1] == ch;
// }

// int main() {
//     string inputString = "codinggita";
//     char ch = 'a';

//     cout << (endsWith(inputString, ch) ? "true" : "false") << endl; 
//     return 0;
// }





// 40. Given two numbers, generate an array containing all numbers between them (inclusive). Example: Input: 1,5 Output: [1, 2, 3, 4, 5].

// #include <iostream>
// using namespace std;
// int main() {
// int a=1;
// int b=5;

// int size=b-a+1;
 
//  int result[size];
//  for(int i=0;i<size;i++){
//      result[i]=a+i;
//  }
 
//  cout << "[ ";
//  for(int i=0;i<size;i++){
//      cout << result[i];
//      if(i!=size-1) cout << ", ";
//  }
//  cout << "]";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// void hello(int a, int b){
//     if(a>b) return ;
    
//     cout << a;
//     if(a!=b) cout << ", ";
    
//     hello(a+1,b);
// }

// int main(){
//     int a=1;
//     int b=5;
//     cout << "[";
//     hello(a,b);
//     cout << "]";
//     return 0;
// }



// 31. Write a program to repeat a string a specified number of times.Example: Input: ("hello", 3), Output: "hellohellohello".

// #include <iostream>
// using namespace std;

// string  reapeat(string str, int n){
//     string result="";
//     for(int i=0;i<n;i++){
//         result+=str;
//     }
    

//     return result;
// }

// int main(){
//     string str="garvit";
//     int n=2;
    
//     cout << "reapeat the string: " << reapeat(str,n);
//     return 0;
// }


// #include <iostream>
// #include<sstream>

// using namespace std;

// string reapeat(string str, int n){
//     stringstream ss;
    
//     for(int i=0;i<n;i++){
//         ss<< str;
//     }
//     return ss.str();
// }

// int main(){
//     string str="garvit";
//     int n=2;
    
//     cout << "repeat: " << reapeat(str, n);
//     return 0;
// }


// 32.Write a program that categorizes a person’s age group based on the given age:




// #include <iostream>
// using namespace std;

// void group(int age){
//     if(age < 13){
//         cout <<"child " << endl;
//     }
//     else if(age >=13 && age <=19){
//         cout << "teenager" << endl;
//     }
//       else if (age >= 20 && age <= 59) {
//          cout << "Adult" << endl;
//       }
//       else if (age >= 60) {
//         cout << "Senior" << endl;}
//         else {
//         cout << "Invalid age" << endl;}
// }

// int main(){
//     int age =45;
//     group(age);
//     return 0;
// }





//#include <iostream>
//using namespace std;
//
//int main() {
//    int age;
//    cout << "Enter age: ";
//    cin >> age;
//    string category = (age < 0) ? "Invalid age" :
//                      (age < 13) ? "Child" :
//                      (age <= 19) ? "Teenager" :
//                      (age <= 59) ? "Adult" :
//                      "Senior";
//                      
//    cout << category << endl; 
//    return 0;
//}



// void categorizeAgeGroup(int age) {
//    switch (age) {
//        case 0 ... 12:
//            cout << "Child" << endl;
//            break;
//        case 13 ... 19:
//            cout << "Teenager" << endl;
//            break;
//        case 20 ... 59:
//            cout << "Adult" << endl;
//            break;
//        default:
//            if (age >= 60)
//                cout << "Senior" << endl;
//            else
//                cout << "Invalid age" << endl;
//            break;
//    }
//}

// int main() {
//    int age;
//    cout << "Enter age: ";
//    cin >> age;
//    categorizeAgeGroup(age);
//    return 0;
//}


// 33. Write a program that takes a year as input and checks whether it is a century year (a year divisible by 100).

// #include <iostream>  
// using namespace std;

// void century(int year) {
    
//     if (year % 100 == 0) {
//         cout << year << " is a Century Year." << endl;  
//     } else {
//         cout << year << " is not a Century Year." << endl;  
//     }
// }

// int main() {
//     int year;  

//     cout << "Enter a year: ";  
//     cin >> year;  

//     century(year);  
//     return 0;  
// }




// #include <iostream>  
// using namespace std;

// void century(int year) {
    
//      (year % 100 == 0)? 
//         cout << year << " is a Century Year." << endl;  
//     
//        : cout << year << " is not a Century Year." << endl;  
//    
// }

// int main() {
//     int year;  

//     cout << "Enter a year: ";  
//     cin >> year;  

//     century(year);  
//     return 0;  
// }



// #include <iostream>  
// using namespace std;

// void century(int year) {
   
//     (year % 100 == 0) && cout << year << " is a Century Year." << endl;
//     (year % 100 != 0) && cout << year << " is not a Century Year." << endl;
// }

// int main() {
//     int year;  
//     cout << "Enter a year: "; 
//     cin >> year;  

//     century(year); 
//     return 0;  
// }


// 34. Access and print the first and last element of the array arr = [10, 20, 30, 40, 50]. Output:[10,50]

// #include <iostream>
// using namespace std;

// int main() {
    
//     int arr[] = {10, 20, 30, 40, 50};

    
//     cout << "[" << arr[0] << ", " << arr[4] << "]" << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(arr[0]);  
    
 
//     for (int i = 0; i < n; i++) {
//         if (i == 0 || i == n - 1) {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }



//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[] = {10, 20, 30, 40, 50};
//    cout << "[" << arr[0] << ", " << arr[sizeof(arr)/sizeof(arr[0]) - 1] << "]" << endl;
//    return 0;
//}


// LEET CODE Question=1961;

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// bool isPrefixString(string s, vector<string>& words) {
//     string concatenated = "";
//     for (const string& word : words) {
//         concatenated += word;
//         if (concatenated == s) {
//             return true;
//         }
//         if (concatenated.size() > s.size()) {
//             return false; 
//         }
//     }
//     return false; 
// }

// int main() {
//     string s = "iloveleetcode";
//     vector<string> words = {"aefw","i", "love", "leetcode", "apples"};
    
//     if (isPrefixString(s, words)) {
//         cout << "True" << endl;
//     } else {
//         cout << "False" << endl;
//     }

//     return 0;
// }


// 35. Print an inverted right-angled triangle pattern with n rows.

// #include <iostream>
// using namespace std;

// int main() {
//     int n; 
//     cout << "Enter num ";
//     cin >> n;
    
   
//     for (int i = 0; i < n; i++) {
        
//         for (int j = 0; j < n - i; j++) {
//             cout << "*";
//         }
//         cout << endl; 
//     }

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int n; 
//     cout << "Enter number";
//     cin >> n;
    
    
//     for (int i = 0; i < n; i++) {
     
//         cout << string(n - i, '*') << endl; 
//     }

//     return 0;
// }













// 36. Print a pyramid pattern with n rows.


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;  

   
//     for (int i = 0; i < n; i++) {
       
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << " ";  
//         }

      
//         for (int j = 0; j < 2 * i + 1; j++) {
//             cout << "*";
//         }

//         cout << endl;  
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;
    
//     for(int i=0;i<n;i++){
//         string row="";
        
//         row+=string(n-i-1,' ');
        
//         row+=string(2*i+1,'*');
        
//         cout << row << endl;
//     }
//     return 0;
// }
