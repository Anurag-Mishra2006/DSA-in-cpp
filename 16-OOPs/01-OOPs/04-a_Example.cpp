/*CREATE A CLASS 'CRICKTER' THAT CONTAINS NAAME OF CRICKTER , HIS AGE, NUMBERS OF TEST MATCHES
THAT HE HAS PLAYED AND THE AVG RUNS THAT HE HAS SCORED IN EACH TEST MATCH.
CREATE AN ARRAY OF DATA TYPE CRICKETER TO HOLD RECORDS OF 20 SUCH CRICKTERS AND THEN WRITE A PROGRAM TO READ THESE RECORDS

*/
#include<iostream>
using namespace std ;
class Cricketer{
    public:
    char name ;
    int age;
    int noOfTestMatches;
    int avgScore;


};
int main(){
    Cricketer virat ;
    virat.name ='V';
    virat.age =30;
    virat.noOfTestMatches=100;
    virat.avgScore =80;


    Cricketer dhoni;
    dhoni.name ='D';
    dhoni.age =35;
    dhoni.noOfTestMatches = 120;
    dhoni.avgScore =75;
    Cricketer crickter [2] = {virat , dhoni};
    for(int i=0;i<2;i++){
        cout<<crickter[i].name<<endl;
        cout<<crickter[i].age<<endl;
        cout<<crickter[i].avgScore<<endl;
        cout<<crickter[i].noOfTestMatches<<endl;
         
    }
}