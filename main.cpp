#include <iostream>
#include "lstm/lstm.h"

using namespace std;


int main(int argc, const char *argv[]){
	cout<<"--- start ---"<<endl<<endl<<endl;
	
/*	InputLayer test(5);
	for (int i=0;i<5;i++) test.setInput(i,i);
	for (int i=0;i<5;i++) cout<<test.getInput(i)<<" ";
*/	
    LSTM lstm(1,2,3, 1.0);
	cout<<endl<<endl<<endl<<"--- done ---"<<endl;
}
