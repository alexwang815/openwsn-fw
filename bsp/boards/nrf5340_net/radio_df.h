#ifndef __RADIO_DF_H
#define __RADIO_DF_H

#include "board.h"

//=========================== define ==========================================

#define SAMPLE_MAXCNT       (0xA0)

//=========================== typedef =========================================


//=========================== variables =======================================

//=========================== prototypes ======================================

// admin
void     radio_configure_direction_finding_antenna_switch(void);
void     radio_configure_direction_finding_manual(void);
void     radio_configure_direction_finding_inline(void);
bool     radio_get_df_samples(uint32_t* sample_buffer, uint16_t length);
void     radio_get_crc(uint8_t* crc24);

/**
\}
\}
*/

#endif
