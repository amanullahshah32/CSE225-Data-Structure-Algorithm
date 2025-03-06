#ifndef CONVERSION_H
#define CONVERSION_H


class Conversion
{
    public:
        Conversion();
        virtual ~Conversion();
        Conversion(double height, double weight);
        double convertHeightToInches();
        double convertWeightToPounds();
        void display();

    protected:

    private:
        double height_cm;
        double weight_kg;
};

#endif // CONVERSION_H
