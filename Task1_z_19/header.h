#ifndef BITS_H_
#define BITS_H_
/**
* @brief				Функція welcome() яка пояснює суть роботи програми і інформація про розробника програми.
*
* @param				 	
*			
* @return	void		
*/
void welcome();
/**
* @brief				Функція enter() отримує число і виводить результат 
*
* @param				 	
*			
* @return	void		
*/
void enter();
/**
* @brief				Функція error() виловлює помилки вводу.
*
* @param				 	
*			
* @return	void		
*/
void error();
/**
* @brief				Функція swapsAdjacentGroupsOfFourBits() міняє місцями сусідні групи з 4-х бітів 
*						у заданому беззнаковому довгому цілому числі. 
* @param				 	
*			[in]		&number Посилання на задане беззнакове довге ціле число
* @return	void		
*/
void swapsAdjacentGroupsOfFourBits(unsigned long &number);
#endif
