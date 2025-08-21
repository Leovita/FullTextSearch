#ifndef org_apache_lucene_queryparser_flexible_standard_builders_MinShouldMatchNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_MinShouldMatchNodeBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace builders {
              class QueryBuilder;
            }
            namespace nodes {
              class QueryNode;
            }
          }
        }
      }
      namespace search {
        class Query;
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

              class MinShouldMatchNodeBuilder : public ::java::lang::Object {
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

                explicit MinShouldMatchNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                MinShouldMatchNodeBuilder(const MinShouldMatchNodeBuilder& obj) : ::java::lang::Object(obj) {}

                MinShouldMatchNodeBuilder();

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
              extern PyType_Def PY_TYPE_DEF(MinShouldMatchNodeBuilder);
              extern PyTypeObject *PY_TYPE(MinShouldMatchNodeBuilder);

              class t_MinShouldMatchNodeBuilder {
              public:
                PyObject_HEAD
                MinShouldMatchNodeBuilder object;
                static PyObject *wrap_Object(const MinShouldMatchNodeBuilder&);
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
