#include <iostream>



// 3
extern int a, b, c, d;
void insABCD(int *a, int *b, int *c, int *d);
const int g = 19;


int main(int argc, char *argv[]){

//	1

	insABCD(&a, &b, &c, &d);
	float df = d;
	float e = a * (b + (c / df));
	std::cout << e << std::endl;

// 2

	(g < 21) ? (std::cout <<  g - 21  << std::endl) : (std::cout <<  2 * (g - 21) << std::endl);
	
// 4
	int arr3d[3][3][3], val = 0;	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 3; k++){
				arr3d[i][j][k] = val;
				val++;
				std::cout << arr3d[i][j][k] << " " ;
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
	int *parr3d = &arr3d[0][0][0];
	int *p1arr3d = &arr3d[1][1][1];
	std::cout << *p1arr3d << std::endl;

	
	
	
	return 0;
}

