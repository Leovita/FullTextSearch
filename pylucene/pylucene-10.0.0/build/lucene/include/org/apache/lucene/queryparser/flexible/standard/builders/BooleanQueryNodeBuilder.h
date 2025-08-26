#ifndef org_apache_lucene_queryparser_flexible_standard_builders_BooleanQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_BooleanQueryNodeBuilder_H

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
        class BooleanQuery;
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

              class BooleanQueryNodeBuilder : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_e7bdbe105ce1bafb,
                  mid_build_ba04fa94d28b5478,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit BooleanQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                BooleanQueryNodeBuilder(const BooleanQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                BooleanQueryNodeBuilder();

                ::org::apache::lucene::search::BooleanQuery build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
              extern PyType_Def PY_TYPE_DEF(BooleanQueryNodeBuilder);
              extern PyTypeObject *PY_TYPE(BooleanQueryNodeBuilder);

              class t_BooleanQueryNodeBuilder {
              public:
                PyObject_HEAD
                BooleanQueryNodeBuilder object;
                static PyObject *wrap_Object(const BooleanQueryNodeBuilder&);
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
