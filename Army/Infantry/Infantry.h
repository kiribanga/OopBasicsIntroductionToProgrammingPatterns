#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_INFANTRY_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_INFANTRY_H

#include "../Unite.h"

class Infantry : public Unite {
public:
    virtual void protect() = 0;
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_INFANTRY_H
