//PREPROCESSOR DIRECTIVES 
/*#define ll long long
#define pi 2*acos(0.0)
#define all(v) v.begin(),v.end()*/
using namespace std;
//For Define
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define rfor0(i,n) for(int i=n;i>=0;i--)
#define rfor1(i,n) for(int i=n;i>=1;i--)
#define For(i,a,b) for(int i=a;i<=b;i++)

//input
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%lld",&t)
#define sf(t) scanf("%f",&t)
#define sdb(t) scanf("%lf",&t)
#define schar(c) scanf("%c",&c)
#define sstring(s) scanf("%s",s)
#define ssi(a,b) scanf("%d%d",&a,&b)
#define ssl(a,b) scanf("%lld%lld",&a,&b)

//Output
#define P(a) printf("%d\n",a) 
#define PL(a) printf("%lld\n",a)
#define PF(a) printf("%f\n",a)
#define PDB(a) printf("%lf\n",a)
#define PN(a) printf("%d ",a)
#define PLN(a) printf("%lld ",a)
#define PFN(a) printf("%f ",a)
#define PDBN(a) printf("%lf ",a)

#define CP(a) cout<<a<<endl
#define CPN(a) cout<<a<<" "

//Test Case & New line
#define Case(no) printf("Case %d: ",++no)
#define nl puts("")

//Debug
#define db(x) cout << #x << " -> " << (x) << endl;
#define db_sarr(i,a) cout<<#a<<"["<<i<<"] -> "<<a[i]<<" "<<endl;
#define db_arr(a,start,end) for(ll i=start;i<=end;i++) cout<<#a<<"["<<i<<"] -> "<<a[i]<<" "<<endl;
#define db_mat(mat,row,col) for(ll i=0;i<row;i++) {for(ll j=0;j<col;j++) cout<<mat[i][j]<<" ";cerr<<endl;}
#define db_st(a,b,start,end) for(ll i=start;i<=end;i++) cout<<#a<<"["<<i<<"]."<<#b<<" -> "<<a[i].b<<" "<<endl;

#define ff first
#define se second
#define pb push_back
#define ppb pop_back
#define mkp(a,b) make_pair(a,b)
#define ST(v) sort(all(v))
#define sz(x) (int)x.size()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)                         //count one
#define parity(i)   __builtin_parity(i)       //evenparity 0 and odd parity 1
/*#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define un(v) ST(v), (v).erase(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())
/*
typedef  vector<int> vi;
typedef  vector<ll> vl;
typedef  vector<string> vs;
typedef  pair<int,int> pii;
typedef  vector<pii> vpii;
typedef  set<int> si;
typedef  set<string> ss;
typedef  map<int,int> mii;
typedef  map<string,int> msi;
*/
////============ CONSTANT ===============////
#define MAXLL 9223372036854775807
#define MINLL 9223372036854775808
#define MAXL  2147483647
#define MINL  2147483648
#define mx7   10000007
#define mx6   1000006
#define inf   1<<30                                           //infinity value
#define eps   1e-9
#define mx    (100010)
#define mod   1000000007
////=====================================////


//header files
#include<cstdlib>
#include <iostream>
#include<cmath>


//predefined variables and data types
#define pi 3.14
typedef long double ld;


//FUNCTION FOR FINDING DENSITY WRT TEMPERATURE
ld density (ld temperature){              //later will take two parameters, one choice for the diffent choic liquids
    
{
   ld table[120] = {
0.998120,0.998398,0.998650,0.998877,0.999080,0.999259,0.999417,0.999553,0.999669,0.999765,
0.9998425,0.9999015,0.9999429,0.9999672,0.9999750,0.9999668,0.9999432,0.9999045,0.9998512,0.9997838,
0.9997026,0.9996018,0.9995004,0.9993801,0.9992474,0.9991026,0.9989460,0.9987779,0.9985986,0.9984082,
0.9982071,0.9979955,0.9977735,0.9975415,0.9972995,0.9970479,0.9967867,0.9965162,0.9962365,0.9959478,
0.9956502,0.9953440,0.9950292,0.9947060,0.9943745,0.9940349,0.9936872,0.9933316,0.9929683,0.9925973,
0.9922187,0.9918327,0.9914394,0.9910388,0.9906310,0.9902162,0.9897944,0.9893657,0.9889303,0.9884881,
0.9880393,0.9875839,0.9871220,0.9866537,0.9861791,0.9856982,0.9852111,0.9847178,0.9842185,0.9837132,
0.9832018,0.9826846,0.9821615,0.9816327,0.9810981,0.9805578,0.9800118,0.9794603,0.9789032,0.9783406,
0.9777726,0.9771991,0.9766203,0.9760361,0.9754466,0.9748519,0.9742520,0.9736468,0.9730366,0.9724212,
0.9718007,0.9711752,0.9705446,0.9699091,0.9692686,0.9686232,0.9679729,0.9673177,0.9666576,0.9659927,
0.9653230,0.9646486,0.9639693,0.9632854,0.9625967,0.9619033,0.9612052,0.9605025,0.9597951,0.9590831,
0.9583665,0.957662,0.956937,0.956207,0.955472,0.954733,0.953989,0.953240,0.952488,0.941730};
   int i = floor(temperature);
   ld p = temperature - i;
   ld p2m1 = p * p - 1.0;
   ld p2m4 = p2m1 - 3.0;
   i += 10;
   return (p2m1*p*(p-2)*table[i-2]/24.0 - (p-1)*p*p2m4*table[i-1]/6.0 + p2m1*p2m4*table[i]/4.0 - (p+1)*
   p*p2m4*table[i+1]/6.0 + p2m1*p*(p+2)*table[i+2]/24.0)*1000;
}
//***************************************************************************************************************************
}


//FUNCTION FOR CALCULATING SPECIFIC GRAVITY
ld sp_gravity(ld temperature){
    ld density_old = 1000;
    ld density_new = density(temperature);
    return (density_new/density_old);
}

//FUNCTION FOR FINDING KINEMATIC VISCOSITY
ld kine_visc(ld abs_visc, ld density_new)
{                          // int choice = water for now

    ld kinematic_viscosity = abs_visc/density_new;
    return kinematic_viscosity;
}
//**********************************************************************************************************************



//FUNCTION TO FIND ABSOLUTE VISCOSITY AS A FUNCTION OF TEMPERATURE
ld absolute_visc(ld temperature)
{
    ld result = 2.414*pow(10, -5)*pow(10, (247.8/(temperature+133.15)));
    return result;
}
//******************************************************************************************************8*******************************



