#include <iostream>
#include "lstm/lstm.h"

using namespace std;

void printVec(std::vector<float> in){
	for (unsigned int i=0; i<in.size();i++) std::cout<<in[i]<<" ";
	std::cout<<std::endl;
}

int main(int argc, const char *argv[]){
	cout<<"--- start ---"<<endl<<endl<<endl;
	
	LSTM lstm(8,2,8, 1.0);
	std::string filename = "network_multi_weights_2.jsn";
	lstm.loadWeights(filename.c_str());
/*
*	simple test without weights
*
	int inputs = 10;
	int lstms = 10;

	std::vector<float> inVec;
	for (int i=0;i<inputs;i++) inVec.push_back((float)i);
    
   
	int outputs = 1;    
    LSTM lstm(inputs,lstms,outputs, 1.0);
    lstm.setInput(inVec);
    lstm.step();
    std::cout<<"Binary: "<<lstm.getBinary()<<std::endl;

    
    int outputs2 = 2;    
    LSTM lstm2(inputs,lstms,outputs2, 1.0);
    lstm2.setInput(inVec);
    lstm2.step();
    std::cout<<"Multi Vector: ";
	printVec(lstm2.getOutput());
	std::cout<<"Multi Class: "<<lstm2.getState()<<std::endl;    
*/
    
	cout<<endl<<endl<<endl<<"--- done ---"<<endl;
}
