#include "layers/InputLayer.h"
#include "lstm.h"

#include <iostream>

LSTM::LSTM(int inputs, int lstms, int outputs){
	_inputs = inputs;
	_lstms = lstms;
	_outputs = outputs;
	_inputLayer.setNeurons(inputs);
}

LSTM::~LSTM(){
}


