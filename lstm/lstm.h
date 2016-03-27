#ifndef LSTM_H
#define LSTM_H

#include <vector>
#include "layers/InputLayer.h"

class LSTM
{
public:
    /**
     * Constructs the Layer
     *
     * @param numInputs       Number of Inmputs
     */
    LSTM(int inputs, int lstms, int outputs);
    /**
     * Destructor
     */
    virtual ~LSTM();
    
protected:
	InputLayer _inputLayer;
	int _inputs, _lstms, _outputs;
};


#endif
