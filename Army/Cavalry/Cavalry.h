#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_CAVALRY_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_CAVALRY_H

#include "../Unite.h"

class Cavalry : public Unite {
public:
    virtual void charge() = 0;
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_CAVALRY_H