#pragma once

template< typename T, typename D>
/// <summary>
/// Template class pair that holds two items of any kind
/// </summary>
/// <typeparam name="T"></typeparam>
/// <typeparam name="D"></typeparam>
class Pair
{
	T first;
	D second;
public:
	Pair() = default;
	Pair(T first, D second);
	const T& getFirst() const;
	const D& getSecond() const;
	
	void setFirst(const T& other);
	void setSecond(const D& other);
};

template <typename T, typename D>
Pair < T, D>::Pair(T first, D second) : first(first), second(second)
{
	this->first = first;
	this->second = second;
}

template <typename T, typename D>
const T& Pair<T, D>::getFirst() const
{
	return first;
}
template <typename T, typename D>
const D& Pair<T, D>::getSecond() const
{
	return second;
}
template <typename T, typename D>
void Pair<T, D>::setFirst(const T& other) 
{
	first = other;
}
template <typename T, typename D>
void Pair<T, D>::setSecond(const D& other) 
{
	second = other;
}

