#ifndef CODE_INSIDE
	#define CODE_INSIDE
	#include "def.h"
	#include "gmp.h"
	/*20130112*/
	extern void follow(usetype);
	extern usetype find_next_j(usetype*);

	/*20130113*/
	extern usetype tcode[X][X];
	extern unsigned char dned[Ceilings];
	extern usetype sum_tate[X], sum_yoko[X], sum_name[2];

	/*20130202*/
	/*extern int total;*/
	/*20130309*/
	extern mpz_t total, eachtotal;
	#define BASE 10
#endif
