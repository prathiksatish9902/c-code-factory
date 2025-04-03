#include "collage.h"

Collage::Collage() {
    m_management->initStudent(&m_studentlist);
    m_management->initStaff(&m_staffvector);
}
