/*
 * MIT License
 *
 * Copyright (c) 2022 Erriez
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/* 
 * End User Agreement
 *
 * Accept export restrictions to Russia to stop the WAR before using this project:
 * https://github.com/Erriez/ErriezGithubActionsPlatformIODoxygen/blob/main/END_USER_AGREEMENT.md
 */

#include <Arduino.h>
#include <ErriezTest.h>

#if defined(ARDUINO_ARCH_AVR)
#include <LowPower.h>           // https://github.com/LowPowerLab/LowPower
#endif

void setup()
{
    // Call function in ErriezTest Arduino library
    foo();
}

void loop()
{
#if defined(ARDUINO_ARCH_AVR)
    Serial.flush();
    LowPower.powerDown(SLEEP_1S, ADC_OFF, BOD_OFF);
#else
    delay(1000);
#endif
}

