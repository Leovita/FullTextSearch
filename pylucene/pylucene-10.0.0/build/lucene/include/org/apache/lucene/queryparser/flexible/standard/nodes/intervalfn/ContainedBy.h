#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_intervalfn_ContainedBy_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_intervalfn_ContainedBy_H

#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/IntervalFunction.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace queries {
        namespace intervals {
          class IntervalsSource;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace nodes {
              namespace intervalfn {

                class ContainedBy : public ::org::apache::lucene::queryparser::flexible::standard::nodes::intervalfn::IntervalFunction {
                 public:
                  enum {
                    mid_init$_1d06c4c1a11ee5ef,
                    mid_toIntervalSource_1a0ac8e6b7e7e56f,
                    mid_toString_e7df854526d67fa3,
                    max_mid
                  };

                  static ::java::lang::Class *class$;
                  static jmethodID *mids$;
                  static bool live$;
                  static jclass initializeClass(bool);

                  explicit ContainedBy(jobject obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::intervalfn::IntervalFunction(obj) {
                    if (obj != NULL && mids$ == NULL)
                      env->getClass(initializeClass);
                  }
                  ContainedBy(const ContainedBy& obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::intervalfn::IntervalFunction(obj) {}

                  ContainedBy(const ::org::apache::lucene::queryparser::flexible::standard::nodes::intervalfn::IntervalFunction &, const ::org::apache::lucene::queryparser::flexible::standard::nodes::intervalfn::IntervalFunction &);

                  ::org::apache::lucene::queries::intervals::IntervalsSource toIntervalSource(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &) const;
                  ::java::lang::String toString() const;
                };
              }
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace nodes {
              namespace intervalfn {
                extern PyType_Def PY_TYPE_DEF(ContainedBy);
                extern PyTypeObject *PY_TYPE(ContainedBy);

                class t_ContainedBy {
                public:
                  PyObject_HEAD
                  ContainedBy object;
                  static PyObject *wrap_Object(const ContainedBy&);
                  static PyObject *wrap_jobject(const jobject&);
                  static void install(PyObject *module);
                  static void initialize(PyObject *module);
                };
              }
            }
          }
        }
      }
    }
  }
}

#endif
