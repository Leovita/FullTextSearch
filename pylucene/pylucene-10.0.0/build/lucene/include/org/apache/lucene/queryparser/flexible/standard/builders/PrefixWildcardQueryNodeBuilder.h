#ifndef org_apache_lucene_queryparser_flexible_standard_builders_PrefixWildcardQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_PrefixWildcardQueryNodeBuilder_H

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
        class PrefixQuery;
      }
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
            namespace nodes {
              class QueryNode;
            }
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

              class PrefixWildcardQueryNodeBuilder : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_e7bdbe105ce1bafb,
                  mid_build_f2a3d5b3773e123e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PrefixWildcardQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PrefixWildcardQueryNodeBuilder(const PrefixWildcardQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                PrefixWildcardQueryNodeBuilder();

                ::org::apache::lucene::search::PrefixQuery build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
              extern PyType_Def PY_TYPE_DEF(PrefixWildcardQueryNodeBuilder);
              extern PyTypeObject *PY_TYPE(PrefixWildcardQueryNodeBuilder);

              class t_PrefixWildcardQueryNodeBuilder {
              public:
                PyObject_HEAD
                PrefixWildcardQueryNodeBuilder object;
                static PyObject *wrap_Object(const PrefixWildcardQueryNodeBuilder&);
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
