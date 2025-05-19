#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int fixedPoint;
		static const int fractionalBits;
	public:
		Fixed();
		Fixed(const Fixed& obj);
		Fixed& operator=(const Fixed& src);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif