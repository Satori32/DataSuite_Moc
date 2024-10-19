#include "DataSuite.h"

template<class P, size_t C, size_t D, size_t TI, size_t TL>
DataBase<P, C, D, TI, TL> ConstructDataBase<P, C, D, TI, TL>() {
	DataBase<P, C, D, TI, TL> DB;

	return DB;
}

template<class P, size_t C, size_t D, size_t TI, size_t TL>
bool Free(DataBase<P, C, D, TI, TL>& In) {
	return Free(In);
}