﻿#pragma once
#ifndef _SALE_RECIPE
#define _SALE_RECIPE
#include "class.h"

bool bool_set_sale_recipe(struct recipe* object, float input)
{
	//judge if the value of input is legal
	if (input <= 1.0 && input>0.0)
	{
		//change the value of sale_discount 
		object->sale_discount = input;
		printf("The sale_discount has been successfully changed.\n");
		return true;
	}
	else
	{
		printf("Illegal input,set a discount again:\n");
		return false;
	}
}


#endif