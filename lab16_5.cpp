#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int * ,int *, int *, int* ); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;

	srand(time(0));	

	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}

	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){

int s[4] = {*a,*b,*c,*d},temp,j ;

for(int i = 0;i < 4;i++){
	j = rand()%4 ;
	temp = s[i] ;
	s[i] = s[j] ;
	s[j] = temp ;
}
*a = s[0] ;
*b = s[1] ;
*c = s[2] ;
*d = s[3] ;

} 