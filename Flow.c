#include <stdlib.h>
#include <stdarg.h>
#include "Flow.h"
#include "Flow.r.h"

struct Flow_st flow = {FLOW_VERSION_MAJOR, FLOW_VERSION_MINOR};
const struct Flow_st *Flow_ = &flow;