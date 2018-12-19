
#pragma once


namespace globjects
{

template <typename T>
void Buffer::setData(const T & data, gl::GLenum usage)
{
    setData(static_cast<gl::GLsizeiptr>(sizeof(T)), &data, usage);
}

template <typename T>
void Buffer::setData(const std::vector<T> & data, gl::GLenum usage)
{
    setData(static_cast<gl::GLsizeiptr>(data.size() * sizeof(T)), data.data(), usage);
}

template <typename T, std::size_t Count>
void Buffer::setData(const std::array<T, Count> & data, gl::GLenum usage)
{
    setData(static_cast<gl::GLsizeiptr>(Count * sizeof(T)), data.data(), usage);
}

template <typename T>
void Buffer::setSubData(const T & data, gl::GLintptr offset)
{
    setSubData(offset, static_cast<gl::GLsizei>(sizeof(T)), &data);
}

template <typename T>
void Buffer::setSubData(const std::vector<T> & data, gl::GLintptr offset)
{
    setSubData(offset, static_cast<gl::GLsizei>(data.size() * sizeof(T)), data.data());
}

template <typename T, std::size_t Count>
void Buffer::setSubData(const std::array<T, Count> & data, gl::GLintptr offset)
{
    setSubData(offset, static_cast<gl::GLsizei>(Count * sizeof(T)), data.data());
}

template <typename T>
void Buffer::setStorage(const T & data, gl::BufferStorageMask flags)
{
    setStorage(static_cast<gl::GLsizei>(sizeof(T)), &data, flags);
}

template <typename T>
void Buffer::setStorage(const std::vector<T> & data, gl::BufferStorageMask flags)
{
    setStorage(static_cast<gl::GLsizei>(data.size() * sizeof(T)), data.data(), flags);
}

template <typename T, std::size_t Count>
void Buffer::setStorage(const std::array<T, Count> & data, gl::BufferStorageMask flags)
{
    setStorage(static_cast<gl::GLsizei>(Count * sizeof(T)), data.data(), flags);
}

template <typename T>
std::vector<T> Buffer::getSubData(gl::GLsizeiptr count, gl::GLintptr offset) const
{
    std::vector<T> data(count);

    getSubData(offset, static_cast<gl::GLsizeiptr>(count * sizeof(T)), data.data());

    return data;
}

template <typename T, std::size_t Count>
std::array<T, Count> Buffer::getSubData(gl::GLintptr offset) const
{
    std::array<T, Count> data;

    getSubData(offset, static_cast<gl::GLsizeiptr>(Count * sizeof(T)), data.data());

    return data;
}


} // namespace globjects
