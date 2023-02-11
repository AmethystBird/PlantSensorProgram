#include "Sensor.h"

float Sensor::GetMockedSensorValue()
{
    int randomValue = rand() % 100;
    float randomDecimalValue = static_cast<float>(randomValue);
    randomDecimalValue = randomDecimalValue / 100.f;
    return randomDecimalValue;
}

/*float* Sensor::GetUpdatingValues()
{
    return sensorBuffer.data();
}*/

vector<float>* Sensor::GetUpdatingValues()
{
    return &sensorBuffer;
}

string Sensor::GetSensorName()
{
    return valueType;
}

void Sensor::StopSensing()
{
    sensorQueue.break_dispatch();
}