``` c++
int main() {
    int x[3] = {1, 2, 3};
    std::array<int, 3> x_as_cpp_style_array {1, 2, 3};
    static_assert(x_as_cpp_style_array.size() == 3);
}
```