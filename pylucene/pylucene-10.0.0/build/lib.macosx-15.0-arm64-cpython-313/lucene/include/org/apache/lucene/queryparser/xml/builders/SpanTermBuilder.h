#ifndef org_apache_lucene_queryparser_xml_builders_SpanTermBuilder_H
#define org_apache_lucene_queryparser_xml_builders_SpanTermBuilder_H

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

            class SpanTermBuilder : public ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase {
             public:
              enum {
                mid_init$_3720c61b0679eb3e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpanTermBuilder(jobject obj) : ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SpanTermBuilder(const SpanTermBuilder& obj) : ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase(obj) {}

              SpanTermBuilder();
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
            extern PyType_Def PY_TYPE_DEF(SpanTermBuilder);
            extern PyTypeObject *PY_TYPE(SpanTermBuilder);

            class t_SpanTermBuilder {
            public:
              PyObject_HEAD
              SpanTermBuilder object;
              static PyObject *wrap_Object(const SpanTermBuilder&);
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
