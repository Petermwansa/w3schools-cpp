#include <iostream>
#include <string>
using namespace std;



  // a car struct 
  struct car {
    string brand;
    string model;
    int year;
  };

  // an emum
  enum Level {
    LOW = 40,
    MEDIUM = 60,
    HIGH = 85,
  };


int main() {


  // POINTERS  
  // A pointer however, is a 
  //variable that stores the memory address as its value.


  
  string food = "Apples";
  string* ptr = &food;
  cout << food << endl;
  cout << &food << endl;
  cout << ptr << endl;


  // dereferencing a pointer 
  string fruit = "Banana";
  string* fruitPtr = &fruit;
  cout << "The address is: " << fruitPtr << " and the value stored there is: " << *fruitPtr << endl;

  // changing the pointer value 

  string hero = "Superman";
  string *heroPtr = &hero;

  cout << "This prints the original value: " << hero << endl;
  cout << "This prints the address stored by the pointer: " << heroPtr << endl;
  cout << "This prints the value stored by the pointer through dereferencing: " << *heroPtr << endl;

  // after the modification of the value stored through a pointer 
  *heroPtr = "Spiderman";
  cout << "This prints the value changed after modification bt the pointer: " << hero << endl;





  // // REFERENCES 

  // string food = "Apples";
  // string &meal = food;

  // cout << food << endl;
  // cout << meal << endl;

  // cout << "======= PRINTING OUT THE MEMORY ADDRESS =======" << endl;
  // string animal = "Cat";
  // cout << "The memory address of the variable is: " << &animal << endl;
  // string &pet = animal;
  // cout << "The memory address of the reference variable is: " << &pet << endl;
  









  // // WORKING WITH ENUMS
  // // a special type that represents a group of constants
  // enum Level mylevel = HIGH;

  // switch (mylevel)
  // {
  // case 40:
  //   cout << "I am on the low level" << endl;
  //   break;
  
  // case 60:
  //   cout << "I am on the middle level" << endl;
  //   break;
  // case 85:
  //   cout << "I am on the high level" << endl;
  //   break;
  
  // default:
  //   break;
  // }








  // // WORKING WITH STRUCTS 
  // // they are used to group data of different data types but are related 
  // car car1;

  // car1.brand = "Ferrari";
  // cout << "My car is a: " << car1.brand << endl;


  // struct {
  //   int age;
  //   string firstName;
  //   string lastName;
  // } myDetails;
  
  // myDetails.age = 26;
  // myDetails.firstName = "Peter";
  // myDetails.lastName = "Mwansa";

  // cout << "My age is: " << myDetails.age << endl;


















  // // An array storing different ages and finding the lowest and the highest
  // int ages[8] = {20, 22, 18, 1, 48, 26, 12, 70};

  // int i;

  // // Get the length of the array
  // int length = sizeof(ages) / sizeof(ages[0]);

  // // Create a variable and assign the first array element of ages to it
  // int highestAge = ages[0];
  // int lowestAge = ages[0];

  // // Loop through the elements of the ages array to find the lowest age
  // for (int age : ages) {
  //   if (highestAge < age) {
  //     highestAge = age;
  //   }
  //   if (lowestAge > age) {
  //     lowestAge = age;
  //   }
  // }


  // // Print the lowest age
  // cout << "The highest age is: " << highestAge << "\n";
  // cout << "The lowest age is: " << lowestAge << "\n";



  // //ARRAYS 
  // cout << "======== HITTING GAME STARTS =======" << endl;

  // bool ships[4][4] = {
  //   { 0, 1, 1, 0 },
  //   { 0, 0, 0, 0 },
  //   { 0, 0, 1, 0 },
  //   { 0, 0, 1, 0 }
  // };

  // // Keep track of how many hits the player has and how many turns they have played in these variables
  // int hits = 0;
  // int numberOfTurns = 0;

  // // Allow the player to keep going until they have hit all four ships
  // while (hits < 4) {
  //   int row, column;

  //   cout << "Selecting coordinates\n";

  //   // Ask the player for a row
  //   cout << "Choose a row number between 0 and 3: ";
  //   cin >> row;

  //   // Ask the player for a column
  //   cout << "Choose a column number between 0 and 3: ";
  //   cin >> column;

  //   // Check if a ship exists in those coordinates
  //   if (ships[row][column]) {
  //     // If the player hit a ship, remove it by setting the value to zero.
  //     ships[row][column] = 0;

  //     // Increase the hit counter
  //     hits++;

  //     // Tell the player that they have hit a ship and how many ships are left
  //     cout << "Hit! " << (4-hits) << " left.\n\n";
  //   } else {
  //     // Tell the player that they missed
  //     cout << "Miss\n\n";
  //   }

  //   // Count how many turns the player has taken
  //   numberOfTurns++;
  // }

  // cout << "Victory!\n";
  // cout << "You won in " << numberOfTurns << " turns" << endl;


  // cout << "======== HITTING GAME ENDS =======" endl;



  // // multi-dimension arrays 
  // cout << "======== looping multi-dimensional arrays =======" << endl;

  // string letters[2][2][4] = {
  //   {
  //     { "A", "B", "C", "D" },
  //     { "E", "F", "G", "H" },
  //   },
  //   {
  //     { "I", "J", "K", "L" },
  //     { "M", "N", "O", "P" },
  //   }
  // };

  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 2; j++) {
  //     for (int k = 0; k < 4; k++)
  //     {
  //       cout << letters[i][j][k] << endl;
  //     }      
  //   }
  // }




  // // finding an average of the given ages;

  // cout << "======== PRINTING THE AVERAGE AGE =======";

  // int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
  // float avg, sum = 0;

  // int length = sizeof(ages) / sizeof(ages[0]);

  // for (int age : ages) {
  //   sum += age;
  // }

  // avg = sum / length;

  // cout << "The sum of the ages is: " << sum << endl;
  // cout << "The length of the array is: " << length << endl;
  // cout << "The average age of the entries is: " << avg << endl;


  // cout << "======== END OF PRINTING THE AVERAGE AGE =======";



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
