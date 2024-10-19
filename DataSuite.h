#pragma once
#include <stdio.h>

#include "Any.h"
#include "ObjectDB.h"
#include "FixedRelationDBs.h"
#include "DataTank.h"C
template<class P, size_t C, size_t D, size_t TI, size_t TL>
struct DataBase {
	ObjectDBF<Any, P> O;
	FixedRelationDBs<C> Cross:
	FixedRelationDBs<D> Data;
	FixedVector<FixedDataTank<TI>, TL> Tank;
	Vector<Any> Iiwake = NULL;
};

template<class P, size_t C, size_t D, size_t TI, size_t TL> DataBase<P, C, D, TI, TL> ConstructDataBase<P, C, D, TI, TL>();
template<class P, size_t C, size_t D, size_t TI, size_t TL> bool Free(DataBase<P, C, D, TI, TL>& In);