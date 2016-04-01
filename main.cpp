#include <iostream>
#include <fstream>
#include "lstm/lstm.h"

#define INPUTS 8
#define HIDDEN 10
#define OUTPUTS 8
#define SEQUENCES 10

using namespace std;

void printVec(std::vector<float> in){
	for (unsigned int i=0; i<in.size();i++) std::cout<<in[i]<<" ";
	std::cout<<std::endl;
}
std::vector<std::vector<float> > loadInput(std::string filename){
	// load file and store all weights(lines with . in it) to float vector
	std::ifstream infile(filename.c_str());
	std::vector<std::vector<float> > inputs;
	float in = 0.0;
	for (int i=0;i<SEQUENCES;i++) {
		std::vector<float> tmp;
		for (int j=0;j<INPUTS;j++) {
			infile >> in;
			tmp.push_back(in);
		}
		inputs.push_back(tmp);
	}
	return inputs;
}

int main(int argc, const char *argv[]){
	cout<<"--- start ---"<<endl<<endl<<endl;
	
	LSTM lstm;
	lstm.setup(INPUTS,HIDDEN,OUTPUTS, 1.0);
	std::string filename = "trained_network1.jsn";
	lstm.loadWeights(filename.c_str());
	
	std::string inputFilename = "inputs";	
	std::vector<std::vector<float> > inputs = loadInput(inputFilename);
	for (int i=0;i<SEQUENCES;i++){
		std::cout<<"Input: ";printVec(inputs[i]);
		lstm.setInput(inputs[i]);
		lstm.step();
	    std::cout<<"Multi Vector: ";
		printVec(lstm.getOutput());
		std::cout<<"Multi Class: "<<lstm.getState()<<std::endl;  
//	    std::cout<<"Binary: "<<lstm.getBinary()<<std::endl;
	}  
	lstm.reset();
	std::cout<<std::endl<<std::endl<<"RESET"<<std::endl<<std::endl;
	for (int i=0;i<SEQUENCES;i++){
		std::cout<<"Input: ";printVec(inputs[i]);
		lstm.setInput(inputs[i]);
		lstm.step();
	    std::cout<<"Multi Vector: ";
		printVec(lstm.getOutput());
		std::cout<<"Multi Class: "<<lstm.getState()<<std::endl;  
//	    std::cout<<"Binary: "<<lstm.getBinary()<<std::endl;
	}  
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
