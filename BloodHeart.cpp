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

const int totpul = 1000;
const int totasc = 50000;
const int totsup = 20000;
const int totinf = 30000;

//predefined variables and data types
#define pi 3.14
typedef long double ld;

const int lowV = 25;
const int highV = 66; 
const float pul_loss = 0.0006;
const float asc_loss = 0.0015;
const float sup_loss = 0.0007;
const float inf_loss = 0.0009;
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

ld head_laminarr(ld length, ld flow_velocity, ld diameter, ld friction_factor)
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

float funcvel2(ld a, ld b, ld c){
    float ans_velOcity;
    for(int i=a;i>b;i--)
        ans_velOcity += a*pow(c,1.97)*b*pow(a, 2)/2*b;
        ans_velOcity = pul_loss/totpul;
    return  ans_velOcity*c;
}

float funcvel1(ld a, ld b, ld c){
    float ans_velOcity;
    for(int i=a;i>b;i--)
        ans_velOcity += a*pow(c,1.97)*b*pow(a, 2)/2*b;
        ans_velOcity = asc_loss/totasc;
    return  ans_velOcity*c;
}

float funcvel3(ld a, ld b, ld c){
    float ans_velOcity;
    for(int i=a;i>b;i--)
        ans_velOcity += a*pow(c,1.97)*b*pow(a, 2)/2*b;
    ans_velOcity = sup_loss/totsup;
    return  ans_velOcity*c;
}
 
float funcvel4(ld a, ld b, ld c){
    float ans_velOcity;
    for(int i=a;i>b;i--)
        ans_velOcity += a*pow(c,1.97)*b*pow(a, 2)/2*b;
    ans_velOcity = inf_loss/totinf;
    return  ans_velOcity*c;
}

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

ld PowerUtilised(){
   ld heartBeat = 72;
   ld avgStrokeVolume = 70;
   ld IdealPower = heartBeat*avgStrokeVolume;
   return IdealPower;
}

void blood_circulation(){
        
    //cout<<"\n\t\t\t  PORTABLE WATER\n\t\t\t  **************\n";
    const ld temp = 37;
   // cout<<"\nEnter the temperature of the fluid in celsius  =  ";
   // cin>>temp;
    ld density_new = 1060;
    ld specific_gravity = sp_gravity(temp);
    cout<<"\nBody temperature = "<< temp<<"°C \n\nDensity of blood is = "<< density_new<<" kg/cu - m\n"<<endl;
    ld abs_viscosity = 2.78;
    cout<<"Absolute viscosity of blood is = "<<abs_viscosity<<" mPa.s\n"<<endl;
    ld kinematic = 2.65;
    cout<<"Kinematic viscosity of blood is = "<<kinematic<<" sq.mm/s\n"<<endl;
    cout<<"Peak blood velocity is in the range = "<<lowV<< " - "<<highV <<" cm/s. \n";
//*********************************************************************************************************

    cout<<"\n\nSince the blood velocity is very low, so the flow is laminar. \n\n\t --------->THE ANALYSIS<--------- \n"<<endl;
      
    int choice;
    cout <<" Enter 1 for Ascending Aorta \n Enter 2 for Pulmonary Artery \n";
    cout<<" Enter 3 for Superior vena cava \n Enter 4 for Inferior vena cava \n";
    cout<<" Enter 0 to exit \n\n Enter the section of heart = ";
    cin>>choice;
    ld vel;
    ld tot_head = 0;
    ld flow_velocity, avg_vel; 
    ld diameter = 2.1;
    ld reyno = 3500;
    while(choice!=0)
    {
        switch (choice)
        {
            case 1 : 
            {
                int length;
                flow_velocity = 66;
                avg_vel = 11;
                cout << "\n\t\t=========>Ascending aorta<==========\n ";
                cout<<"For the Ascending aorta, peak blood velocity is "<<flow_velocity<<" cm/s while mean flow velocity is "<<avg_vel<<" cm/s.\n";
                cout<<"\nEnter length of the arteries from heart to the body = ";
                cin>>length;
                ld loss_vel = funcvel1(flow_velocity, avg_vel, length);
                //cout<<"\nFinal blood velocity at the end is "<<finVel<<endl;
                cout<<"Total viscous losses from heart to lungs is "<< loss_vel<<" Watt.\n";
            }
            break;
            case 2 : 
            {
                
                flow_velocity = 57;
                avg_vel = 10;
                cout << "\n\n\t\t=========>Pulmonary Artery<=========\n";
                cout<<"For the Pulmonary Artery, peak blood velocity is "<<flow_velocity<<" cm/s while mean flow velocity is "<<avg_vel<<" cm/s.\n";
                int length;
                cout<<"\nEnter length of the arteries from heart to the lungs = ";
                cin>>length;
                ld loss_vel = funcvel2(flow_velocity, avg_vel, length);
                //cout<<"\nFinal blood velocity at the end is "<<finVel<<endl;
                cout<<"Total viscous losses from heart to lungs is "<< loss_vel<<" Watt. \n";
            }
            break;
            
            case 3:
            {
                flow_velocity = 28;
                avg_vel = 12;
                cout << "\n\n\t\t=========>Superior vena cava<=========\n";
                cout<<"For the Superior vena cava, peak blood velocity is "<<flow_velocity<<" cm/s while mean flow velocity is "<<avg_vel<<" cm/s.\n";
                int length;
                cout<<"\nEnter length of the superior vena cava = ";
                
                cin>>length;
                ld loss_vel = funcvel3(flow_velocity, avg_vel, length);
                //cout<<"\nFinal blood velocity at the end is "<<finVel<<endl;
                cout<<"Total viscous losses from heart to lungs is "<< loss_vel<<" Watt.\n";
            }
            break;
            
            case 4:
            {
                flow_velocity = 26;
                avg_vel = 13;
                cout << "\n\n\t\t=========>Inferior vena cava<=========\n";
                cout<<"For the inferior vena cava, peak blood velocity is "<<flow_velocity<<" cm/s while mean flow velocity is "<<avg_vel<<" cm/s.\n";
                int length;
                cout<<"\nEnter length of the superior vena cava = ";
                cin>>length;
                ld loss_vel = funcvel4(flow_velocity, avg_vel, length);
                //cout<<"\nFinal blood velocity at the end is "<<finVel<<endl;
                cout<<"Total viscous losses from heart to lungs is "<< loss_vel<<" Watt.\n";
            }
            break;
            
            case 0:
            {
                cout<<"\n\n\n\t\tEND REACHED\n\t";
                ld abc = PowerUtilised();
                cout<<"\nEnter the value of ideal cardiac output = ";
                break;
            }
            default : 
            cout<<"\n\t\tWRONG CHOICE! Please enter again (1/2/3/4/0) \n\t\t---------------------------------------------"<<endl;
        }   
    }
    
}


//***************----->MAIN()<-----************************************

int main()
{   
    int cH;
    cout<<"\n\t\t\tHuman circulatory system\n\t\t\t************************\n\t";
    //cout<<"\n Enter 1 for PORTABLE WATER \n\n Enter 0 to EXIT \n CHOICE = ";
    blood_circulation();
    return 0;
}