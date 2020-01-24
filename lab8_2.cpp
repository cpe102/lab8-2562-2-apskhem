#include<iostream>
using namespace std;

//Write the function printO() here
void printO(short row, short col) {
    if (row <= 0 || col <= 0) {
        cout << "Invalid Input!!!";
        return;
    }
    
    int setCol = col;
    for (;row>0;row--) {
        for (col = setCol;col>0;col--) {
            cout << "O";
        }
        cout << endl;
    }
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}