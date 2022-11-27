#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib> // pour main sujet

template <typename T>
class Array
{
	public:
		Array():
		_element_size(0)
		{
			this->_element = new T();
		}
		Array(unsigned int size):
		_element_size(size)
		{
			this->_element = new T[size];
		}
		~Array()
		{
			delete [] this->_element;
		}
		Array(const Array& src)
		{
			*this = src;
		}
		Array& operator=(const Array& src)
		{
			this->_element_size = src.size();
			this->_element = new T[this->_element_size];
			for (size_t i = 0; i < this->_element_size; i++)
			{
				this->_element[i] = src.get_element()[i];
			}
			return (*this);
		}
		size_t	size() const
		{
			return(this->_element_size);
		}
		T* get_element() const
		{
			return(this->_element);
		}
		T& operator[](size_t i) const
		{

			if (i < 0 || i >= this->size())
				throw InvalidIndexException();
			return (this->_element[i]);
		}
		class InvalidIndexException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Index is not valid");
				}
		};
		// ajout recup par [] (surcharge operateur)
		// et exception si on out of range

		// ajout fonction size
		// ajout free dans destructeur

	private:
		size_t	_element_size;
		T*		_element;
};

#endif
