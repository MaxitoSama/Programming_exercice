#define MIN_ARRAY_BLOCK_SIZE 10
#define uint unsigned int

template<class Type>
class DynArray 
{
public:
	DynArray()
	{
		allocMem(MIN_ARRAY_BLOCK_SIZE);
		memeSize = MIN_ARRAY_BLOCK_SIZE;
		numElems = 0;
	}
	DynArray(uint memSize)
	{
		this->memSize = memSize;
		allocMem(memSize);
		numElems = 0;
	}
	~DynArray(){}

	bool empty()const
	{
		return numElems == 0;
	}
	
	uint size() const
	{
		return numElems;
	}
	bool insert(uint index, const Type& elem)
	{
		if (index > numElems)
		{
			cout << "ther are some empty spaces before!" << endl;
			return false;
		}
		else
		{
			if (numElems == memeSize)
			{
				Type *aux=arrayElems;
				memeSize += 5;
				allocMem(memeSize);
				for (int i = 0; i < numElems; i++)
				{
					arrayElems[index] = aux[index];
				}
				free(aux);
			}
			if (index == numElems)
			{
				arrayElems[index] = elem;
			}
			else
			{
				for (int i = index; i < numElems; i++)
				{
					arrayElems[i + 1] = arrayElems[i];
				}
				arrayElems[index] = elem;
			}
		}
		numElems++;
		return true;
	}
	bool remove(uint index)
	{
		if (index > numElems)
		{
			cout << "Error" << endl;
			return false;
		}
		else
		{
			arrayElems[index] = nullptr;
			numElems--;
			return true;
		}
	}
	Type& operator[](uint index)const
	{
		return arrayElems[index];
	}
	void shrinkToFit()
	{
		if (numElems < memeSize)
		{
			Type *aux = arrayElems;
			uint dif = memeSize - numElems;
			memeSize -= dif;
			allocMem(memeSize);
			for (int i = 0; i < numElems; i++)
			{
				arrayElems[index] = aux[index];
			}
			free(aux);
		}
	}
	void print()
	{
		for (int i = 0; i < numElems; i++)
		{
			cout << arrayElems[i]<<" | ";
		}
		cout << endl;
	}

private:
	void allocMem(uint memSize);

	Type* arrayElems;
	uint memeSize;
	uint numElems;
};

template<class Type>
void DynArray<Type>::allocMem(uint memSize)
{
	arrayElems = (Type*)malloc(sizeof(Type)*memSize);
}
