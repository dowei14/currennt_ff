#include "layers/InputLayer.h"
#include "lstm.h"

#include <iostream>

LSTM::LSTM(int _inputs, int _lstms, int _outputs, float _bias){
	inputs = _inputs;
	lstms = _lstms;
	outputs = _outputs;
	inputLayer.setNeurons(_inputs);
	lstmLayer.setup(_inputs,_lstms, _bias);
}

LSTM::~LSTM(){
}


void LSTM::setInput(std::vector<float> inVec){
	inputLayer.setInputs(inVec);
}

void LSTM::step(){
	lstmLayer.setInputs(inputLayer.getInputVec());
	lstmLayer.step();
	/*TODO: Add SoftMax Layer */
}

std::vector<float> LSTM::getOutput(){
/* TODO: get Output of SoftMax Layer */
}

int LSTM::getState(){
/* TODO: get max of SoftMax as state output */
}
