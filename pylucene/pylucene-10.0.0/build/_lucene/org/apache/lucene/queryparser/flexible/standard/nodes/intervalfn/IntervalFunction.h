#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_intervalfn_IntervalFunction_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_intervalfn_IntervalFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
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

                class IntervalFunction : public ::java::lang::Object {
                 public:
                  enum {
                    mid_init$_3720c61b0679eb3e,
                    mid_toIntervalSource_9a07cc0e621ef81d,
                    mid_toString_09a7afff1868fc5e,
                    max_mid
                  };

                  static ::java::lang::Class *class$;
                  static jmethodID *mids$;
                  static bool live$;
                  static jclass initializeClass(bool);

                  explicit IntervalFunction(jobject obj) : ::java::lang::Object(obj) {
                    if (obj != NULL && mids$ == NULL)
                      env->getClass(initializeClass);
                  }
                  IntervalFunction(const IntervalFunction& obj) : ::java::lang::Object(obj) {}

                  IntervalFunction();

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
                extern PyType_Def PY_TYPE_DEF(IntervalFunction);
                extern PyTypeObject *PY_TYPE(IntervalFunction);

                class t_IntervalFunction {
                public:
                  PyObject_HEAD
                  IntervalFunction object;
                  static PyObject *wrap_Object(const IntervalFunction&);
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
