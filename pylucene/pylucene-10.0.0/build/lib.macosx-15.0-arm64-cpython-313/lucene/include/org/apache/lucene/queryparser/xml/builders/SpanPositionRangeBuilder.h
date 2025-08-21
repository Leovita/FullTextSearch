#ifndef org_apache_lucene_queryparser_xml_builders_SpanPositionRangeBuilder_H
#define org_apache_lucene_queryparser_xml_builders_SpanPositionRangeBuilder_H

#include "org/apache/lucene/queryparser/xml/builders/SpanBuilderBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          namespace builders {
            class SpanQueryBuilder;
          }
        }
      }
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

            class SpanPositionRangeBuilder : public ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase {
             public:
              enum {
                mid_init$_6edaab36c77ef039,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpanPositionRangeBuilder(jobject obj) : ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SpanPositionRangeBuilder(const SpanPositionRangeBuilder& obj) : ::org::apache::lucene::queryparser::xml::builders::SpanBuilderBase(obj) {}

              SpanPositionRangeBuilder(const ::org::apache::lucene::queryparser::xml::builders::SpanQueryBuilder &);
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
            extern PyType_Def PY_TYPE_DEF(SpanPositionRangeBuilder);
            extern PyTypeObject *PY_TYPE(SpanPositionRangeBuilder);

            class t_SpanPositionRangeBuilder {
            public:
              PyObject_HEAD
              SpanPositionRangeBuilder object;
              static PyObject *wrap_Object(const SpanPositionRangeBuilder&);
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
