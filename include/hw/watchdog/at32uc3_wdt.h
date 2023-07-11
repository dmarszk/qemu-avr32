#ifndef QEMU_AVR32_AT32UC3_WDT_H
#define QEMU_AVR32_AT32UC3_WDT_H

#include "hw/sysbus.h"
#include "qom/object.h"
#include "hw/irq.h"
#include "qemu/timer.h"
#include "hw/ptimer.h"

#define TYPE_AT32UC3_WDT "at32uc3.wdt"
OBJECT_DECLARE_SIMPLE_TYPE(AT32UC3WDTState, AT32UC3_WDT)

struct AT32UC3WDTState {
    SysBusDevice parent_obj;

    MemoryRegion mmio;

    struct ptimer_state *timer;

    uint32_t ctrl;
    uint32_t clr;
    uint32_t sr;
};

#endif //QEMU_AVR32_AT32UC3_WDT_H
