#pragma once

#include <assert.h>

template <typename T>
class CStackNode
{
	template <typename T>
	friend class CStackList;

private:
	CStackNode()
	{
		m_pNext = nullptr;
	}

	~CStackNode()
	{

	}

private:
	CStackNode<T>* m_pNext;
	T					m_Data;


};

template <typename T>
class CStackList
{
public:

	CStackList() :
		m_iSize(0)
	{
		m_pNode = nullptr;
	}

	~CStackList()
	{
		clear();
	}

private:
	typedef CStackNode<T>	 NODE;
	typedef CStackNode<T>* PNODE;

private:
	PNODE	m_pNode;
	int		m_iSize;

public:

	void push(const T& data)
	{
		//데이터를 추가하기 위한 노드
		PNODE pNode = new NODE;

		pNode->m_Data = data;

		pNode->m_pNext = m_pNode;

		m_pNode = pNode;

		++m_iSize;
	}

	T top() const
	{
		if (empty())
		{
			assert(false);

		}

		return m_pNode->m_Data;
	}

	T pop()
	{
		if (empty())
		{
			assert(false);
		}

		PNODE pNext = m_pNode->m_pNext;
		T	data = m_pNode->m_Data;

		delete m_pNode;

		m_pNode = pNext;

		--m_iSize;

		return data;
	}

	void clear()
	{
		PNODE	pNode = m_pNode;

		while (pNode)
		{
			PNODE	pNext = pNode->m_pNext;

			delete pNode;

			pNode = pNext;
		}

		m_iSize = 0;

	}

	bool empty() const
	{
		return m_iSize == 0;
	}

	int size() const
	{
		return m_iSize;
	}
};

template <typename T, int SIZE = 10>
class CStackArray
{
public:
	CStackArray()
	{
		m_iCapacity = SIZE;
		m_iSize = 0;

		m_pArray = new T[m_iCapacity];
	}
	~CStackArray()
	{
		delete[] m_pArray;
	}

private:
	T* m_pArray;
	int	m_iSize;
	int	m_iCapacity;

public:
	void pust(const T& data)
	{
		if (full())
		{
			m_iCapacity *= 2;
			T* pArray = new T[m_iCapacity];


			// memcpy 메모리를 복사해주는 함수.
			// 1번인자의 주소에 2번인자의 데이터를 복사한다.
			// 3번인자에 지정하는 크키만큼.
			memcpy(pArray, m_pArray, sizeof(T) * m_iSize);

			delete[] m_pArray;
			m_pArray = pArray;
		}

		m_pArray[m_iSize] = data;
		++m_iSize;
	}

	T top() const
	{
		if (empty())
		{
			assert(false);

		}

		return m_pArray[m_iSize - 1];
	}

	T pop()
	{
		if (empty())
		{
			assert(false);
		}

		--m_iSize;

		T	data = m_pArray[m_iSize];

		return data;
	}

	void clear()
	{
		m_iSize = 0;
	}

	bool empty() const
	{
		return m_iSize == 0;
	}

	bool full() const
	{
		return m_iSize == m_iCapacity;
	}

	int size() const
	{
		return m_iSize;
	}

	int capacity() const
	{
		return m_iCapacity;
	}
};
