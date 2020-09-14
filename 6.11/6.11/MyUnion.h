#include <vector>
struct MyUnion 
{
	
	int type; //0 - Month(ученик)   1 - Year(событие)
	const char* ch;
	const char* date1;

	union {
		int Month;
		int Year;
	} Union;

	bool PMonth(){
		if (type == 0){
			if (Union.Month == 5)
				return true;
			else
				return false;
		}
		else
			return false;
	}

	bool PYear(){
		if (type == 1){
			if ((Union.Year > 1700) && (Union.Year < 1801))
				return true;
			else 
				return false;
		}
		else 
			return false;
	}
};
std::vector<MyUnion> arr;