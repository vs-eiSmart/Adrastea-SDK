// /*
//  ***************************************************************************************************
//  * Würth Elektronik eiSos GmbH & Co. KG
//  * https://www.we-online.com
//  *
//  * THE SOFTWARE INCLUDING THE SOURCE CODE IS PROVIDED “AS IS”. YOU ACKNOWLEDGE THAT WÜRTH ELEKTRONIK
//  * EISOS MAKES NO REPRESENTATIONS AND WARRANTIES OF ANY KIND RELATED TO, BUT NOT LIMITED
//  * TO THE NON-INFRINGEMENT OF THIRD PARTIES’ INTELLECTUAL PROPERTY RIGHTS OR THE
//  * MERCHANTABILITY OR FITNESS FOR YOUR INTENDED PURPOSE OR USAGE. WÜRTH ELEKTRONIK EISOS DOES NOT
//  * WARRANT OR REPRESENT THAT ANY LICENSE, EITHER EXPRESS OR IMPLIED, IS GRANTED UNDER ANY PATENT
//  * RIGHT, COPYRIGHT, MASK WORK RIGHT, OR OTHER INTELLECTUAL PROPERTY RIGHT RELATING TO ANY
//  * COMBINATION, MACHINE, OR PROCESS IN WHICH THE PRODUCT IS USED. INFORMATION PUBLISHED BY
//  * WÜRTH ELEKTRONIK EISOS REGARDING THIRD-PARTY PRODUCTS OR SERVICES DOES NOT CONSTITUTE A LICENSE
//  * FROM WÜRTH ELEKTRONIK EISOS TO USE SUCH PRODUCTS OR SERVICES OR A WARRANTY OR ENDORSEMENT
//  * THEREOF
//  *
//  * THIS SOURCE CODE IS PROTECTED BY A LICENSE.
//  * FOR MORE INFORMATION PLEASE CAREFULLY READ THE LICENSE AGREEMENT FILE (license_terms_wsen_sdk.pdf)
//  * LOCATED IN THE ROOT DIRECTORY OF THIS DRIVER PACKAGE.
//  *
//  * COPYRIGHT (c) 2024 Würth Elektronik eiSos GmbH & Co. KG
//  *
//  ***************************************************************************************************
//  */

#include "hal_common.h"


void HAL_Delay(uint32_t Delay)
{
  if (Delay > 0)
  {
    vTaskDelay((uint32_t)Delay);
  }
}


uint32_t HAL_GetTick()
{
  return xTaskGetTickCount();
}


void HAL_DelayMicroseconds(uint32_t sleepForUsec)
{
  uint32_t delayMicroSecond = (sleepForUsec + 500) / 1000;

  HAL_Delay(delayMicroSecond);
}


uint32_t HAL_GetTickMicroseconds()
{
  return HAL_GetTick() * 1000;
}
