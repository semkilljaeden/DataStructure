#ifndef REDBLACKTREE_H
#define REDBLACKTREE_H
#include "ITree.h"
namespace hp 
{
	template<typename T>
	class RedBlackTree :public ITree<T>
	{
	public:
		class Iterator :public IIterator<T>
		{

		};
		class Const_Iterator :public IConst_Iterator<T>
		{

		};
	private:

	};
}

#endif //REDBLACKTREE_H
