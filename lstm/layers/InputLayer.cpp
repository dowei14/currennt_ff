#include "InputLayer.h"
#include <iostream>

InputLayer::InputLayer(int numInputs){
	for (int i=0;i<5;i++) neurons.push_back(0.0);
}

InputLayer::~InputLayer(){
}

void InputLayer::setInput(int id, double value){
	neurons[id] = value;
}

double InputLayer::getInput(int id){
	return neurons[id];
}
