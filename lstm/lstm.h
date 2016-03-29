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
    
    virtual InputLayer getInputLayer() {return _inputLayer;}
    virtual LstmLayer getLstmLayer() {return _lstmLayer;}    
    
private:
	InputLayer _inputLayer;
	LstmLayer _lstmLayer;
	int _inputs, _lstms, _outputs;
};


#endif
