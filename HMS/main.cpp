#include <iostream>
using namespace std;

int main() 
{
  int quant;
  int choice;
  // Quantity of Food we have
  int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodle = 0, Qshake = 0, Qchicken = 0; 
  // Food Items Sold (Quantity of Food We Sold)
  int Srooms = 0, Spasta = 0, Sburger = 0, Snoodle = 0, Sshake = 0, Schicken = 0; 
  // Total Proce of Items (Total Price of each of the food or rooms)
  int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodle = 0, Total_shake = 0, Total_chicken = 0;


  cout << "\n\t Quantity Of Items We Have";
  cout << "\n Rooms Avaliable : ";
  cin >> Qrooms;
  cout << "\n Quantity Of Pasta : ";
  cin >> Qpasta;
  cout << "\n Quantity Of Burger : ";
  cin >> Qburger;
  cout << "\n Quantity Of Noodeles : ";
  cin >> Qnoodle;
  cout << "\n Quantity Of Shake : ";
  cin >> Qshake;
  cout << "\n Quantity Of Chicken-Roll : ";
  cin >> Qchicken;

  m:
  cout << "\n\t\t\t Please Select From The Menu Options ";
  cout << "\n\n1) Rooms";
  cout << "\n2) Pasta";
  cout << "\n3) Burger";
  cout << "\n4) Noodeles";
  cout << "\n5) Shake";
  cout << "\n6) Chicken-Roll";
  cout << "\n7) Information Regarding Sales And Collection";
  cout << "\n8) Exit";

  cout << "\n\n Please Enter Your Choice! ";
  cin >> choice;

  switch(choice)
  {
    case 1:
      cout << "\n\n Enter The Number Of Rooms You Want: ";

      cin >> quant;
      if (Qrooms - Srooms >= quant)
      {
        Srooms += quant;
        Total_rooms += (quant * 1200); // Total Price Of Room 
        cout << "\n\n\t\t" << quant << " Room/Rooms Have Been Alloted To You!";
      }
      else 

        cout << "\n\tOnly " << Qrooms - Srooms << " Rooms Remaining In Hotel ";
        break;

      case 2:
        cout << "\n\n Enter Pasta Quantity: ";

        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
          Spasta += quant;
          Total_pasta += (quant * 250); // Total Price Of Pasta
          cout << "\n\n\t\t" << quant << " Pasta Is The Order! ";
        }
        else 

          cout << "\n\tOnly " << Qpasta - Spasta << " Pasta Remaining In Hotel ";
          break;

      case 3:
        cout << "\n\n Enter Burger Quantity: ";

        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
          Sburger += quant;
          Total_burger += (quant * 120); // Total Price Of Burger
          cout << "\n\n\t\t" << quant << " Burger Is The Order! ";
        }
        else 

          cout << "\n\tOnly " << Qburger - Sburger << " Burger Remaining In Hotel ";
          break;

      case 4:
        cout << "\n\n Enter Noodle Quantity: ";

        cin >> quant;
        if (Qnoodle - Snoodle >= quant)
        {
          Snoodle += quant;
          Total_noodle += (quant * 140); // Total Price Of Noodles
          cout << "\n\n\t\t" << quant << " Noodle Is The Order! ";
        }
        else 

          cout << "\n\tOnly " << Qnoodle - Snoodle << " Noodles Remaining In Hotel ";
          break;

      case 5:
        cout << "\n\n Enter Shakes Quantity: ";

        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
          Sshake += quant;
          Total_shake += (quant * 120); // Total Price Of Shakes
          cout << "\n\n\t\t" << quant << " Shakes Is The Order! ";
        }
        else 

          cout << "\n\tOnly " << Qshake - Sshake << " Shake Remaining In Hotel ";
          break;

      case 6:
        cout << "\n\n Enter Chicken-Roll Quantity: ";

        cin >> quant;
        if (Qchicken - Schicken >= quant)
        {
          Schicken += quant;
          Total_chicken += (quant * 150); // Total Price Of chicken-Roll
          cout << "\n\n\t\t" << quant << " Chicken-Roll Is The Order! ";
        }
        else 

          cout << "\n\tOnly " << Qchicken - Schicken << " Chicken-Roll Remaining In Hotel ";
          break;

      case 7:

        cout << "\n\t\tDetails Of Sales And Collection ";
        cout << "\n\n Number Of Rooms We Had : " << Qrooms;
        cout << "\n\n Number Of Rooms We Gave For Rent : " << Srooms;
        cout << "\n\n Remaining Rooms : " << Qrooms - Srooms;
        cout << "\n\n Total Rooms Collection For The Day : " << Total_rooms;

        cout << "\n\n Number Of Pastas We Had : " << Qpasta;
        cout << "\n\n Number Of Pastas We Gave For Rent : " << Spasta;
        cout << "\n\n Remaining Pastas : " << Qpasta - Spasta;
        cout << "\n\n Total Pasta Collection For The Day : " << Total_pasta;

        cout << "\n\n Number Of Burgers We Had : " << Qburger;
        cout << "\n\n Number Of Burgers We Gave For Rent : " << Sburger;
        cout << "\n\n Remaining Burgers : " << Qburger - Sburger;
        cout << "\n\n Total Burger Collection For The Day : " << Total_burger;

        cout << "\n\n Number Of Noodles We Had : " << Qnoodle;
        cout << "\n\n Number Of Noodles We Gave For Rent : " << Snoodle;
        cout << "\n\n Remaining Noodles : " << Qnoodle - Snoodle;
        cout << "\n\n Total Noodle Collection For The Day : " << Total_noodle;

        cout << "\n\n Number Of Shakes We Had : " << Qshake;
        cout << "\n\n Number Of Shakes We Gave For Rent : " << Sshake;
        cout << "\n\n Remaining Shakes : " << Qshake - Sshake;
        cout << "\n\n Total Shake Collection For The Day : " << Total_shake;

        cout << "\n\n Number Of Chicken-Roll We Had : " << Qchicken;
        cout << "\n\n Number Of Chicken-Roll We Gave For Rent : " << Schicken;
        cout << "\n\n Remaining Chicken-Roll : " << Qchicken - Schicken;
        cout << "\n\n Total Chicken-Roll Collection For The Day : " << Total_chicken;

        cout << "\n\n\n Total Collection For The Day : " << Total_rooms + Total_pasta + Total_burger + Total_chicken + Total_noodle + Total_shake;
        break;

      case 8:
        exit(0);
      
        default: 
          cout << "\n Please Select The Numbers Mentioned Above!";

      }
      goto m;
      
  return 0;
}
