#include <iostream>
#include <cstdio>
using namespace std ; 


int EmployeeCheck(bool year1 , bool research , bool project , bool profit);

int main() {
    int year , research_project , new_project , profit_caused , salary = 0;
    bool year1 = 0 research = 0 , project = 0, profit = 0;
    printf("Have You Completed 1 year in this company : ");
    printf("1) Yes\n2) No\n  : ");
    scanf("%d", &Year);
    if(Year > 0) year1 = 1 ;
    
    printf("How many research projects Have You Completed : ");
    printf(" : ");
    scanf("%d", &research_project);
    if(research_project > 0) research = 1 ;
    
    printf("Do you have any new research project in pipeline : ");
    printf("1) Yes\n2) No\n  : ");
    scanf("%d", &new_project);
    if(new_project > 0) project = 1 ;
    
    printf("How much profit have you caused for the company : ");
    printf(" : ");
    scanf("%d", &profit_caused);
    if(profit_caused > 100000) profit = 1 ;
    
    bool Check =  EmployeeCheck( year1 ,  research ,  project ,  profit);
    if(Check){
        printf("You qualify for bonus!! \n");
        printf("Enter your previous year salary : ");
        scanf("%d", &salary);
        salary = salary * 0.2 + salary ;
        printf("Your New yearly salary is %d !! ", salary);
        
    }

}
bool EmployeeCheck(bool year1 , bool research , bool project , bool profit){
    int check = 0; 
    if (year1) check++;
    if (research) check++;
    if (project) check++;
    if (profit) check++;
    
    if(check > 2 ) return 1; 
    else return 0 ; 
    
}
