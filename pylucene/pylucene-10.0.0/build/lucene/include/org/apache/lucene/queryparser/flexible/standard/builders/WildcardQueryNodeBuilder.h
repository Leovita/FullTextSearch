#ifndef org_apache_lucene_queryparser_flexible_standard_builders_WildcardQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_WildcardQueryNodeBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class WildcardQuery;
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace builders {

              class WildcardQueryNodeBuilder : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3720c61b0679eb3e,
                  mid_build_c81f4a949b687ec3,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit WildcardQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                WildcardQueryNodeBuilder(const WildcardQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                WildcardQueryNodeBuilder();

                ::org::apache::lucene::search::WildcardQuery build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
              extern PyType_Def PY_TYPE_DEF(WildcardQueryNodeBuilder);
              extern PyTypeObject *PY_TYPE(WildcardQueryNodeBuilder);

              class t_WildcardQueryNodeBuilder {
              public:
                PyObject_HEAD
                WildcardQueryNodeBuilder object;
                static PyObject *wrap_Object(const WildcardQueryNodeBuilder&);
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
