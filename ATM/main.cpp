#include <iostream>
using namespace std;

double balance = 1000;
int deposit, withDraw = 0;
int passWord;
int choice;

void display()
{
  cout << "***************\n";
  cout << "***** ATM *****\n";
  cout << "***************\n";
  cout << "***** Menu ****\n";
  cout << "1: Balance\n";
  cout << "2: WithDraw\n";
  cout << "3: Deposit\n";
  cout << "4: Exit\n";
  cout << "****************\n";
}

void process()
{
  cout << "Enter Your Password\n";
  cin >> passWord;

  do{
    if (passWord == 1234)
    {
      cout << "Enter Your Choice\n";
      cin >> choice;

      switch (choice)
      {
      case 1:
        cout << "Your Balance is " << balance << "\n";
        break;
      case 2:
        cout << "Note: Your Balance is " << balance << "\n";
        cout << "Enter Your Amount: ";
        cin >> withDraw;
        if (withDraw > balance)
        {
          cout << "Sorry You Can't Withdraw This Amount\n";
        }
        else
        {
          balance -= withDraw;
          cout << "Now Your Balance is " << balance << "\n";
        }
        break;
      case 3:
        cout << "Your Balance is " << balance << "\n";
        cout << "Enter Your Deposit Money: \n";
        cin >> deposit;
        balance += deposit;
        cout << "Now Your Balance is " << balance << "\n";
        break;
      case 4:
        cout << "Thank You\n";
        break;
      }
    } 
    else 
    {
      char option = 'o';
      cout << "Password Is Incorrect, If You Want To Try Again ? Enter [Y] For Yes Or [N] For No\n";
      cin >> option;

      if (option == 'Y' || option == 'y') 
      {
        cout << "Enter Your Password\n";
        cin >> passWord;
      }
      else choice = 4;
    }
  } while (choice < 4); 
}

int main()
{
  display();
  process();

  return 0;
}