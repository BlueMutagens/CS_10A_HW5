//
//  tax.cpp
//  Homework5
//
//  Created by Sean Belingheri on 9/27/22.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int status;
    float income, income1, tax, etax;
    const float bra0 = 0, bra1 = .1, bra2 = .12, bra3 = .22, bra4 = .24, bra5 = .32, bra6 = .35, bra7 = .37;
    
    const int s1 = 12950, s2 = 23225, s3 = 54725, s4 = 102025, s5 = 183000, s6 = 228900, s7 = 552850;
    const float constant1 = (s2-s1)*bra1, constant2 = ((s3-s2)*bra2)+constant1, constant3 = ((s4-s3)*bra3)+constant2, constant4 = ((s5-s4)*bra4)+constant3, constant5 = ((s6-s5)*bra5)+constant4, constant6 = ((s7-s6)*bra6)+constant5;
    
    const int j1 = 25900, j2 = 46450, j3 = 109450, j4 = 204050, j5 = 366000, j6 = 457800, j7 = 673750;
    const float jconstant1 = (j2-j1)*bra1, jconstant2 = ((j3-j2)*bra2)+jconstant1, jconstant3 = ((j4-j3)*bra3)+jconstant2, jconstant4 = ((j5-j4)*bra4)+jconstant3, jconstant5 = ((j6-j5)*bra5)+jconstant4, jconstant6 = ((j7-j6)*bra6)+jconstant5;
    
    cout<<setprecision(2)<<fixed;
    
    cout<<"Are you filing as a single or jointly?\n 1. Single\n 2. Joint\nSelect option: ";
    cin>>status;
    cout<<"Enter income ($): ";
    cin>>income;
    
    switch(status)
    {
        case 1:
            if(income <= s1)
            {
                cout<<"Marginal tax rate: "<<bra0*100<<"%"<<endl;
                cout<<"Federal taxes due: $0.00"<<endl;
                cout<<"Effective tax rate: 0.00%"<<endl;
            }
            else if(income <= s2)
            {
                cout<<"Marginal tax rate: "<<bra1*100<<"%"<<endl;
                income1 = income - s1;
                tax = income1 * bra1;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            else if(income <= s3)
            {
                cout<<"Marginal tax rate: "<<bra2*100<<"%"<<endl;
                income1 = income - s2;
                tax = (income1 * bra2) + constant1;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            else if(income <= s4)
            {
                cout<<"Marginal tax rate: "<<bra3*100<<"%"<<endl;
                income1 = income - s3;
                tax = (income1 * bra3) + constant2;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            else if(income <= s5)
            {
                cout<<"Marginal tax rate: "<<bra4*100<<"%"<<endl;
                income1 = income - s4;
                tax = (income1 * bra4) + constant3;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            else if(income <= s6)
            {
                cout<<"Marginal tax rate: "<<bra5*100<<"%"<<endl;
                income1 = income - s5;
                tax = (income1 * bra5) + constant4;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            else if(income <= s7)
            {
                cout<<"Marginal tax rate: "<<bra6*100<<"%"<<endl;
                income1 = income - s6;
                tax = (income1 * bra6) + constant5;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            else
            {
                cout<<"Marginal tax rate: "<<bra7*100<<"%"<<endl;
                income1 = income - s7;
                tax = (income1 * bra7) + constant6;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
                
            break;
            
            
            
        case 2:
            if(income <= j1)
            {
                cout<<"Marginal tax rate: "<<bra0*100<<"%"<<endl;
                cout<<"Federal taxes due: $0.00"<<endl;
                cout<<"Effective tax rate: 0.00%"<<endl;
            }
            else if(income <= j2)
            {
                cout<<"Marginal tax rate: "<<bra1*100<<"%"<<endl;
                income1 = income - j1;
                tax = income1 * bra1;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            else if(income <= j3)
            {
                cout<<"Marginal tax rate: "<<bra2*100<<"%"<<endl;
                income1 = income - j2;
                tax = (income1 * bra2) + jconstant1;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            else if(income <= j4)
            {
                cout<<"Marginal tax rate: "<<bra3*100<<"%"<<endl;
                income1 = income - j3;
                tax = (income1 * bra3) + jconstant2;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            else if(income <= j5)
            {
                cout<<"Marginal tax rate: "<<bra4*100<<"%"<<endl;
                income1 = income - j4;
                tax = (income1 * bra4) + jconstant3;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            else if(income <= j6)
            {
                cout<<"Marginal tax rate: "<<bra5*100<<"%"<<endl;
                income1 = income - j5;
                tax = (income1 * bra5) + jconstant4;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            else if(income <= j7)
            {
                cout<<"Marginal tax rate: "<<bra6*100<<"%"<<endl;
                income1 = income - j6;
                tax = (income1 * bra6) + jconstant5;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            else
            {
                cout<<"Marginal tax rate: "<<bra7*100<<"%"<<endl;
                income1 = income - j7;
                tax = (income1 * bra7) + jconstant6;
                cout<<"Federal taxes due: $"<<tax<<endl;
                etax = (tax / income)*100;
                cout<<"Effective tax rate: "<<etax<<"%"<<endl;
            }
            break;
    }
    return 0;
}
