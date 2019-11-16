#ifndef C_HPP
#define C_HPP

#include <iostream>
#include <string>
#include "Base.hpp"

class C : public Base {

public:
	C(void);
	C(C const &src);

	virtual ~C(void);

	 C &operator=(C const &);
};

#endif