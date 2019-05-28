# pyjson

```
cmake .
make
```

# Error

```
➜  pyjson git:(master) ✗ make  VERBOSE=1 && ./test
/usr/bin/cmake -S/home/florian/sources/pyjson -B/home/florian/sources/pyjson --check-build-system CMakeFiles/Makefile.cmake 0
/usr/bin/cmake -E cmake_progress_start /home/florian/sources/pyjson/CMakeFiles /home/florian/sources/pyjson/CMakeFiles/progress.marks
make -f CMakeFiles/Makefile2 all
make[1]: Entering directory '/home/florian/sources/pyjson'
make -f CMakeFiles/json_utils.dir/build.make CMakeFiles/json_utils.dir/depend
make[2]: Entering directory '/home/florian/sources/pyjson'
cd /home/florian/sources/pyjson && /usr/bin/cmake -E cmake_depends "Unix Makefiles" /home/florian/sources/pyjson /home/florian/sources/pyjson /home/florian/sources/pyjson /home/florian/sources/pyjson /home/florian/sources/pyjson/CMakeFiles/json_utils.dir/DependInfo.cmake --color=
Dependee "/home/florian/sources/pyjson/CMakeFiles/json_utils.dir/DependInfo.cmake" is newer than depender "/home/florian/sources/pyjson/CMakeFiles/json_utils.dir/depend.internal".
Dependee "/home/florian/sources/pyjson/CMakeFiles/CMakeDirectoryInformation.cmake" is newer than depender "/home/florian/sources/pyjson/CMakeFiles/json_utils.dir/depend.internal".
Scanning dependencies of target json_utils
make[2]: Leaving directory '/home/florian/sources/pyjson'
make -f CMakeFiles/json_utils.dir/build.make CMakeFiles/json_utils.dir/build
make[2]: Entering directory '/home/florian/sources/pyjson'
[ 25%] Building CXX object CMakeFiles/json_utils.dir/json.cpp.o
/usr/bin/clang++  -Djson_utils_EXPORTS -I/home/florian/sources/pyjson/external/json/single_include -I/home/florian/sources/pyjson/external/eigen -I/home/florian/sources/pyjson/external/pybind11/include -I/usr/include/python3.7m  -fPIC   -std=c++14 -o CMakeFiles/json_utils.dir/json.cpp.o -c /home/florian/sources/pyjson/json.cpp
/home/florian/sources/pyjson/json.cpp:50:9: warning: control may reach end of non-void function [-Wreturn-type]
        }
        ^
1 warning generated.
[ 50%] Linking CXX shared library libjson_utils.so
/usr/bin/cmake -E cmake_link_script CMakeFiles/json_utils.dir/link.txt --verbose=1
/usr/bin/clang++ -fPIC   -shared -Wl,-soname,libjson_utils.so -o libjson_utils.so CMakeFiles/json_utils.dir/json.cpp.o -lpython3.7m 
make[2]: Leaving directory '/home/florian/sources/pyjson'
[ 50%] Built target json_utils
make -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/depend
make[2]: Entering directory '/home/florian/sources/pyjson'
cd /home/florian/sources/pyjson && /usr/bin/cmake -E cmake_depends "Unix Makefiles" /home/florian/sources/pyjson /home/florian/sources/pyjson /home/florian/sources/pyjson /home/florian/sources/pyjson /home/florian/sources/pyjson/CMakeFiles/test.dir/DependInfo.cmake --color=
Dependee "/home/florian/sources/pyjson/CMakeFiles/test.dir/DependInfo.cmake" is newer than depender "/home/florian/sources/pyjson/CMakeFiles/test.dir/depend.internal".
Dependee "/home/florian/sources/pyjson/CMakeFiles/CMakeDirectoryInformation.cmake" is newer than depender "/home/florian/sources/pyjson/CMakeFiles/test.dir/depend.internal".
Scanning dependencies of target test
make[2]: Leaving directory '/home/florian/sources/pyjson'
make -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/build
make[2]: Entering directory '/home/florian/sources/pyjson'
[ 75%] Building CXX object CMakeFiles/test.dir/main.cpp.o
/usr/bin/clang++   -I/home/florian/sources/pyjson/external/json/single_include -I/home/florian/sources/pyjson/external/eigen -I/home/florian/sources/pyjson/external/pybind11/include -I/usr/include/python3.7m  -std=c++14 -o CMakeFiles/test.dir/main.cpp.o -c /home/florian/sources/pyjson/main.cpp
[100%] Linking CXX executable test
/usr/bin/cmake -E cmake_link_script CMakeFiles/test.dir/link.txt --verbose=1
/usr/bin/clang++    -rdynamic CMakeFiles/test.dir/main.cpp.o  -o test -Wl,-rpath,/home/florian/sources/pyjson libjson_utils.so -lpython3.7m 
/usr/bin/ld: CMakeFiles/test.dir/main.cpp.o: in function `pybind11::object nlohmann::basic_json<std::map, std::vector, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, long, unsigned long, double, std::allocator, nlohmann::adl_serializer>::get<pybind11::object, pybind11::object, 0>() const':
main.cpp:(.text._ZNK8nlohmann10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS_14adl_serializerEE3getIN8pybind116objectESD_Li0EEET0_v[_ZNK8nlohmann10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS_14adl_serializerEE3getIN8pybind116objectESD_Li0EEET0_v]+0x18): undefined reference to `nlohmann::adl_serializer<pybind11::object, void>::from_json(nlohmann::basic_json<std::map, std::vector, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, long, unsigned long, double, std::allocator, nlohmann::adl_serializer> const&)'
/usr/bin/ld: test: hidden symbol `_ZN8nlohmann14adl_serializerIN8pybind116objectEvE9from_jsonERKNS_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaS0_EE' isn't defined
/usr/bin/ld: final link failed: bad value
clang: error: linker command failed with exit code 1 (use -v to see invocation)
make[2]: *** [CMakeFiles/test.dir/build.make:86: test] Error 1
make[2]: Leaving directory '/home/florian/sources/pyjson'
make[1]: *** [CMakeFiles/Makefile2:110: CMakeFiles/test.dir/all] Error 2
make[1]: Leaving directory '/home/florian/sources/pyjson'
make: *** [Makefile:84: all] Error 2

➜  pyjson git:(master) ✗ nm -gC CMakeFiles/json_utils.dir/json.cpp.o|grep "_json"|grep pybind
0000000000000cce T nlohmann::adl_serializer<pybind11::object, void>::to_json(nlohmann::basic_json<std::map, std::vector, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, long, unsigned long, double, std::allocator, nlohmann::adl_serializer>&, pybind11::object const&)
0000000000000ca4 T nlohmann::adl_serializer<pybind11::object, void>::from_json(nlohmann::basic_json<std::map, std::vector, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, long, unsigned long, double, std::allocator, nlohmann::adl_serializer> const&)
0000000000000647 T nlohmann::detail::to_json_impl[abi:cxx11](pybind11::handle)
➜  pyjson git:(master) ✗ nm -gC libjson_utils.so|grep "_json"|grep pybind 
➜  pyjson git:(master) ✗ 
```
