////L1F26BSCS0098 - Abdullah Kaleem
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//
//
//	int  correctpin, enteredpin, balance, amount;
//
//	correctpin = 1234;
//	balance = 20000;
//
//	cout << "Enter pin: ";
//	cin >> enteredpin;
//
//
//	if (enteredpin == correctpin)
//	{
//
//		cout << "Enter Amount to Withdraw: ";
//		cin >> amount;
//		
//		if (amount > 0)
//		{
//			if (amount <= balance)
//			{
//				if (amount % 500 == 0)
//				{
//					balance = balance - amount;
//					cout << "Withdrawl succesful" << endl;
//					cout << "Amount withdrawn: " << amount << endl;
//					cout << "Remaining Balance: " << balance << endl;
//
//				}
//				else
//				{
//					cout << "Amount must be a multiple of 500" << endl;
//
//				}
//
//			}
//			else
//			{
//				cout << "Insufficient Balance" << endl;
//
//			}
//
//		}
//		else
//		{
//			cout << "Invalid Amount" << endl;
//
//		}
//
//	}
//	else 
//	{
//		cout << "Invalid Pin" << endl;
//
//	}
//
//	return 0;
//}
//
//// 1. Type PIN4321 and amount-500. Which message is printed? Why are the other messages not shown?
//// Invalid Pin and Invalid Amount are shown, other messages are not shown becuase the if statement block is skipped in which other messages are.
//// 
//// 2.Type amount 30250 with the correct PIN.Note the message.Now swap the balance check and the
////multiple - of - 500 check and run again.Does the message change ? What does this tell you about the order of
////nested checks ?
////
////
////  Insufficient amount is shown.
//// if we swap the multiple of 500 check and balance check even if the amount is sufficient the error of multiple of 500 will
//// show if the amount is not multiple of 500.  
////  this tells us that the first if is checked first and then the if with in that is checked 
//// so have to be careful what to check first.