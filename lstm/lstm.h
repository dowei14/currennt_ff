#ifndef LSTM_H
#define LSTM_H

#include <vector>
#include "layers/InputLayer.h"
#include "layers/LstmLayer.h"
#include "layers/SoftMaxLayer.h"
#include "layers/FeedForwardLayer.h"

class LSTM
{
public:
    /**
     * Constructs the Layer
     *
     * @param inputs       Number of Inputs
     * @param lstms        Number of LSTM Blocks in LSTM Layer     
     * @param outputs      Number of Outputs
     * @param bias		   bias value
     */
    LSTM(int inputs, int lstms, int outputs, float bias);
    /**
     * Destructor
     */
    virtual ~LSTM();
    
    virtual void setInput(std::vector<float> inVec);
    virtual void step();
    virtual std::vector<float> getOutput();
    virtual int getState();
    virtual int getBinary();    
    
    virtual InputLayer getInputLayer() {return inputLayer;}
    virtual LstmLayer getLstmLayer() {return lstmLayer;}    
    
private:
	int inputs, lstms, outputs;
	InputLayer inputLayer;
	LstmLayer lstmLayer;
	SoftMaxLayer softMaxLayer;	
	FeedForwardLayer feedForwardLayer;
};


#endif
