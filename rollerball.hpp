#pragma once

#include "engine_base.hpp"
#include <atomic>

class Engine : public AbstractEngine {

    // add extra items here. 
    // Note that your engine will always be instantiated with the default 
    // constructor.
    public:
    
    int row(std::string l);
    std::tuple<int,int> kingposk ;
    std::tuple<int,int> pawnposP;
    std::tuple<int,int> rookposR ;
    std::tuple<int,int> knightposN;
    std::tuple<int,int> bishopposB;
    std::tuple<int,int> kingposK;
    std::tuple<int,int> pawnposp ;
    std::tuple<int,int> rookposr ;
    std::tuple<int,int> knightposn;
    std::tuple<int,int> bishopposb ;
    std::vector<double> board_vector;
    void find_best_move(const Board& b) override;
    std::vector<double> bias_matrix1() ;
    std::vector<double> bias_matrix_final(const Board& b) ;
    std::vector<std::vector<double>> weight_matrix1();
    std::vector<std::vector<double>> weight_matrix_middle();
    std::vector<std::vector<double>> weight_matrix_final(const Board& b);
    std::vector<std::vector<double>> transpose_matrix(std::vector<std::vector<double>> vect);
    std::vector<std::vector<double>> transpose_single(std::vector<double> vect);
    std::vector<double> matrix_multiplication(std::vector<std::vector<double>> vect_weight, std::vector<double> activation, std::vector<double> bias);
    void location(const Board& b);
    double transition(char k);
};
