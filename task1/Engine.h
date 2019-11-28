#ifndef ENGINE_H
#define ENGINE_H value

class Engine
{
public:
    Engine(float size_in_liters, int n_cylinders);
    void print();
private:
    float size_in_liters;
    int num_of_cylinders;
};

#endif /* ifndef ENGINE_H */
