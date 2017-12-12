#ifndef CONCRETECREATOR_H
#define CONCRETECREATOR_H

class ConcreteCreator : public ICreator {
    public:
        IDocument* createDocument();
};

#endif
