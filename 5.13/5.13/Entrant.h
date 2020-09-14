using namespace System;

ref struct Entrant
{
	String^ ID;
	int one;
	int two;
	int three;

	int CheckEnt(){
		if ((one < 3) || (two < 3) || (three < 3))
			return -1;
		if ((one + two + three) == 15)
			return 1;
		if ((one + two + three) > 11)
			return 0;

		return -3;
				/*else 
			{
				if ((one < 3) || (two < 3) || (three < 3))
					return -1;
			}*/
	}
};