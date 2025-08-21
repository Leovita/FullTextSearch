#ifndef org_apache_lucene_queryparser_xml_builders_BoostingTermBuilder_H
#define org_apache_lucene_queryparser_xml_builders_BoostingTermBuilder_H

#include "org/apache/lucene/queryparser/xml/builders/SpanBuilderBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanQuery;
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
        namespace xml {
          namespace builders {

            class BoostingTermBuilder : public ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase {
             public:
              enum {
                mid_init$_3720c61b0679eb3e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BoostingTermBuilder(jobject obj) : ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BoostingTermBuilder(const BoostingTermBuilder& obj) : ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase(obj) {}

              BoostingTermBuilder();
            };
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
        namespace xml {
          namespace builders {
            extern PyType_Def PY_TYPE_DEF(BoostingTermBuilder);
            extern PyTypeObject *PY_TYPE(BoostingTermBuilder);

            class t_BoostingTermBuilder {
            public:
              PyObject_HEAD
              BoostingTermBuilder object;
              static PyObject *wrap_Object(const BoostingTermBuilder&);
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

#endif
