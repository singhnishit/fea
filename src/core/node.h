struct Node {
    Eigen::Vector3d position;
    Eigen::VectorXd displacement; // size = dof_per_node
    Eigen::VectorXd velocity;
    Eigen::VectorXd acceleration;
};
