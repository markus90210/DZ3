#include <iostream>



//3-� �������
extern int a, b, c, d;

void insABCD(int *a,int *b,int *c,int *d);

//2-e �������
void insG(int*g){
	std::cout << "Vvedite lyuboe celoe chislo: ";
	std::cin >> *g;
}
int main(int argc, char *argv[]){

	//1-� �������
	puts(" Zadanie # 1(3)\n");
	float df,  e;
	std::cout << "Programma dlya vyvoda rezultata uravneniya 'a * (b + (c / d))'" << "\n" << std::endl;
	insABCD(&a, &b, &c, &d);
	df = d;
	e = (a * (b + (c / df)));
	std::cout << e << std::endl;
	
//	// 2-� �������
//	puts(" Zadanie # 2\n");
//	int g;
//	insG(&g);
//	(g < 21) ? (std::cout << "Raznica chisla " << g  << " i chisla 21 ravna: " << g - 21 << std::endl) : (std::cout << "Udvoenaya raznica chisla " << g << " i chisla 21 ravna: " << 2 * (g - 21) << std::endl);
//	
	//4-e �������
	int arr3d[3][3][3];
	
	
	
	return 0;
}
