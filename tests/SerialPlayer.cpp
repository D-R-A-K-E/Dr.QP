//
// Created by Anton Matosov on 6/15/17.
//

#include "SerialPlayer.h"

void SerialPlayer::begin(const unsigned long baudRate, const uint8_t transferConfig)
{

}

size_t SerialPlayer::write(uint8_t byte)
{
  return 0;
}

bool SerialPlayer::available()
{
  return false;
}

uint8_t SerialPlayer::peek()
{
  return kNoData;
}

uint8_t SerialPlayer::read()
{
  return kNoData;
}