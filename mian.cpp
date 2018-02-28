#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  string addition;
  bool ran = false;
  char input;
  do{
      if(input == 'A'||input == 'a'){
          cout << "What is the item?\n";
          if (numItems < 5){
               cin >> addition;
               list[numItems] = addition;
               numItems++;
               cout << "\n==GROCERY LIST MANAGER==" << endl;
               cout << "Enter your choice: \n (A)dd an item\n (Q)uit\nYour choice (A/Q): ";
               cin >> input;
          }
          else{
              cout << "You'll need a bigger list!" << endl;
              cin >> input;
          }
      }
      else{
            cout << "\n==GROCERY LIST MANAGER==" << endl;

    //    if(ran){
   //     for(int x = 0; x < (sizeof(list)/sizeof(*list));x++){
   //              cout << list[x] << endl;
    //    }}
      //      cout << "What would you like to do now?" << endl;
            cout << "Enter your choice: \n (A)dd an item\n (Q)uit\nYour choice (A/Q): ";
            ran = true;
           cin >> input;
      }
  }
  while(!(input == 'Q' || input == 'q'));

  cout << "==ITEMS TO BUY==" << endl;

  for(int i = 0; i < 5; i++){
    cout << (i+1) << " " << list[i] << endl;
    }
  return 0;
}