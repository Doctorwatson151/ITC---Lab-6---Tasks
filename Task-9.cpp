/////L1F26BSCS0098 - Abdullah Kaleem
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//
//	int units, surcharge_percent;
//	double rate_per_unit, energy_charges, surcharge, total_bill ;
//
//
//	cout << "Enter units consumed: ";
//	cin >> units;
//
//	
//	if (units > 0)
//	{
//		if (units <= 100)
//		{
//			rate_per_unit = 10; //rs
//
//
//
//		}
//		else{
//
//			if (units <= 300)
//			{
//				rate_per_unit = 15; //rs
//
//
//			}
//			else {
//
//				rate_per_unit = 20;  //rs
//
//			}
//
//
//		}
//
//
//
//		energy_charges = units * rate_per_unit;
//
//
//
//		if (energy_charges > 5000)
//		{
//
//
//			surcharge_percent = 10; //percntage 10%
//
//
//		}
//		else{
//		
//			if (energy_charges > 3000)
//			{
//				surcharge_percent = 5; //percentage 5%
//
//			}
//			else {
//
//				surcharge_percent = 0; //0 percent (%)
//
//
//			}
//
//
//		}
//
//		surcharge = energy_charges * surcharge_percent / 100;
//		total_bill = energy_charges + surcharge;
//
//		cout << "Units : " << units << endl;
//		cout << "Rate Per Unit : RS. " << rate_per_unit << endl;
//		cout << "Energy Charges : RS. " << energy_charges << endl;
//		cout << "Surcharge (" << surcharge_percent << "%) : RS. " << surcharge << endl;
//		cout << "Total Bll : RS. " << total_bill << endl;
//	}
//	else {
//
//		cout << "Invalid Units" << endl;
//
//	}
//
//
//	return 0;
//}