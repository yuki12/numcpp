#include <cstddef>
namespace numcpp
{
template <typename T, size_t R, size_t C> using Matrix = T[R][C];
template <typename T, size_t L> using Vector = Matrix<T, L, 1>;

template <typename T, size_t R, size_t C>
constexpr T at (const Matrix<T, R, C> &src, size_t i, size_t j)
{
    return src[i][j];
}
template <typename T, size_t R, size_t C>
constexpr std::size_t rows (const Matrix<T, R, C> &)
{
    return R;
}
template <typename T, size_t R, size_t C>
constexpr std::size_t columns (const Matrix<T, R, C> &)
{
    return C;
}

template <typename T, size_t R, size_t C>
constexpr T &ref (Matrix<T, R, C> &src, size_t i, size_t j)
{
    return src[i][j];
}

template <typename T> void setIdentity (T &dst)
{
    for (size_t i = 0; i < rows (dst); ++i)
        for (size_t j = 0; j < columns (dst); ++j)
            ref (dst, i, j) = i == j ? 1 : 0;
}
template <typename T, typename U> void setScalar (T &dst, U value)
{
    for (size_t i = 0; i < rows (dst); ++i)
        for (size_t j = 0; j < columns (dst); ++j)
            ref (dst, i, j) = value;
}
template <typename T> void setZero (T &dst)
{
    for (size_t i = 0; i < rows (dst); ++i)
        for (size_t j = 0; j < columns (dst); ++j)
            ref (dst, i, j) = 0;
}

} // namespace numcpp
