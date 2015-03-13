#include <iostream>
using namespace std;
int main()
{ 
	int numoutput;
	cin>>numoutput;
	
	check:
	cout<<numoutput<<"  ";
	if(numoutput==1){
		goto end;
	}
	if(numoutput&1){
		numoutput*=3;
		numoutput++;
	}		
	else{	
		numoutput/=2;
	}	
	goto check;

	end:
	return 0;
}
