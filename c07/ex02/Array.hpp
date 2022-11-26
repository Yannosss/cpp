#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	public:
		Array()
		{
			this->_element = new T();
		}
		Array(unsigned int size)
		{
			this->_element = new T[size];
		}
		Array(const Array& src)
		{
			*this = src;
		}
		Array& operator=(const Array& src)
		{
			size_t new_size = sizeof(src.get_element()) / sizeof(T);
			this->_element = new T[new_size];
			for (int i = 0; i < new_size; i++)
			{
				this->_element[i] = src.get_element()[i];
			}

		}

		T* get_element()
		{
			return(this->_element);
		}
		// ajout recup par [] (surcharge operateur)
		// et exception si on out of range

		// ajout fonction size

	private:
		T _element[];
};

#endif
