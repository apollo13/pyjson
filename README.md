# pyjson

```
cmake .
make
```

# Error

```
➜  pyjson git:(master) ✗ nm -gC CMakeFiles/json_utils.dir/json.cpp.o|grep "_json"|grep pybind
0000000000000cce T nlohmann::adl_serializer<pybind11::object, void>::to_json(nlohmann::basic_json<std::map, std::vector, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, long, unsigned long, double, std::allocator, nlohmann::adl_serializer>&, pybind11::object const&)
0000000000000ca4 T nlohmann::adl_serializer<pybind11::object, void>::from_json(nlohmann::basic_json<std::map, std::vector, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, long, unsigned long, double, std::allocator, nlohmann::adl_serializer> const&)
0000000000000647 T nlohmann::detail::to_json_impl[abi:cxx11](pybind11::handle)
➜  pyjson git:(master) ✗ nm -gC libjson_utils.so|grep "_json"|grep pybind 
➜  pyjson git:(master) ✗ 
```
