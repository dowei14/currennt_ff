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
     * @param numInputs       Number of Inmputs
     */
    LSTM(int inputs, int lstms, int outputs, float bias);
    /**
     * Destructor
     */
    virtual ~LSTM();
    
private:
	InputLayer _inputLayer;
	LstmLayer _lstmLayer;
	int _inputs, _lstms, _outputs;
};


#endif
