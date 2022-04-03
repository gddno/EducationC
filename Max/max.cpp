#include <iostream>

using namespace std;

float middle(int mass[], int size) {
	

	return ;
}

int maximum(int* mass, int size) {
	int maximum = mass[0];
	for(int i=0; i < size; i++)
	{
		if (maximum < mass[i])	
		{
			maximum = mass[i];
		}
	}
	return maximum;
}

int main() {
	int size = 5;
	int mass[size] = {3,6,2,6,8};
   	
   	cout << maximum(mass, size) << endl;
    
	return 0;
}