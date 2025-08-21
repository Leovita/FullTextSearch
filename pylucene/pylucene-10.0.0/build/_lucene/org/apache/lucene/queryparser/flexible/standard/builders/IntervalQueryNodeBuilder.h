#ifndef org_apache_lucene_queryparser_flexible_standard_builders_IntervalQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_IntervalQueryNodeBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
            }
            class QueryNodeException;
          }
          namespace standard {
            namespace builders {
              class StandardQueryBuilder;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace builders {

              class IntervalQueryNodeBuilder : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3720c61b0679eb3e,
                  mid_build_636e329e1785ccb4,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit IntervalQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                IntervalQueryNodeBuilder(const IntervalQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                IntervalQueryNodeBuilder();

                ::org::apache::lucene::search::Query build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
              };
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
            namespace builders {
              extern PyType_Def PY_TYPE_DEF(IntervalQueryNodeBuilder);
              extern PyTypeObject *PY_TYPE(IntervalQueryNodeBuilder);

              class t_IntervalQueryNodeBuilder {
              public:
                PyObject_HEAD
                IntervalQueryNodeBuilder object;
                static PyObject *wrap_Object(const IntervalQueryNodeBuilder&);
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

#endif
