/*
 ============================================================================
 Name        : assignments-lesson-9/1.c
 Author      : Mohamed Ahmed Mohamed Osman
 Version     :
 Copyright   : Your copyright notice
 Description : Timer
 ============================================================================
 */


#ifndef UTILS_H_
#define UTILS_H_

/******************************************************************************
*                               FUNCTION-LIKE MACROS                          *
*******************************************************************************/
#define SET_BIT(PORT, BIT)					(PORT |= (1 << BIT))
#define RESET_BIT(PORT, BIT)				(PORT &= ~(1 << BIT))
#define TOG_BIT(PORT, BIT)					(PORT ^= (1 << BIT))
#define GET_BIT(PORT, BIT)					(PORT & (1 << BIT))

#endif /* UTILS_H_ */