#include <iostream>

class Channel : public cSimpleModule
{
protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);

protected:
    int numGates;
};

Define_Module(Channel);

void Channel::initialize()
{
   
}

void Channel::handleMessage(cMessage *msg)
{
    
    
}

