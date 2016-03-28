#ifndef LAYERS_LSTMLAYER_H
#define LAYERS_LSTMLAYER_H

#include <vector>
#include "LstmBlock.h"

class LstmLayer
{
typedef std::vector<float> real_vector;

public:
    /**
     * Constructs the Layer
     *
     * @param numInputs       Number of Inmputs
     */
    LstmLayer();
    /**
     * Destructor
     */
    virtual ~LstmLayer();
    
    virtual void setup(int _numInputs, int _numBlocksInLayer, float _bias);

    
private:    
	std::vector<LstmBlock> blocks;
};


#endif
