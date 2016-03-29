#ifndef LAYERS_FEEDFORWARDLAYER_H
#define LAYERS_FEEDFORWARDLAYER_H

#include <vector>



class FeedForwardLayer
{
struct Neuron{
	std::vector<float> weights;
	float biasWeight;
	float activation;
	float output;
};
public:
    /**
     * Constructs the Layer
     *
     * @param numInputs       Number of Inmputs
     */
    FeedForwardLayer();
    /**
     * Destructor
     */
    virtual ~FeedForwardLayer();

	virtual void setNeurons(int _numNeurons, int _numInputs, float _bias);
	
	virtual void setInputs(std::vector<float> _inputs);

	virtual void setWeights(std::vector<float> _inputs);
	virtual void step();
	virtual int getOutput() {return output;}
	virtual float sumVecWeight(std::vector<float> inputVec, std::vector<float> weights);
    
protected:
	int numNeurons, numInputs;
	int output;
	float bias;
	std::vector<Neuron> neurons;
	std::vector<float> inputs;
};


#endif
