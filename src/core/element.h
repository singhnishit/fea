class Element {
public:
    virtual Eigen::MatrixXd stiffness() = 0;
    virtual Eigen::MatrixXd mass() = 0;
    virtual void computeStress() = 0;
};
