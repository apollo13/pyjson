#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <pybind11/cast.h>
#include <pybind11/stl.h>
#include <nlohmann/json.hpp>
#include <iostream>
#include <type_traits>


namespace py = pybind11;
namespace nl = nlohmann;

using namespace pybind11::literals;

namespace nlohmann
{

   namespace detail
    {
        py::object from_json_impl(const json& j);
        json to_json_impl(py::handle obj);
    }

    template <>
    struct adl_serializer<py::object>
    {
        static py::object from_json(const json& j);
        static void to_json(json& j, const py::object& obj);
    };

}
