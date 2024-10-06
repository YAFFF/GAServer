#ifndef geneticAlgorithm_hpp
#define geneticAlgorithm_hpp

#include "individual.hpp"
#include <random>
#include <string>
#include <vector>

class GeneticAlgorithm {
private:
  std::vector<Individual> population, geneticBank;
  std::vector<std::string> bestIndividualsList;
  bool valumeMinMax, isResultExist;
  std::random_device rd;
  double (*functionZ)(double, double);

  void fitness();
  void crossOver();
  void mutation();
  int cycle(int, bool);
  double result(bool);
  std::string findBestIndividual(double);

public:
  GeneticAlgorithm(double (*)(double, double));
  double getResult();
  bool isResult();
  std::vector<std::string> getBestIndividualsList();
};

#endif // !GENETICALGORITHMGUI_GENETICALGORITHM_H
