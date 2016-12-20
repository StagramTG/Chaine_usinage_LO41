#include "FactoryTable.h"

FactoryTable* factoryTable_Create(int _process_code, int _position)
{
    FactoryTable* ft = malloc(sizeof(FactoryTable));

    ft->is_in_process = FACTORYTABLE_FALSE;
    ft->position = _position;
    ft->process_code = _process_code;
    ft->is_brocken = FACTORYTABLE_FALSE;

    return ft;
}

void factoryTable_Destroy(FactoryTable* _ft)
{
    if(_ft == NULL)
        return;

    free(_ft);
}
