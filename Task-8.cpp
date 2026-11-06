////L1F26BSCS0098 - Abdullah Kaleem
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int sideA, sideB, sideC;
//
//	cout << "Enter lenght of side A of the triangle: ";
//	cin >> sideA;
//
//	cout << "Enter lenght of side B of the triangle: ";
//	cin >> sideB;
//
//	cout << "Enter lenght of side C of the triangle: ";
//	cin >> sideC;
//
//	if (sideA > 0)
//	{
//		if (sideB > 0)
//		{
//			if (sideC > 0)
//			{
//
//				if (sideA + sideB > sideC)
//				{
//					if (sideA + sideC > sideB)
//					{
//						if (sideB + sideC > sideA)
//						{
//
//							cout << "Valid Triangle" << endl;
//
//							if (sideA == sideB)
//							{
//
//								if (sideB == sideC)
//								{
//
//									cout << "Type : Equilateral" << endl;
//
//								}
//								
//								else {
//
//									cout << "Type : Isoceles" << endl;
//
//								}
//
//
//							}
//							else {
//								
//
//								if (sideB == sideC)
//								{
//
//									cout << "Type : Isoceles" << endl;
//
//								}
//								else
//								{
//									if (sideA == sideC) {
//
//										cout << "Type : Isoceles" << endl;
//										
//
//									}
//									else {
//
//
//										cout << "Type : Scalence" << endl;
//
//									}
//
//								}
//								
//
//							}
//
//						}
//						else {
//
//							cout << "Not a valid triangle: two sides must add up to more than the third" << endl;
//
//						}
//
//
//					}
//					else {
//
//						cout << "Not a valid triangle: two sides must add up to more than the third" << endl;
//
//					}
//
//
//				}
//				else {
//
//					cout << "Not a valid triangle: two sides must add up to more than the third" << endl;
//
//				}
//			}
//			else {
//
//				cout << "Invalid: every side must be greater than 0" << endl;
//
//
//
//			}
//			
//		}
//		else {
//
//			cout << "Invalid: every side must be greater than 0" << endl;
//
//
//
//		}
//
//	}
//	else {
//
//		cout << "Invalid: every side must be greater than 0" << endl;
//
//
//
//	}
//
//
//
//
//	return 0;
//}