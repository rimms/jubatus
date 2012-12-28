// Jubatus: Online machine learning framework for distributed environment
// Copyright (C) 2011,2012 Preferred Infrastructure and Nippon Telegraph and Telephone Corporation.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License version 2.1 as published by the Free Software Foundation.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

#include "graph_factory.hpp"
#include "graph.hpp"
#include "../common/exception.hpp"
#include "../common/jsonconfig.hpp"
#include <stdexcept>

using namespace std;

namespace jubatus {
namespace graph {

graph_base* create_graph(const string& name, const jsonconfig::config& param) {
  if (name == "graph_wo_index"){
    // TODO(suma): return new graph_wo_index(config_cast_check<graph_wo_index>(param));
    return new graph_wo_index;
  } else {
    throw JUBATUS_EXCEPTION(unknown_graph(name));
  }
}
}
}
