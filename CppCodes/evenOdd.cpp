#include <iostream>
using namespace std;

int main(){
    int number;
    
    cout<<"Ededi daxil edin : ";
    cin>>number;
    
    if(number%2!=0)
    	cout<<"Tek ededdir!";
    else if(number==0)
        cout<<"Daxil etdiyiniz eded 0-a beraberdir!";
	else 
	    cout<<"Cut ededdir!";
}