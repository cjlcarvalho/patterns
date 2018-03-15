#ifndef LEVEL_H
#define LEVEL_H

class Layout;
class Material;
class ElephantType;

class Level
{
public:
    Layout *layout() const;
    Material *material() const;
    ElephantType *elephantType() const;
    void setLayout(Layout *layout);
    void setMaterial(Material *material);
    void setElephantType(ElephantType *elephantType);

private:
    Layout *m_layout;
    Material *m_material;
    ElephantType *m_elephantType;
};

#endif // LEVEL_H
