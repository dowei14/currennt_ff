#ifndef LAYERS_INPUTLAYER_H
#define LAYERS_INPUTLAYER_H

#include <vector>


class InputLayer
{
public:
    /**
     * Constructs the Layer
     *
     * @param numInputs       Number of Inmputs
     */
    InputLayer(int numInputs);
    /**
     * Destructor
     */
    virtual ~InputLayer();


    virtual void setInput(int id, double value);

    virtual double getInput(int id);
    
protected:    
	std::vector<double> neurons;
};


#endif
