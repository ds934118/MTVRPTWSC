//
// Created by kevin on 2018/8/13.
//

#ifndef MTVRPTWSC_CUSTOMER_H
#define MTVRPTWSC_CUSTOMER_H


#include "TimeWindow.h"

class Customer {
public:
    Customer();

    Customer(int id);

    Customer(const Customer &_c);

    static bool cmp(const Customer &c1, const Customer &c2);

    int getID();
    void setID(int id);
    int getDemandQuantity();
    void setDemandQuantity(int dq);
    int getServiceTime();
    void setServiceTime(int st);
    int getT();
    void setT(int t);
    float getProbability();
    void setProbability(float p);
    TimeWindow getTimeWindow();
    void setTimeWindow(TimeWindow tw);

private:
    int _id;
    int _x;
    int _y;
    int _demandQuantity;
    int _serviceTime;
    int _t;
    float _probability;
    TimeWindow _timeWindow;

    void initialParams();
};


#endif //MTVRPTWSC_CUSTOMER_H
