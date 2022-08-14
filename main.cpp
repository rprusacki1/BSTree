/* Rachel Prusacki
 * Project3-Driver Program
 * COSC220, 11/30/2021
 */

#include "project3_bstree.h"
#include <iostream>

using namespace std;

int main () {
	stree<int> list = stree<int>();
	list.insert(10);
	list.insert(25);
	list.insert(26);
	list.insert(28);
	list.insert(29);
	list.insert(30);
	list.insert(34);
	list.insert(35);
	list.insert(40);
	list.insert(50);
	list.insert(65);
	cout << "Original:" << endl;
	list.displayTree();

	cout << "\nDelete 25: " << endl;
	list.erase(26);
	list.displayTree();
	cout << "\nDelete 35: " << endl;
	list.erase(35);
	list.displayTree();
	cout << "\nDelete 30: " << endl;
	list.erase(30);
	list.displayTree();

	//Copying from array:
	char arr[] = {'S', 'J', 'K', 'L', 'X', 'F', 'E', 'Z'};
	char * first = &arr[0];
	char * last = &arr[8];
	stree<char> clist = stree<char>(first, last);
	cout << "\nOriginal:" << endl;
	clist.displayTree();

	cout << "\nInsert H:" << endl;
	clist.insert('H');
	clist.displayTree();

	cout << "\nDelete F:" << endl;
	clist.erase('F');
	clist.displayTree();

	cout << "\nMin of Tree1:" << endl;
	cout << list.min() << endl;
	
	cout << "\nMin of Tree2:" << endl;
	cout<< clist.min() << endl;

	return 0;
}
