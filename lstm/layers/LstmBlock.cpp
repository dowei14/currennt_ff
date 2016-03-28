#include "LstmBlock.h"
#include <iostream>

LstmBlock::LstmBlock(){

}

LstmBlock::~LstmBlock(){
}


void LstmBlock::setup(int _numInputs, int _numBlocksInLayer, float _bias){

	bias = _bias;
	numInputs = _numInputs;
	numBlocksInLayer = _numBlocksInLayer;
	for (int i=0;i<numInputs;i++){
		inputsPreceding.push_back(0.0);
		precedingToNet.push_back(0.0);
		precedingToInput.push_back(0.0);
		precedingToForget.push_back(0.0);
		precedingToOutput.push_back(0.0);		
	}

	for (int i=0;i<numBlocksInLayer;i++){
		inputsInternal.push_back(0.0);
		internalToNet.push_back(0.0);
		internalToInput.push_back(0.0);
		internalToForget.push_back(0.0);
		internalToOutput.push_back(0.0);
	}
	
	biasToNet = 0.0;
	biasToInput = 0.0;
	biasToForget = 0.0;
	biasToOutput = 0.0;

	peepCellToInput = 0.0;
	peepCellToForget = 0.0;
	peepCellToOutput = 0.0;
}

void LstmBlock::setInputs(std::vector<float> inputs){
	for (int i=0;i<numInputs;i++) inputsPreceding[i] = inputs[i];
}
void LstmBlock::setInternal(std::vector<float> internal){
	for (int i=0;i<numBlocksInLayer;i++) inputsInternal[i] = internal[i];
}

void LstmBlock::step(){
// YOU ARE HERE
}

float LstmBlock::getOutput(){
	return y;
}
