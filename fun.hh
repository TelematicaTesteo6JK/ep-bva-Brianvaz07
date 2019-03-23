#include <iostream>
using namespace std;
int hour(int p){
int x,vec[4];

		for(int i=0; i<=4; i++){
		cout<<"Ingrese el valor " << i + 1 <<endl;
		cin>>vec[i];
	}
system("cls");

	for(int i=0; i<=4; i++){
	if(vec[i] <=0 ){ cout<<"Valor no valido";}
	if(vec[i]<=5){ vec[i]*=10; }
		else{ 
			if( vec[i]== 6 || vec[i]<=10 ){ 
				vec[i]*=9;
				}
			else{
				if(vec[i]>=11){
				vec[i]*=7;
				} 
			}	
			}
	
		cout<<vec[i]<<endl;
	}

															
	return 0;
};
