#include<iostream>
#include<cmath>
#include<fstream>
#include<stdio.h>
#include<string>

using namespace std;

int functionIteration( int ax , int bx , int numx , int end_number , int fixed_start ){
	
	long num;
	long repeat;
	int evensteps = 0;
	int oddsteps = 0;
	int turn = 0;
	int a , b , end = end_number;
	int begin = fixed_start;
	a = ax;
	b = bx;
	num = numx;
	repeat = num;
	string nameOfFile = "Overview of " + to_string(a) + "n + " + to_string(b)
						 + " for " + to_string(begin) + "-" + to_string(end) + ".txt";
	ofstream File( nameOfFile , ios::app );
	File << "The data for " << a << "n + " << b << " for " << num << " is:" << "\n";
	File << "The values are obtained for " << num << ".\n";
	cout << "Doing number " << num << endl;
	do{
		
		

		if( turn >= 1000 )
		{
			File << "The iteration was moving towards infinity....\n";
			break;
		}
		else
		{
		
			if( remainder( num , 2 ) == 0 )
			{
				evensteps++;
				num = num / 2;
			}
			else
			{
				oddsteps++;
				num = ( num * a ) + b;
			}
		}	
		turn++;
		File << "Number after " << turn << " turns " << "is :" << num << endl ;	
	}
	while(num != 1);
	File << "Total number of Even Steps were:" << evensteps << endl;
	File << "Total number of Odd Steps were:" << oddsteps << endl;
	File << "Total num of Steps were:" << turn << endl;
	File << "Data ended here....\n\n";
	
}
int main(){

	int a , start_n , end_n , c , l , fixed_start;

	cout << "****" << endl;
	cout << "***" << endl;
	cout << "**" << endl;
	cout << "*" << endl;
	cout << "CollatzConjecture Test for n numbers";
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;

	//configure the value of i,j,k for a,c in an + c format.

	cout << "Provide information according to an + c format," << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Enter a:";
	cin >> a;
	cout << "Enter c:";
	cin >> c;
	cout << "Enter starting value of n to produce file for:";
	cin >> start_n;
	fixed_start = start_n;
	cout << "Enter end value of n to produce file for:";
	cin >> end_n;
	l = end_n;
	for(int i = a ; i <= a ; i++)
	{
		for(int j = c ; j <= c ; j++){
			
			for( int k = start_n ; k <= end_n ; k++ ){
				if( i % 2 == 0  || j % 2 == 0 )
				{
					continue;
				}
				else
				{
					functionIteration( i , j , k , l , fixed_start );
				}
			}
		}
	}

}
