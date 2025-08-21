#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_intervalfn_NotWithin_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_intervalfn_NotWithin_H

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
      namespace queries {
        namespace intervals {
          class IntervalsSource;
        }
      }
      namespace analysis {
        class Analyzer;
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

                class NotWithin : public ::org::apache::lucene::queryparser::flexible::standard::nodes::intervalfn::IntervalFunction {
                 public:
                  enum {
                    mid_init$_f68fc1fe835a5f79,
                    mid_toIntervalSource_9a07cc0e621ef81d,
                    mid_toString_09a7afff1868fc5e,
                    max_mid
                  };

                  static ::java::lang::Class *class$;
                  static jmethodID *mids$;
                  static bool live$;
                  static jclass initializeClass(bool);

                  explicit NotWithin(jobject obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::intervalfn::IntervalFunction(obj) {
                    if (obj != NULL && mids$ == NULL)
                      env->getClass(initializeClass);
                  }
                  NotWithin(const NotWithin& obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::intervalfn::IntervalFunction(obj) {}

                  NotWithin(const ::org::apache::lucene::queryparser::flexible::standard::nodes::intervalfn::IntervalFunction &, jint, const ::org::apache::lucene::queryparser::flexible::standard::nodes::intervalfn::IntervalFunction &);

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
                extern PyType_Def PY_TYPE_DEF(NotWithin);
                extern PyTypeObject *PY_TYPE(NotWithin);

                class t_NotWithin {
                public:
                  PyObject_HEAD
                  NotWithin object;
                  static PyObject *wrap_Object(const NotWithin&);
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
