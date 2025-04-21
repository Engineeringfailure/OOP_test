# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"

double Cylinder :: SurfaceArea(){
    double a;
    a=pi*2*radius*(radius+height);
    return a;
}

double Cylinder :: Volume(){
    double a;
    a=pi*radius*radius*height;
    return a;
}

double Cylinder :: Circumference(){
    double a;
    a=pi*2*radius; 
    return a;  
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<"Circumference: "<<fixed<<setprecision(3)<<cldr.Circumference()<<endl;
    out<<"SurfaceArea: "<<fixed<<setprecision(3)<<cldr.SurfaceArea()<<endl;
    out<<"Volume: "<<fixed<<setprecision(3)<<cldr.Volume()<<endl;
    return out;
}

# endif