//FUNCTION TO CALCULATE FLOW VELOCITY FROM PUMP RATE
ld flow_vel(ld pump_rate, ld diameter)
{
    ld velocity = 4*pump_rate/(pi * pow(diameter, 2));
    return velocity;
}
//***************************************************************************************************************************



//FUNCTION TO FIND REYNOLD's NUMBER
ld reynolds_number(ld diameter, ld velocity, ld kinematic_viscosity)
{
    return ((diameter*velocity)/kinematic_viscosity);
}
//***************************************************************************************************************************************************



//FUNCTION TO CONVERT INCHES TO METER
ld diam(ld inches)
{
    return inches * 0.0254;
}
//***************************************************************************************************************************************************



//FUNCTION TO CONVERT METER TO INCHES
ld convertmTOin(ld input)
{
    return input *39.3701;
}
//***************************************************************************************************************************************************



//FUNCTION TO CALCULATE LAMINAR FLOW's HEAD LOSS
//ld head_laminar(ld abs_viscosity ,ld length , ld flow_velocity, ld density_new, ld diameter)

  //  return ((32*abs_viscosity*length*flow_velocity)/(density * 9.81 * pow(diameter, 2)));
//}
//**********************************************************************************************************



/*FUNCTION TO CALCULATE TURBULENT FLOW's HEAD 
LOSS FOR HORIZONTAL SECTION OF PIPE OF LENGTH L*/

ld head_turbulent(ld length, ld flow_velocity, ld diameter, ld friction_factor)
{
    return ((4*friction_factor*length*pow(flow_velocity , 2))/(2* 9.81 * diameter));
}
//**********************************************************************************************************



//FUNCTION TO CALCULATE FRICTION FACTOR

ld friction_factor_head(ld roughness, ld diameter, ld reynolds_number)
{
    return 0.001375*(1+ pow(((200*roughness/diameter) + (pow(10, 6)/reynolds_number)), 0.33));
}
//***************************************************************************************************************************



//FUNCTION TO CALCULATE LOCAL HEAD LOSSES
ld local_head_loss(ld flow_velocity, ld fric_coefficient_kl)
{
    return ((fric_coefficient_kl*pow(flow_velocity  , 2))/(2*9.81));
    
    /* ----------------------------------------> NOTE NOTE NOTE <-------------------------------------------
        friction coefficeint KL
        90* bend ------------------------------------------- 0.4
        90* tees -----------inline flow -------------------- 0.4
                |______________line to straight------------- 1.5
        -------------Contraction or enlargement ----------------
        1.)Enlargement 
            Kl = pow(1-(a1/a2),2) 
        2.) Contraction
            A1 = x*A2   x<1 for contraction
            head loss ={ [(1-(a1/a2))^2 ]*{[(v/x)^2]/2g} }
            
    */
}
//*******************************************************************************************************************************************



//FUNCTION TO CALCULATE LAMINAR FLOW's PRESSURE LOSS FOR LENGTH L
ld pressure_loss_laminar(ld abs_viscosity, ld length, ld pumprate, ld diameter)
{
    return (128*abs_viscosity*length*pumprate)/(pi * pow(diameter, 4));
}
//*************************************************************************************************************************************




//FUNCTION TO CALCULATE TURBULENT FLOW'S PRESSURE LOSS FOR LENGTH L
ld pressure_loss_turbulent(ld friction_factor, ld length, ld density_new, ld flow_velocity, ld diameter)
{
    return ((friction_factor * length * density_new * pow(flow_velocity, 2))/2*diameter);
}
//**********************************************************************************************************************************************

ld pump_power(ld tot_head, ld density_new, ld pump_rate){
    return (pump_rate* density_new* 9.81* tot_head)/(3.6*pow(10, 6));
}


