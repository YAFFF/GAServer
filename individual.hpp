#ifndef individual_hpp
#define individual_hpp

class Individual {
private:
  double x, y, z;

public:
  Individual(double, double, double);
  double getX();
  double getY();
  double getZ();
};

#endif // !GENETICALGORITHM_INDIVIDUAL_H
