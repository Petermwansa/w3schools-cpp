#include <iostream>
#include <string>
using namespace std;

int main() {


  //ARRAYS 


  // finding an average of the given ages;

  cout << "======== PRINTING THE AVERAGE AGE =======";

  int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
  float avg, sum = 0;

  int length = sizeof(ages) / sizeof(ages[0]);

  for (int age : ages) {
    sum += age;
  }

  avg = sum / length;

  cout << "The sum of the ages is: " << sum << endl;
  cout << "The length of the array is: " << length << endl;
  cout << "The average age of the entries is: " << avg << endl;


  cout << "======== END OF PRINTING THE AVERAGE AGE =======";



  // int myNumbers[] = {3,4,5,6,7,8,2,6,3};
  // cout << "The size of the array in bytes is: " << sizeof(myNumbers) << "\n";
  // cout << "The array has: " << sizeof(myNumbers) / sizeof(myNumbers[0]) << " number of elements" << endl;
  
  // for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) 
  // {
  //   cout << myNumbers[i] << endl;
  // }

  // cout << "============= AFTER USING THE FOREACH LOOP =================";
  // for(int i : myNumbers) {
  //   cout << i << "\n";
  // }
  
  
  // // / loopin gthrough the array 


  // string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  // for (int i = 0; i < 5; i++) {
  //   cout << i + 1 << " = " << cars[i] << "\n";
  // }
  
  // for (int i: prices) {
  //   cout << "Using the foreach loop" << i << "\n";
  // }




  // int prices[8] = {2,4,5,6,2,9,3,5};
  // cout << "The price of the car before changing the price was: " << prices[5] << endl;
  // prices[5] = 200000;
  // cout << "The price of the car after changing the price is: " << prices[5] << endl;





  // // FOR LOOP 
  // for (int i = 0; i < 100; i += 10)
  // {
  //   if (i == 70)
  //   {
  //     continue;
  //   }
    
  //   cout << i << "\n";
  // }

  

  // // /WHILE LOOP 
  // int countdown = 9;
  // while (countdown > 0)
  // {
  //   cout << countdown << "\n";
  //   countdown --;
  // }

  

  // //SWITCH STATEMENT 
  // int number = 22;
  // switch (number)
  // {
  // case 1:
  //   cout << "One" << "\n";
  //   break;
  // case 2:
  //   cout << "Two" << "\n";
  //   break;
  // case 3:
  //   cout << "Three" << "\n";
  //   break;
  // case 4:
  //   cout << "Four" << "\n";
  //   break;
  // default:
  //   cout << "There is no such entry"  << "\n";
  //   break;
  // }

  // //CONDITIONAL STATEDMENTS 
  // int time = 10;
  // time > 18 ? cout << "Good evening" << "\n" : cout << "Good day" << "\n";


  // //MATH

  // int votingAge = 18;
  // int yourAge;
  // cout << "Please enter your age: " << "\n";
  // cin >> yourAge;

  // if (yourAge >= votingAge)
  // {
  //   cout << "Congratulations! You are eligible to vote!" << "\n";
  // }
  // else
  // {
  //   cout << "You are still a baby to be eligible to vote" << "\n";
  // }
  

  // int m = 6;
  // int n = 9;
  // cout << "The variable which is greater than the other is: " << max(n,m) << "\n";

  // // STRINGS

  // string greeting = "Hello";
  // char greeting1[] = "Hello1";

  // cout << greeting << "\n"; 
  // cout << greeting1 << "\n"; 

  // // using the getline function to get an entered string 
  // string fullName;
  // cout << "Type in your full name: ";
  // getline(cin, fullName);
  // cout << "Entered name was: " << fullName << "\n";




  // string name = "Peter Mwansa";
  // cout << "The length of your name is: " << name.length() << "\n" ;

  // string firstName = "Peter";
  // cout << firstName.at(1) << "\n";
  // cout << firstName[3] << "\n";

  // cout << "Hello my friend who is called \"Moses\", I love you" << "\n";


  // int items;
  // double cost;
  // cout << "Enter the number of items: ";
  // cin >> items;
  // cout << "Enter the cost of each item: ";
  // cin >> cost;

  // double total_cost = items * cost;
  // const char currency = '$';


}
