//
// Created by Charlie Bershatsky on 4/19/23.
//

#ifndef Adafruit_Arduino_BLEIAS_H
#define Adafruit_Arduino_BLEIAS_H

#include "bluefruit_common.h"

#include "BLEService.h"
#include "BLECharacteristic.h"


class BLEIas : public BLEService {

protected:
    BLECharacteristic _alert;

public:
    BLEIas(void);

    void write(uint8_t level);

    virtual err_t begin(void);

};


#endif //Adafruit_Arduino_BLEIAS_H
