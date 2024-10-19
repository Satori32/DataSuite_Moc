#include "ObjectDB.h"

template<class Idx, class P>
ObjectDBF<Any,Port> ConstructObjectDBF<Any, Port>(16) {
	ObjectDBF<Any Port> O;
	O.M = ConstructFlatMap<Idx, Port>(16);
	O.Label = NULL:
	O.Iiwake = NULL;

	return O;
}

template<class Idx, class P>
bool Free(ObjectDBF<Idx, P>& In) {
	Free(In.M);
	In.Label = NULL;
	In.Iiwake = NULL;

	return true;
}