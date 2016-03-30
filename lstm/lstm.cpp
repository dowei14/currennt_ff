#include "layers/InputLayer.h"
#include "lstm.h"

#include <iostream>

LSTM::LSTM(int _inputs, int _lstms, int _outputs, float _bias){
	inputs = _inputs;
	lstms = _lstms;
	outputs = _outputs;
	inputLayer.setNeurons(_inputs);
	lstmLayer.setup(_inputs,_lstms, _bias);
	softMaxLayer.setNeurons(_outputs,_lstms,_bias);
	feedForwardLayer.setNeurons(1, _lstms, _bias);
}

LSTM::~LSTM(){
}


void LSTM::setInput(std::vector<float> inVec){
	inputLayer.setInputs(inVec);
}

void LSTM::step(){
	lstmLayer.setInputs(inputLayer.getInputVec());
	lstmLayer.step();
	if (outputs ==1){
		feedForwardLayer.setInputs(lstmLayer.getOutputs());
		feedForwardLayer.step();
	} else {
		softMaxLayer.setInputs(lstmLayer.getOutputs());
		softMaxLayer.step();
	}
}

std::vector<float> LSTM::getOutput(){
	return softMaxLayer.getOutputVec();
}

int LSTM::getState(){
	return softMaxLayer.getOutput();
}

int LSTM::getBinary(){
	return feedForwardLayer.getOutput();
}
