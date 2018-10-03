#include <cstddef>
namespace numcpp
{
template <typename T, size_t R, size_t C> using Matrix = T[R][C];
template <typename T, size_t L> using Vector = Matrix<T, L, 1>;

template <typename T, size_t R, size_t C>
void setIdentity (Matrix<T, R, C> &dst)
{
    for (size_t i = 0; i < R; ++i)
        for (size_t j = 0; j < C; ++j)
            dst[i][j] = i == j ? 1 : 0;
}
template <typename T, size_t R, size_t C>
void setScalar (Matrix<T, R, C> &dst, T value)
{
    for (size_t i = 0; i < R; ++i)
        for (size_t j = 0; j < C; ++j)
            dst[i][j] = value;
}
template <typename T, size_t R, size_t C> void setZero (Matrix<T, R, C> &dst)
{
    for (size_t i = 0; i < R; ++i)
        for (size_t j = 0; j < C; ++j)
            dst[i][j] = 0;
}
} // namespace numcpp
