#include <pybind11/embed.h> // everything needed for embedding
#include <nlohmann/json.hpp>

#include "json.h"

namespace py = pybind11;
namespace nl = nlohmann;

int main(int argc, char** argv) {
    py::scoped_interpreter guard{}; // start the interpreter and keep it alive

    py::object obj = nl::json{1,2,3};
    py::print(obj); // use the Python API
}
