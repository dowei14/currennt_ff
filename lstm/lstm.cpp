#include "layers/InputLayer.h"
#include "lstm.h"

#include <iostream>

LSTM::LSTM(int inputs, int lstms, int outputs, float bias){
	_inputs = inputs;
	_lstms = lstms;
	_outputs = outputs;
	_inputLayer.setNeurons(inputs);
	_lstmLayer.setup(inputs,lstms, bias);
}

LSTM::~LSTM(){
}


