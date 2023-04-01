#include<iostream>

int main(void)
{
    int numericalGrade;
    char letterGrade;
    std::cin>>numericalGrade;
    if((numericalGrade < 0) || (numericalGrade > 100)) std::cout<<"Make no sense\n";
    else
    {
        int num;
        num = numericalGrade / 10;
        switch(num)
        {
            case 10:
            case 9:
		letterGrade = 'A';
	        break;
	    case 8:
		letterGrade = 'B';
		break;
	    case 7:
		letterGrade = 'C';
	        break;
	    case 6:
		letterGrade = 'D';
		break;
	    default:
		letterGrade = 'F';
	}
        std::cout<<letterGrade<<std::endl;
    }
    
    return 0;
}
