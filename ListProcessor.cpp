// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

/* Edited by JEREMY REYNOLDS
 * LAB 2 LINKED LIST
 * Due Sept 25 2017
 * COSC 2030
 *
*/

#include "LinkedList.cpp"


int main()
{
	List cows;
	cout << "cows list  :  " << cows.getSize() << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "cows list  :  " << cows.getSize() << endl << endl;
	cout << "cows list  :  " << cows.sum() << endl << endl;

	cout << "cows list  :  " << cows << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	horses.insertAsFirst(5.67);
	horses.insertAsFirst(4.77);
	horses.insertAsFirst(33.5);
	horses.insertAsFirst(1.2);
	cout << "horses list:  " << horses << endl << endl;
	cout << "horses list:  " << horses.getSize() << endl << endl;
	cout << "horses list:  " << horses.sum() << endl << endl;
	horses.insertAsLast(77.8);
	cout << "horses list:  " << horses << endl << endl;


	cout << "cows list  :  " << cows << endl;

	List pigs;
	horses.insertAsFirst(54.674);
	horses.insertAsFirst(9.0);
	horses.insertAsFirst(5.33);
	horses.insertAsLast(729.982837);

	cout << "pigs list:  " << pigs.getSize() << endl << endl;
	cout << "pigs list:  " << pigs.sum() << endl << endl;


	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "pigs list:  " << pigs.getSize() << endl << endl;
	cout << "pigs list:  " << pigs.sum() << endl << endl;


	cout << "End of code" << endl;

	return 0;
}
