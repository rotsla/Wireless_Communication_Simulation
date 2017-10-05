

cplusplus {{
#include "SignalMessage_m.h"
}};

namespace wsl_csma;

packet SignalMessage;

packet SignalStartMessage extends SignalMessage
{
    int transmitPowerDBm;
    
    int positionX;
    int positionY;
    
    bool collidedFlag = false;
}
