#include<stdio.h>
#include<string.h>
int main(){
	int i;
	int yearmax, monthmax, daymax;
	
	struct date {
    int day;
    int month;
    int year;
  };
  struct student {
    int std_id;
    char std_name[40];
    struct date std_birth;
    struct date std_checkin;
    int room;
  };

  typedef struct student STD;
  STD stdrecord[5] = { {10001, "Chris Hemsworth" ,11, 12, 2552, 3 ,5 ,2560, 4} ,
                       {10002, "Tom Cruise" ,3 ,4 ,2552 ,6 ,5 ,2555, 4},
                       {10003, "Taylor Swift" ,13 ,12, 2552, 1 ,5, 2560, 2},
                       {10004, "Hugh Grant", 9 ,9 ,2551, 1 ,5, 2560, 1},
                       {10005, "Kristen Stewart", 9 ,4, 2552 ,7 ,5 ,2560, 1} };
                       
	yearmax = stdrecord[1].std_checkin.year;
	monthmax = stdrecord[1].std_checkin.month;
	daymax = stdrecord[1].std_checkin.day;
	
	for(i=0; i<5; i++){
		if(stdrecord[i].std_checkin.year > yearmax){
			yearmax = stdrecord[i].std_checkin.year;
		}
		if(stdrecord[i].std_checkin.year == yearmax){
			if(stdrecord[i].std_checkin.month > monthmax){
				monthmax = stdrecord[i].std_checkin.month;
			}
		}
		if(stdrecord[i].std_checkin.year == yearmax){
			if(stdrecord[i].std_checkin.month == monthmax){
				if(stdrecord[i].std_checkin.day > daymax){
					daymax = stdrecord[i].std_checkin.day;
				}
			}
		}
		if(stdrecord[i].std_checkin.year == yearmax){
			if(stdrecord[i].std_checkin.month == monthmax){
				if(stdrecord[i].std_checkin.day == daymax){
					printf("%s", stdrecord[i].std_name);
				}
			}
		}
	}
}
