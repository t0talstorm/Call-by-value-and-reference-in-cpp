// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 10-C

#include <iostream>
#include <cstdio>
using namespace std ; 


int EmployeeCheck(bool  year1 , bool  research , bool  project , bool  profit, int *salary);

int main() {
    int year , research_project , new_project , profit_caused , salary = 0;
    bool  year1 = 0 ,research = 0 , project = 0, profit = 0;
    printf("\n Have You Completed 1 year in this company : ");
    printf("\n1) Yes\n2) No\n  : ");
    scanf("%d", &year);
    if(year == 1) year1 = 1 ;
    
    printf("\n How many research projects Have You Completed : ");
    printf("\n  : ");
    scanf("%d", &research_project);
    if(research_project > 0) research = 1 ;
    
    printf("\n Do you have any new research project in pipeline : ");
    printf("\n1) Yes\n2) No\n  : ");
    scanf("%d", &new_project);
    if(new_project == 1) project = 1 ;
    
    printf("\n How much profit have you caused for the company : ");
    printf("\n  : ");
    scanf("%d", &profit_caused);
    if(profit_caused > 100000) profit = 1 ;
    
    
    int  Check =  EmployeeCheck( year1 ,  research ,  project ,  profit, &salary);
    if(Check){
        printf("\n You qualify for bonus!! \n");
        printf("\n Your New yearly salary is %d !! ", salary);
        
    }else{
        printf("\n You dont qualify for bonus");
    }

}
int  EmployeeCheck(bool  year1 , bool  research , bool  project , bool profit, int *salary){
    int check = 0; 
    if (year1) check++;
    if (research) check++;
    if (project) check++;
    if (profit) check++;
    
    if(check >= 3 ){
    printf("\n Enter your previous year salary : ");
    scanf("%d", salary);
    *salary = *salary * 0.2 + *salary ;
     return 1; 
    }else return 0 ; 
    
}

/*
OUTPUT -->

 Have You Completed 1 year in this company : 
1) Yes
2) No
  : 1

 How many research projects Have You Completed : 
  : 2

 Do you have any new research project in pipeline : 
1) Yes
2) No
  : 1

 How much profit have you caused for the company : 
  : 100

 Enter your previous year salary : 100000

 You qualify for bonus!! 

 Your New yearly salary is 120000 !! 

=== Code Execution Successful ===



 Have You Completed 1 year in this company : 
1) Yes
2) No
  : 2

 How many research projects Have You Completed : 
  : 0

 Do you have any new research project in pipeline : 
1) Yes
2) No
  : 2

 How much profit have you caused for the company : 
  : 0

 You dont qualify for bonus

=== Code Execution Successful ===
*/
