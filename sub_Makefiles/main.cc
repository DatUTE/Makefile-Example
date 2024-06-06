#include "bodyModule.h"
#include "bodyService.h"
#include "bodyElectric.h"
#include "commonElectric.h"
#include "engineElectric.h"
#include "sensorElectric.h"

int main()
{
    createBodyModule();
    useBodyService();
    bodyElectric();
    return 0;
}