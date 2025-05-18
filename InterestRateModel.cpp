//Interface Class

class InterestRateModel {
public:
virtual void run() = 0;
InterestRateModel()=delete;
InterestRateModel(const InterestRateModel& intRateModel)=delete;
InterestRateModel& operator=(const InterestRateModel& intRateModel)=delete;
InterestRateModel( InterestRateModel&& intRateModel)=delete;
InterestRateModel operator=(InterestRateModel& intRateModel)=delete;

~InterestRateModel() = delete;
private:

};
