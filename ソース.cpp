#include <stdio.h>

#include "Any.h"
#include "ObjectDB.h"
#include "FixedRelationDBs.h"
#include "DataTank.h"C
template<class P,size_t C,size_t D,size_t TI,size_t TL>
struct DataBase {
	ObjectDBF<Any,P> O;
	FixedRelationDBs<C> Cross:
	FixedRelationDBs<D> Data;
	FixedVector<FixedDataTank<TI>,TL> Tank;
	Vector<Any> Iiwake = NULL;
};
template<class P,size_t C,size_t D,size_t TI,size_t TL>
DataBase<P, C, D, TI, TL> ConstructDataBase<P, C, D, TI, TL>() {
	DataBase<P, C, D, TI, TL> DB;

	return DB;
}

template<class P,size_t C,size_t D,size_t TI,size_t TL>
bool Free(DataBase<P, C, D, TI,TL>& In) {
	return Free(In);
}

static const size_t Cross = 40;
static const size_t Data = 40;
static const size_t TankItem = 16;
static const size_t TankLength = 40;

int main() {
	DataBase<Port, Cross, Data, TankItem,TankLength> DB=ConstructDataBase<Port,Cross,Data, TankItem,TankLength>();

	Free(DB);
	return 0;
}