void chilled_water()
{ 
    cout<<"\n\t\t\tCHILLED WATER\n\t\t\t*************\n";
    ld temp;
    cout<<"\nEnter the temperature of the fluid in celsius  =  ";
    cin>>temp;
    ld density_new = density(temp);
    ld specific_gravity = sp_gravity(temp);
    cout<<"\n\n\t\t\tAt temperature "<< temp<<"*C\n\t\t\t-------------------\nDensity of the liquid is = "<< density_new<<"\n"<<endl;
    cout <<"Specific gravity of the fluid is  = "<< specific_gravity << endl;
    ld abs_viscosity = absolute_visc(temp);
    cout<<"\n\nAbsolute viscosity of the liquid is = "<<abs_viscosity<<"\n"<<endl;
    ld kinematic = kine_visc(abs_viscosity, density_new);
     cout<<"Kinematic viscosity of the liquid is = "<<kinematic<<"\n"<<endl;

//*********************************************************************************************************


//Properties of the pipeline

    cout<<"***************************************************"<<endl;
    cout<<"\nEnter Diameter of the pipe (in inches) = ";
    ld diametr;
    cin>>diametr;
    ld pumprate;
    cout<<"\nEnter pump's flow rate( in metres cubed per hour) = ";
    cin>>pumprate;
    cout<<endl;
    
    ld diameter = diam(diametr);
    
    ld flow_velocity = flow_vel(pumprate,diameter);
    flow_velocity = flow_velocity * 2.77*pow(10, -4);
    
    ld reyno = reynolds_number(diameter, flow_velocity, kinematic);
    cout<<"\n\t\tPump flow rate = "<<pumprate<<" metres cubed per hour\n"
    "\t\tPipe diameter = " << diametr <<" inches = "<< diameter<<" metres \n\t\t------------------------------------------\n\nThe flow velocity is  "<<
    flow_velocity<<" m/sec";
    
    cout<< "\n\nThe Reynolds's Number for this fluid at this velocity is = "<<reyno;
    if(reyno>3000){
        
        cout<<"\n\nSince the value of the Reynolds's number come out to be more than 3000 so we will take the flow to be TURBULENT \n\n\t\t ===========>THE ANALYSIS<===========\n"<<endl;
        
        int choice;
      //  cout <<" Enter 1 for Horizontal flow \n Enter 2 for Vertical flow \n Enter 3 for Horizontal Elbow \n Enter 4 for Vertical Elbow \n Enter 0 for END OF PIPELINE\n\n Enter the next section of pipeline's choice  =  ";
        //ld vel;
        ld tot_head = 0;
    do {
        cout <<" Enter 1 for Horizontal flow \n Enter 2 for Vertical flow \n Enter 3 for Horizontal Elbow \n Enter 4 for Vertical Elbow \n Enter 0 for END OF PIPELINE\n\n Enter the next section of pipeline's choice  =  ";
        cin>>choice;
        switch (choice){
            case 1 : 
            {
                int length;
                cout << "\n\t\t=========>HORIZONTAL SECTION<==========\n\nEnter length of the horizontal section (in metres) = ";
                cin>>length;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(length, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of length "<< length <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< head*density_new*9.81*pow(10, -5)<<" Pa\n\n\t\t===============================\n"<<endl;
                tot_head+=head;
            }
            break;
            case 2 : 
            {
                int height;
                cout << "\n\n\t\t=========>VERTICAL SECTION<==========\n\nEnter height of the vertical section (in metres) = ";
                cin>>height;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(height, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of height "<< height <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< (head+height)*density_new*9.81*pow(10, -5)<<" Pa\n\t\t===============================\n"<<endl;
                tot_head+=head;
                
            
            break;
            }
            case 3:
            {
                cout<<"\nThe head loss occuring due to a 90* horizontal elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81)) <<"\n"<<endl;
             //   vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
            
            break;
            }
            case 4:
            {
                cout<<"\nThe head loss occuring due to a 90* vertical elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81)) <<"\n\n";
                //vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
                
            
            break;
            }
            case 0:
            {
                cout<<"\n\n\n\t\tEND OF PIPELINE REACHED\n\t\t-----------------------\n\nTotal HEAD LOSSES = "<< tot_head;
               // cout<<"\n\nTotal PUMP POWER USED = "<<pump_power(tot_head, density_new, pumprate )<<" KW";
             ld abc = pump_power(tot_head, density_new, pumprate );
            cout<<"\n\nTotal PUMP POWER USED = "<<abc<<" KW"<<endl ; 
            ld pump;
            cout<<"\nEnter the value of marked pump power = ";
            cin>>pump;
            cout<<"\n\nEXCESS PUMP POWER BEING USED = "<< pump - abc<<endl;}break;
            
            default : 
            cout<<"\n\t\tWRONG CHOICE! Please enter again (1/2/3/4/0) \n\t\t--------------------------------------------"<<endl;
        /*
        cin>>choice;
        break;*/}
    }while (choice != 0);}
   else{
   cout<<"\n\nSince the value of the Reynolds's number come out to be more than 3000 so we will take the flow to be TURBULENT \n\n\t --------->THE ANALYSIS<--------- \n"<<endl;
      
        int choice;
      //  cout <<" Enter 1 for Horizontal flow \n Enter 2 for Horizontal elbow \n Enter 3 for Vertical Flow \n Enter 4 for Vertical Elbow \n\n Enter the next section of pipeline's choice  =  ";
  //      cin>>choice;
        ld vel;
        ld tot_head = 0;
    
        do {
            cout <<" Enter 1 for Horizontal flow \n Enter 2 for Horizontal elbow \n Enter 3 for Vertical Flow \n Enter 4 for Vertical Elbow \n\n Enter the next section of pipeline's choice  =  ";
        switch (choice){
            case 1 : 
            {
                int length;
                cout << "\n\t\t=========>HORIZONTAL SECTION<==========\n\nEnter length of the horizontal section (in metres) = ";
                cin>>length;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(length, flow_velocity, diameter, friction_factor );
                    //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of length "<< length <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< head*density_new*9.81*pow(10, -5)<<"Pa\n\n"<<endl;
                tot_head+=head;
            }
            break;
            case 2 : 
            {
                int height;
                cout << "\n\n\t\t=========>VERTICAL SECTION<==========\n\nEnter height of the vertical section (in metres) = ";
                cin>>height;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(height, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\n Head loss for the vertical section of height "<< height <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< (head+height)*density_new*9.81*pow(10, -5)<<"Pa\n\n"<<endl;
                tot_head+=head;
                
            }
            break;
            
            case 3:
            {
                cout<<"\nThe head loss occuring due to a 90* horizontal elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81));
             //   vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
            }
            break;
            
            case 4:
            {
                cout<<"\nThe head loss occuring due to a 90* vertical elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81));
                //vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
                
            }
            break;
            
            case 0:
            {cout<<"\n\n\n\t\tEND OF PIPELINE REACHED\n\t\t----------------------- \n\n\nTotal HEAD LOSSES = "<< tot_head;
            //cout<<"\n\nTotal PUMP POWER USED = "<<pump_power(tot_head, density_new, pumprate )<<" KW";  
            ld abc = pump_power(tot_head, density_new, pumprate );
            cout<<"\n\nTotal PUMP POWER USED = "<<abc<<" KW"<<endl<<endl; 
            ld pump;
            cout<<"\nEnter the value of marked pump power = ";
            cin>>pump;
            cout<<"\n\nEXCESS PUMP POWER BEING USED = "<< pump - abc<<endl;}break;
            
            default : 
            cout<<"\n\t\tWRONG CHOICE! Please enter again (1/2/3/4/0) \n\t\t---------------------------------------------"<<endl;
 }       }while(choice != 0);
}


}

///////PORTABLE WATERRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR

void portable_water(){
        
    cout<<"\n\t\t\t  PORTABLE WATER\n\t\t\t  **************\n";
    const ld temp = 25;
   // cout<<"\nEnter the temperature of the fluid in celsius  =  ";
   // cin>>temp;
    ld density_new = density(temp);
    ld specific_gravity = sp_gravity(temp);
    cout<<"\n\n\t\t\tAt temperature "<< temp<<"*C\n\t\t\t-------------------\nDensity of the liquid is = "<< density_new<<"\n"<<endl;
    cout <<"Specific gravity of the fluid is  = "<< specific_gravity << endl;
    ld abs_viscosity = absolute_visc(temp);
    cout<<"\n\nAbsolute viscosity of the liquid is = "<<abs_viscosity<<"\n"<<endl;
    ld kinematic = kine_visc(abs_viscosity, density_new);
     cout<<"Kinematic viscosity of the liquid is = "<<kinematic<<"\n"<<endl;

//*********************************************************************************************************


//Properties of the pipeline

    cout<<"***************************************************"<<endl;
    cout<<"\nEnter Diameter of the pipe (in inches) = ";
    ld diametr;
    cin>>diametr;
    ld pumprate;
    cout<<"\nEnter pump's flow rate( in metres cubed per hour) = ";
    cin>>pumprate;
    cout<<endl;
    
    ld diameter = diam(diametr);
    
    ld flow_velocity = flow_vel(pumprate,diameter);
    flow_velocity = flow_velocity * 2.77*pow(10, -4);
    
    ld reyno = reynolds_number(diameter, flow_velocity, kinematic);
    cout<<"\n\t\tPump flow rate = "<<pumprate<<" metres cubed per hour\n"
    "\t\tPipe diameter = " << diametr <<" inches = "<< diameter<<" metres \n\t\t------------------------------------------\n\nThe flow velocity is  "<<
    flow_velocity<<" m/sec";
    
    cout<< "\n\nThe Reynolds's Number for this fluid at this velocity is = "<<reyno;
    if(reyno>3000){
        
        cout<<"\n\nSince the value of the Reynolds's number come out to be more than 3000 so we will take the flow to be TURBULENT \n\n\t\t ===========>THE ANALYSIS<===========\n"<<endl;
        
        int choice;
      //  cout <<" Enter 1 for Horizontal flow \n Enter 2 for Vertical flow \n Enter 3 for Horizontal Elbow \n Enter 4 for Vertical Elbow \n Enter 0 for END OF PIPELINE\n\n Enter the next section of pipeline's choice  =  ";
        //ld vel;
        ld tot_head = 0;
    do {
        cout <<" Enter 1 for Horizontal flow \n Enter 2 for Vertical flow \n Enter 3 for Horizontal Elbow \n Enter 4 for Vertical Elbow \n Enter 0 for END OF PIPELINE\n\n Enter the next section of pipeline's choice  =  ";
        cin>>choice;
        switch (choice){
            case 1 : 
            {
                int length;
                cout << "\n\t\t=========>HORIZONTAL SECTION<==========\n\nEnter length of the horizontal section (in metres) = ";
                cin>>length;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(length, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of length "<< length <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< head*density_new*9.81*pow(10, -5)<<" Pa\n\n\t\t===============================\n"<<endl;
                tot_head+=head;
            }
            break;
            case 2 : 
            {
                int height;
                cout << "\n\n\t\t=========>VERTICAL SECTION<==========\n\nEnter height of the vertical section (in metres) = ";
                cin>>height;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(height, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of height "<< height <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< (head+height)*density_new*9.81*pow(10, -5)<<" Pa\n\t\t===============================\n"<<endl;
                tot_head+=head;
                
            
            break;
            }
            case 3:
            {
                cout<<"\nThe head loss occuring due to a 90* horizontal elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81)) <<"\n"<<endl;
             //   vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
            
            break;
            }
            case 4:
            {
                cout<<"\nThe head loss occuring due to a 90* vertical elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81)) <<"\n\n";
                //vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
                
            
            break;
            }
            case 0:
            {cout<<"\n\n\n\t\tEND OF PIPELINE REACHED\n\t\t-----------------------\n\nTotal HEAD LOSSES = "<< tot_head;
            cout<<"\n\nTotal PUMP POWER USED = "<<pump_power(tot_head, density_new, pumprate )<<" KW";  ld abc = pump_power(tot_head, density_new, pumprate );
            cout<<"\n\nTotal PUMP POWER USED = "<<abc<<" KW"; 
            ld pump;
            cout<<"\nEnter the value of marked pump power = ";
            cin>>pump;
            cout<<"\n\nEXCESS PUMP POWER BEING USED = "<< pump - abc<<endl;}break;
            
            default : 
            cout<<"\n\t\tWRONG CHOICE! Please enter again (1/2/3/4/0) \n\t\t--------------------------------------------"<<endl;
        /*
        cin>>choice;
        break;*/}
    }while (choice != 0);}
   else{
   cout<<"\n\nSince the value of the Reynolds's number come out to be more than 3000 so we will take the flow to be TURBULENT \n\n\t --------->THE ANALYSIS<--------- \n"<<endl;
      
        int choice;
      //  cout <<" Enter 1 for Horizontal flow \n Enter 2 for Horizontal elbow \n Enter 3 for Vertical Flow \n Enter 4 for Vertical Elbow \n\n Enter the next section of pipeline's choice  =  ";
  //      cin>>choice;
        ld vel;
        ld tot_head = 0;
    
        do {
            cout <<" Enter 1 for Horizontal flow \n Enter 2 for Horizontal elbow \n Enter 3 for Vertical Flow \n Enter 4 for Vertical Elbow \n\n Enter the next section of pipeline's choice  =  ";
        switch (choice){
            case 1 : 
            {
                int length;
                cout << "\n\t\t=========>HORIZONTAL SECTION<==========\n\nEnter length of the horizontal section (in metres) = ";
                cin>>length;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(length, flow_velocity, diameter, friction_factor );
                    //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of length "<< length <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< head*density_new*9.81*pow(10, -5)<<"Pa\n\n"<<endl;
                tot_head+=head;
            }
            break;
            case 2 : 
            {
                int height;
                cout << "\n\n\t\t=========>VERTICAL SECTION<==========\n\nEnter height of the vertical section (in metres) = ";
                cin>>height;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(height, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\n Head loss for the vertical section of height "<< height <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< (head+height)*density_new*9.81*pow(10, -5)<<"Pa\n\n"<<endl;
                tot_head+=head;
                
            }
            break;
            
            case 3:
            {
                cout<<"\nThe head loss occuring due to a 90* horizontal elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81));
             //   vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
            }
            break;
            
            case 4:
            {
                cout<<"\nThe head loss occuring due to a 90* vertical elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81));
                //vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
                
            }
            break;
            
            case 0:
            {cout<<"\n\n\n\t\tEND OF PIPELINE REACHED\n\t\t----------------------- \n\n\nTotal HEAD LOSSES = "<< tot_head;
            //cout<<"\n\nTotal PUMP POWER USED = "<<pump_power(tot_head, density_new, pumprate )<<" KW"; 
            ld abc = pump_power(tot_head, density_new, pumprate );
            cout<<"\n\nTotal PUMP POWER USED = "<<abc<<" KW"; 
            ld pump;
            cout<<"\nEnter the value of marked pump power = ";
            cin>>pump;
            cout<<"\n\nEXCESS PUMP POWER BEING USED = "<< pump - abc<<endl;}break;
            
            default : 
            cout<<"\n\t\tWRONG CHOICE! Please enter again (1/2/3/4/0) \n\t\t---------------------------------------------"<<endl;
 }       }while(choice != 0);
}
    
}



///CONDENSED WATER
void condensed_water()
{ 
    cout<<"\n\t\t\tCONDENSED WATER\n\t\t\t***************\n";
    ld temp;
    cout<<"\nEnter the temperature of the fluid in celsius  =  ";
    cin>>temp;
    ld density_new = density(temp);
    ld specific_gravity = sp_gravity(temp);
    cout<<"\n\n\t\t\tAt temperature "<< temp<<"*C\n\t\t\t-------------------\nDensity of the liquid is = "<< density_new<<"\n"<<endl;
    cout <<"Specific gravity of the fluid is  = "<< specific_gravity << endl;
    ld abs_viscosity = absolute_visc(temp);
    cout<<"\n\nAbsolute viscosity of the liquid is = "<<abs_viscosity<<"\n"<<endl;
    ld kinematic = kine_visc(abs_viscosity, density_new);
     cout<<"Kinematic viscosity of the liquid is = "<<kinematic<<"\n"<<endl;

//*********************************************************************************************************


//Properties of the pipeline

    cout<<"***************************************************"<<endl;
    cout<<"\nEnter Diameter of the pipe (in inches) = ";
    ld diametr;
    cin>>diametr;
    ld pumprate;
    cout<<"\nEnter pump's flow rate( in metres cubed per hour) = ";
    cin>>pumprate;
    cout<<endl;
    
    ld diameter = diam(diametr);
    
    ld flow_velocity = flow_vel(pumprate,diameter);
    flow_velocity = flow_velocity * 2.77*pow(10, -4);
    
    ld reyno = reynolds_number(diameter, flow_velocity, kinematic);
    cout<<"\n\t\tPump flow rate = "<<pumprate<<" metres cubed per hour\n"
    "\t\tPipe diameter = " << diametr <<" inches = "<< diameter<<" metres \n\t\t------------------------------------------\n\nThe flow velocity is  "<<
    flow_velocity<<" m/sec";
    
    cout<< "\n\nThe Reynolds's Number for this fluid at this velocity is = "<<reyno;
    if(reyno>3000){
        
        cout<<"\n\nSince the value of the Reynolds's number come out to be more than 3000 so we will take the flow to be TURBULENT \n\n\t\t ===========>THE ANALYSIS<===========\n"<<endl;
        
        int choice;
      //  cout <<" Enter 1 for Horizontal flow \n Enter 2 for Vertical flow \n Enter 3 for Horizontal Elbow \n Enter 4 for Vertical Elbow \n Enter 0 for END OF PIPELINE\n\n Enter the next section of pipeline's choice  =  ";
        //ld vel;
        ld tot_head = 0;
    do {
        cout <<" Enter 1 for Horizontal flow \n Enter 2 for Vertical flow \n Enter 3 for Horizontal Elbow \n Enter 4 for Vertical Elbow \n Enter 0 for END OF PIPELINE\n\n Enter the next section of pipeline's choice  =  ";
        cin>>choice;
        switch (choice){
            case 1 : 
            {
                int length;
                cout << "\n\t\t=========>HORIZONTAL SECTION<==========\n\nEnter length of the horizontal section (in metres) = ";
                cin>>length;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(length, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of length "<< length <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< head*density_new*9.81*pow(10, -5)<<" Pa\n\n\t\t===============================\n"<<endl;
                tot_head+=head;
            }
            break;
            case 2 : 
            {
                int height;
                cout << "\n\n\t\t=========>VERTICAL SECTION<==========\n\nEnter height of the vertical section (in metres) = ";
                cin>>height;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(height, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of height "<< height <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< (head+height)*density_new*9.81*pow(10, -5)<<" Pa\n\t\t===============================\n"<<endl;
                tot_head+=head;
                
            
            break;
            }
            case 3:
            {
                cout<<"\nThe head loss occuring due to a 90* horizontal elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81)) <<"\n"<<endl;
             //   vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
            
            break;
            }
            case 4:
            {
                cout<<"\nThe head loss occuring due to a 90* vertical elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81)) <<"\n\n";
                //vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
                
            
            break;
            }
            case 0:
{            cout<<"\n\n\n\t\tEND OF PIPELINE REACHED\n\t\t-----------------------\n\nTotal HEAD LOSSES = "<< tot_head;
            //cout<<"\n\nTotal PUMP POWER USED = "<<pump_power(tot_head, density_new, pumprate )<<" KW";
             ld abc = pump_power(tot_head, density_new, pumprate );
            cout<<"\n\nTotal PUMP POWER USED = "<<abc<<" KW"; 
            ld pump;
            cout<<"\nEnter the value of marked pump power = ";
            cin>>pump;
            cout<<"\n\nEXCESS PUMP POWER BEING USED = "<< pump - abc<<endl;}break;
            
            default : 
            cout<<"\n\t\tWRONG CHOICE! Please enter again (1/2/3/4/0) \n\t\t--------------------------------------------"<<endl;
        /*
        cin>>choice;
        break;*/}
    }while (choice != 0);}
   else{
   cout<<"\n\nSince the value of the Reynolds's number come out to be more than 3000 so we will take the flow to be TURBULENT \n\n\t --------->THE ANALYSIS<--------- \n"<<endl;
      
        int choice;
      //  cout <<" Enter 1 for Horizontal flow \n Enter 2 for Horizontal elbow \n Enter 3 for Vertical Flow \n Enter 4 for Vertical Elbow \n\n Enter the next section of pipeline's choice  =  ";
  //      cin>>choice;
        ld vel;
        ld tot_head = 0;
    
        do {
            cout <<" Enter 1 for Horizontal flow \n Enter 2 for Horizontal elbow \n Enter 3 for Vertical Flow \n Enter 4 for Vertical Elbow \n\n Enter the next section of pipeline's choice  =  ";
        switch (choice){
            case 1 : 
            {
                int length;
                cout << "\n\t\t=========>HORIZONTAL SECTION<==========\n\nEnter length of the horizontal section (in metres) = ";
                cin>>length;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(length, flow_velocity, diameter, friction_factor );
                    //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of length "<< length <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< head*density_new*9.81*pow(10, -5)<<"Pa\n\n"<<endl;
                tot_head+=head;
            }
            break;
            case 2 : 
            {
                int height;
                cout << "\n\n\t\t=========>VERTICAL SECTION<==========\n\nEnter height of the vertical section (in metres) = ";
                cin>>height;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(height, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\n Head loss for the vertical section of height "<< height <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< (head+height)*density_new*9.81*pow(10, -5)<<"Pa\n\n"<<endl;
                tot_head+=head;
                
            }
            break;
            
            case 3:
            {
                cout<<"\nThe head loss occuring due to a 90* horizontal elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81));
             //   vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
            }
            break;
            
            case 4:
            {
                cout<<"\nThe head loss occuring due to a 90* vertical elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81));
                //vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
                
            }
            break;
            
            case 0:{
            cout<<"\n\n\n\t\tEND OF PIPELINE REACHED\n\t\t----------------------- \n\n\nTotal HEAD LOSSES = "<< tot_head;
            //cout<<"\n\nTotal PUMP POWER USED = "<<pump_power(tot_head, density_new, pumprate )<<" KW";
            ld abc = pump_power(tot_head, density_new, pumprate );
            cout<<"\n\nTotal PUMP POWER USED = "<<abc<<" KW"; 
            ld pump;
            cout<<"\nEnter the value of marked pump power = ";
            cin>>pump;
            cout<<"\n\nEXCESS PUMP POWER BEING USED = "<< pump - abc<<endl;}break;
            
            default : 
            cout<<"\n\t\tWRONG CHOICE! Please enter again (1/2/3/4/0) \n\t\t---------------------------------------------"<<endl;
 }       }while(choice != 0);
}


}













/////COMPRESSED AIR
ld density_air(ld p){
    return p*100000/(287.05*289.15);
}
ld absolute_visc_air(ld t){
    ld t2= pow(t,1.5);
    return ((1.51204*t2)/(t+120));
}
ld kine_visc_air(ld a, ld d){
    ld dd=d/100000;
    return a/dd;
}
ld flowvelair(ld pumprate,ld diameter){
    ld k=pumprate;
    k/=2118.88;
    ld r = pi *pow(diameter, 2);
    k/=r;
    return k;
}


void compressed_air()
{
            
    cout<<"\n\t\t\t  COMPRESSED AIR\n\t\t\t  **************\n";
    const ld temp = 25;
    ld pressure;
    cout<<"\nEnter pressure of the given air column in bars = ";
    cin>>pressure;
   // cout<<"\nEnter the temperature of the fluid in celsius  =  ";
   // cin>>temp;
    ld densityair = density_air(pressure);
    //ld specific_gravity = sp_gravity(temp);
    cout<<"\n\nDensity of air is = "<< densityair<<" kg/metres cubed\n"<<endl;
    //cout <<"Specific gravity of the fluid is  = "<< specific_gravity << endl;
    ld abs_viscosity1 = absolute_visc_air(temp);
    cout<<"\nIn units of Pascal second per rootTemperature\n-------------------------------------------------\nAbsolute viscosity of air is = "<<abs_viscosity1<<" units\n"<<endl;
    ld kinematic = kine_visc_air(abs_viscosity1, densityair);
     cout<<"Kinematic viscosity of the liquid is = "<<kinematic/10000<<" units\n"<<endl;

//*********************************************************************************************************


//Properties of the pipeline

    cout<<"***************************************************"<<endl;
    cout<<"\nEnter Diameter of the pipe (in inches) = ";
    ld diametr;
    cin>>diametr;
    ld pumprate;
    cout<<"\nEnter pump's flow rate (in cfm) = ";
    cin>>pumprate;
    cout<<endl;
    
    ld diameter = diam(diametr);
    
    ld flow_velocity = flowvelair(pumprate,diameter);
    ld reyno = reynolds_number(diameter, flow_velocity, kinematic*pow(10, -5));
    cout<<"\n\t\tPump flow rate = "<<pumprate<<" cubic feet metres\n"
    "\t\tPipe diameter = " << diametr <<" inches = "<< diameter<<" metres \n\t\t------------------------------------------\n\nThe flow velocity is  "<<
    flow_velocity<<" m/sec";
    
    cout<< "\n\nThe Reynolds's Number for this fluid at this velocity is = "<<reyno;
    if(reyno>3000){
        
        cout<<"\n\nSince the value of the Reynolds's number come out to be more than 3000 so we will take the flow to be TURBULENT \n\n\t\t ===========>THE ANALYSIS<===========\n"<<endl;
        
        int choice;
        ld tot_head = 0;
    do {
        cout <<" Enter 1 for Horizontal flow \n Enter 2 for Vertical flow \n Enter 3 for Horizontal Elbow \n Enter 4 for Vertical Elbow \n\n Enter 0 for END OF PIPELINE\n\n Enter the next section of pipeline's choice  =  ";
        cin>>choice;
        switch (choice){     
            case 1 : 
            {
                int length;
                cout << "\n\t\t=========>HORIZONTAL SECTION<==========\n\nEnter length of the horizontal section (in metres) = ";
                cin>>length;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(length, flow_velocity, diameter, friction_factor);
                cout<<"\nHead loss for the horizontal section of length "<< length <<"m is  = " << head/10000 << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< head*densityair*9.81*pow(10, -5)<<" Pa\n\n\t\t===============================\n"<<endl;
                tot_head+=head;
            }
            break;
            case 2 : 
            {
                int height;
                cout << "\n\n\t\t=========>VERTICAL SECTION<==========\n\nEnter height of the vertical section (in metres) = ";
                cin>>height;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(height, flow_velocity, diameter, friction_factor);
                cout<<"\nHead loss for the horizontal section of height "<< height <<"m is  = " << head /10000<< "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< (head+height)*densityair*9.81*pow(10, -5)<<" Pa\n\t\t===============================\n"<<endl;
                tot_head+=head;
           
            } break;
            case 3:
            {
                cout<<"\nThe head loss occuring due to a 90* horizontal elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81)) <<"\n"<<endl;
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
            
            }break;
            case 4:
            {
                cout<<"\nThe head loss occuring due to a 90* vertical elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81)) <<"\n\n";
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
            
            }break;
            case 0:
            {cout<<"\n\n\n\t\tEND OF PIPELINE REACHED\n\t\t-----------------------\n\nTotal HEAD LOSSES = "<< tot_head/1000;
 ld abc = pump_power(tot_head, densityair, pumprate );
            cout<<"\n\nTotal PUMP POWER USED = "<<abc<<" KW"<<endl; 
            ld pump;
            cout<<"\nEnter the value of marked pump power = ";
            cin>>pump;
            cout<<"\n\nEXCESS PUMP POWER BEING USED = "<< pump - abc<<endl;}break;
            default : 
            cout<<"\n\t\tWRONG CHOICE! Please enter again (1/2/3/4/0) \n\t\t--------------------------------------------"<<endl;
    }}
    while (choice != 0);
}
   else{
   cout<<"\n\nSince the value of the Reynolds's number come out to be more than 3000 so we will take the flow to be TURBULENT \n\n\t --------->THE ANALYSIS<--------- \n"<<endl;
      
        int choice;
      //  cout <<" Enter 1 for Horizontal flow \n Enter 2 for Horizontal elbow \n Enter 3 for Vertical Flow \n Enter 4 for Vertical Elbow \n\n Enter the next section of pipeline's choice  =  ";
        
        ld vel;
        ld tot_head = 0;
        do {
            cout <<" Enter 1 for Horizontal flow \n Enter 2 for Vertical flow \n Enter 3 for Horizontal Elbow \n Enter 4 for Vertical Elbow \n\n Enter 0 for END OF PIPELINE\n\n Enter the next section of pipeline's choice  =  ";
        cin>>choice;
        switch (choice){
            case 1 : 
            {
                int length;
                cout << "\n\t\t=========>HORIZONTAL SECTION<==========\n\nEnter length of the horizontal section (in metres) = ";
                cin>>length;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(length, flow_velocity, diameter, friction_factor );
                    //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of length "<< length <<"m is  = " << head/1000 << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< head*densityair*9.81*pow(10, -5)<<"Pa\n\n"<<endl;
                tot_head+=head;
            }
            break;
            case 2 : 
            {
                int height;
                cout << "\n\n\t\t=========>VERTICAL SECTION<==========\n\nEnter height of the vertical section (in metres) = ";
                cin>>height;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(height, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\n Head loss for the vertical section of height "<< height <<"m is  = " << head/1000 << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< (head+height)*densityair*9.81*pow(10, -5)<<"Pa\n\n"<<endl;
                tot_head+=head;
                
            }
            break;
            
            case 3:
            {
                cout<<"\nThe head loss occuring due to a 90* horizontal elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81))<<"\n\t\t*****************\n\n";
             //   vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
            }
            break;
            
            case 4:
            {
                cout<<"\nThe head loss occuring due to a 90* vertical elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81))<<"\n\t\t*****************\n\n";
                //vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
                
            }
            break;
            
            case 0:
            {cout<<"\n\n\n\t\tEND OF PIPELINE REACHED\n\t\t----------------------- \n\n\nTotal HEAD LOSSES = "<< tot_head/1000;
          //cout<<"\n\nTotal PUMP POWER USED = "<<pump_power(tot_head/10000, densityair, pumprate )<<" KW"; 
          ld abc = pump_power(tot_head, densityair, pumprate );
            cout<<"\n\nTotal PUMP POWER USED = "<<abc<<" KW"; 
            ld pump;
            cout<<"\nEnter the value of marked pump power = ";
            cin>>pump;
            cout<<"\n\nEXCESS PUMP POWER BEING USED = "<< pump - abc<<endl;}break;
            
            default : 
            cout<<"\n\t\tWRONG CHOICE! Please enter again (1/2/3/4/0) \n\t\t---------------------------------------------"<<endl;
 }       }while(choice != 0);
}
  
}



void brine()
{ 
    cout<<"\n\t\t\t\tBRINE WATER\n\t\t\t\t***********\n";
    ld temp;
//    cout<<"\nEnter the temperature of B in celsius  =  ";
  //  cin>>temp;
    ld density_new = 1030;
    ld specific_gravity = 1.03;
   // cout<<"\n\n\t\t\tAt temperature "<< temp<<"*C\n\t\t\t-------------------\nDensity of the liquid is = "<< density_new<<"\n"<<endl;
    cout <<"Specific gravity of the fluid is  = "<< specific_gravity << endl;
    ld abs_viscosity = 1.085;
    cout<<"\nAbsolute viscosity of the fluid is = "<<abs_viscosity<<"\n"<<endl;
    ld kinematic = kine_visc(abs_viscosity, density_new);
     cout<<"Kinematic viscosity of the fluid is = "<<kinematic<<"\n"<<endl;

//*********************************************************************************************************


//Properties of the pipeline

    cout<<"***************************************************"<<endl;
    cout<<"\nEnter Diameter of the pipe (in inches) = ";
    ld diametr;
    cin>>diametr;
    ld pumprate;
    cout<<"\nEnter pump's flow rate( in metres cubed per hour) = ";
    cin>>pumprate;
    cout<<endl;
    
    ld diameter = diam(diametr);
    
    ld flow_velocity = flow_vel(pumprate,diameter);
    flow_velocity = flow_velocity * 2.77*pow(10, -4);
    
    ld reyno = reynolds_number(diameter, flow_velocity*1000, kinematic);
    cout<<"\n\t\tPump flow rate = "<<pumprate<<" metres cubed per hour\n"
    "\t\tPipe diameter = " << diametr <<" inches = "<< diameter<<" metres \n\t\t------------------------------------------\n\nThe flow velocity is  "<<
    flow_velocity<<" m/sec";
    
    cout<< "\n\nThe Reynolds's Number for this fluid at this velocity is = "<<reyno;
    if(reyno>3000){
        
        cout<<"\n\nSince the value of the Reynolds's number come out to be more than 3000 so we will take the flow to be TURBULENT \n\n\t\t ===========>THE ANALYSIS<===========\n"<<endl;
        
        int choice;
      //  cout <<" Enter 1 for Horizontal flow \n Enter 2 for Vertical flow \n Enter 3 for Horizontal Elbow \n Enter 4 for Vertical Elbow \n Enter 0 for END OF PIPELINE\n\n Enter the next section of pipeline's choice  =  ";
        //ld vel;
        ld tot_head = 0;
    do {
        cout <<" Enter 1 for Horizontal flow \n Enter 2 for Vertical flow \n Enter 3 for Horizontal Elbow \n Enter 4 for Vertical Elbow \n Enter 0 for END OF PIPELINE\n\n Enter the next section of pipeline's choice  =  ";
        cin>>choice;
        switch (choice){
            case 1 : 
            {
                int length;
                cout << "\n\t\t=========>HORIZONTAL SECTION<==========\n\nEnter length of the horizontal section (in metres) = ";
                cin>>length;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(length, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of length "<< length <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< head*density_new*9.81*pow(10, -5)<<" Pa\n\n\t\t===============================\n"<<endl;
                tot_head+=head;
            }
            break;
            case 2 : 
            {
                int height;
                cout << "\n\n\t\t=========>VERTICAL SECTION<==========\n\nEnter height of the vertical section (in metres) = ";
                cin>>height;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(height, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of height "<< height <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< (head+height)*density_new*9.81*pow(10, -5)<<" Pa\n\t\t===============================\n"<<endl;
                tot_head+=head;
                
            
            
            }break;
            case 3:
            {
                cout<<"\nThe head loss occuring due to a 90* horizontal elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81)) <<"\n"<<endl;
             //   vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
            
           
            } break;
            case 4:
            {
                cout<<"\nThe head loss occuring due to a 90* vertical elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81)) <<"\n\n";
                //vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
                
            
            
            }break;
            case 0: 
{            cout<<"\n\n\n\t\tEND OF PIPELINE REACHED\n\t\t-----------------------\n\nTotal HEAD LOSSES = "<< tot_head;
            //cout<<"\n\nTotal PUMP POWER USED = "<<pump_power(tot_head, density_new, pumprate )<<" KW";
            ld abc = pump_power(tot_head, density_new, pumprate );
            cout<<"\n\nTotal PUMP POWER USED = "<<abc<<" KW"<<endl; 
            ld pump;
            cout<<"\nEnter the value of marked pump power = ";
            cin>>pump;
            cout<<"\n\nEXCESS PUMP POWER BEING USED = "<< pump - abc<<endl;}break;
            
            default : 
            cout<<"\n\t\tWRONG CHOICE! Please enter again (1/2/3/4/0) \n\t\t--------------------------------------------"<<endl;
        /*
        cin>>choice;
        break;*/}
    }while (choice != 0);}
   
   else{
   cout<<"\n\nSince the value of the Reynolds's number come out to be more than 3000 so we will take the flow to be TURBULENT \n\n\t --------->THE ANALYSIS<--------- \n"<<endl;
      
        int choice;
      //  cout <<" Enter 1 for Horizontal flow \n Enter 2 for Horizontal elbow \n Enter 3 for Vertical Flow \n Enter 4 for Vertical Elbow \n\n Enter the next section of pipeline's choice  =  ";
  //      cin>>choice;
        ld vel;
        ld tot_head = 0;
    
        do {
            cout <<" Enter 1 for Horizontal flow \n Enter 2 for Horizontal elbow \n Enter 3 for Vertical Flow \n Enter 4 for Vertical Elbow \n\n Enter the next section of pipeline's choice  =  ";
            cin>>choice;        
        switch (choice){
            case 1 : 
            {
                int length;
                cout << "\n\t\t=========>HORIZONTAL SECTION<==========\n\nEnter length of the horizontal section (in metres) = ";
                cin>>length;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(length, flow_velocity, diameter, friction_factor );
                    //  cout<<friction_factor<<endl;
                cout<<"\nHead loss for the horizontal section of length "<< length <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< head*density_new*9.81*pow(10, -5)<<"Pa\n\n"<<endl;
                tot_head+=head;
            }
            break;
            case 2 : 
            {
                int height;
                cout << "\n\n\t\t=========>VERTICAL SECTION<==========\n\nEnter height of the vertical section (in metres) = ";
                cin>>height;
                ld friction_factor = friction_factor_head(0.00005, diameter, reyno);
                ld head = head_turbulent(height, flow_velocity, diameter, friction_factor);
              //  cout<<friction_factor<<endl;
                cout<<"\n Head loss for the vertical section of height "<< height <<"m is  = " << head << "m"<<endl;
                cout<<"Pressure Loss for this section is = "<< (head+height)*density_new*9.81*pow(10, -5)<<"Pa\n\n"<<endl;
                tot_head+=head;
                
            }
            break;
            
            case 3:
            {
                cout<<"\nThe head loss occuring due to a 90* horizontal elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81));
             //   vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
            }
            break;
            
            case 4:
            {
                cout<<"\nThe head loss occuring due to a 90* vertical elbow is = "<<(0.5*pow(flow_velocity,2)/(2*9.81));
                //vel = vel_elbow(vel,);
                tot_head+=(0.5*pow(flow_velocity,2)/(2*9.81));
                
            }
            break;
            
            case 0:{
            cout<<"\n\n\n\t\tEND OF PIPELINE REACHED\n\t\t----------------------- \n\n\nTotal HEAD LOSSES = "<< tot_head;
            ld abc = pump_power(tot_head, density_new, pumprate );
            cout<<"\n\nTotal PUMP POWER USED = "<<abc<<" KW"<<endl; 
            ld pump;
            cout<<"\nEnter the value of marked pump power = ";
            cin>>pump;
            cout<<"\n\nEXCESS PUMP POWER BEING USED = "<< pump - abc<<endl;}break;
            default : 
            cout<<"\n\t\tWRONG CHOICE! Please enter again (1/2/3/4/0) \n\t\t---------------------------------------------"<<endl;
 }       }while(choice != 0);
}


}

//***************----->MAIN()<-----************************************

int main()
{   
    int cH;
    cout<<"\t\t\t*********************\n\t\t\tFLUID PIPELINE SYSTEM\n\t\t\t*********************\n\t";
    cout<<"\n Enter 1 for CHILLED WATER \n Enter 2 for PORTABLE WATER \n Enter 3 for CONDENSED WATER \n Enter 4 for COMPRESSED AIR \n Enter 5 for BRINE \n\n Enter 0 for EXIT \n CHOICE = ";
    cin>>cH;
    switch(cH){
    case 1:
        chilled_water();
        break;
    case 2:
        portable_water();
        break;
    case 3:
        condensed_water();
        break;
    case 4:
        compressed_air();
        break;
    case 5:
        brine();
        break;
    case 0:
            cout<<"\n\n\n\t\t\t\t*******\n\t\t\t\tTHE END\n\t\t\t\t*******\n\n \n\n\n";
            break;
            
            default : 
            cout<<"\n\t\t\tWrong choice! ABORTING \n\t\t\t------------- --------"<<endl;
 }       
//*************************************************************************************    
return 0;
}