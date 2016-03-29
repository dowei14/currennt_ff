#ifndef LSTM_H
#define LSTM_H

#include <vector>
#include "layers/InputLayer.h"
#include "layers/LstmLayer.h"

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
    
    virtual InputLayer getInputLayer() {return inputLayer;}
    virtual LstmLayer getLstmLayer() {return lstmLayer;}    
    
private:
	InputLayer inputLayer;
	LstmLayer lstmLayer;
	int inputs, lstms, outputs;
};


#endif
