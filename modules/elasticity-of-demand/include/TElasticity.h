// Copyright 2016 Arhipycheva Anastasia

#ifndef MODULES_ELASTICITY_OF_DEMAND_INCLUDE_TELASTICITY_H_
#define MODULES_ELASTICITY_OF_DEMAND_INCLUDE_TELASTICITY_H_
#include <iostream>
using std::cout;
using std::endl;

namespace TElasticity {
  const int CODE_ERROR = 1000;
  void ElasticityByPricePoint(int Q1, int Q0, int P1, int P0);
  void ElasticityByPriceArc(int Q1, int Q0, int P1, int P0);
  void ElasticityByIncome(int Q1, int Q0, float I1, float I0);
  void ElasticityCross(int QA1, int QA0, float PB1, float PB0);

  int ElasticityByPricePointDo(int Q1, int Q0, int P1, int P0);
  int ElasticityByPriceArcDo(int Q1, int Q0, int P1, int P0);
  int ElasticityByIncomeDo(int Q1, int Q0, float I1, float I0);
  int ElasticityCrossDo(int QA1, int QA0, float PB1, float PB0);
}  // namespace TElasticity


#endif  // MODULES_ELASTICITY_OF_DEMAND_INCLUDE_TELASTICITY_H_