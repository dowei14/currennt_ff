#include "LstmLayer.h"
#include <iostream>

LstmLayer::LstmLayer(){

}

LstmLayer::~LstmLayer(){
}

void LstmLayer::setup(int _numInputs, int _numBlocksInLayer, float _bias){
	for (int i=0;i<_numBlocksInLayer;i++){
		LstmBlock block;
		block.setup(_numInputs,_numBlocksInLayer,_bias);
		blocks.push_back(block);
	}
	
}
