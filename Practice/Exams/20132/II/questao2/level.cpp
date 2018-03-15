#include "level.h"
#include "layout.h"
#include "material.h"
#include "elephanttype.h"

Layout *Level::layout() const
{
    return m_layout;
}

Material *Level::material() const
{
    return m_material;
}

ElephantType *Level::elephantType() const
{
    return m_elephantType;
}

void Level::setLayout(Layout *layout)
{
    m_layout = layout;
}

void Level::setMaterial(Material *material)
{
    m_material = material;
}

void Level::setElephantType(ElephantType *elephantType)
{
    m_elephantType = elephantType;
}
