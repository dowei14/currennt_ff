#include "InputLayer.h"
#include <iostream>

InputLayer::InputLayer(){

}

InputLayer::~InputLayer(){
}

void InputLayer::setNeurons(int numNeurons){
	if (neurons.size() > numNeurons) {
		while (neurons.size() != numNeurons) neurons.pop_back();
	} else if (neurons.size() < numNeurons) {
		while (neurons.size() != numNeurons) neurons.push_back(0.0);
	}
}
void InputLayer::setInput(int id, double value){
	neurons[id] = value;
}

double InputLayer::getInput(int id){
	return neurons[id];
}
