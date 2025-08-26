#ifndef org_apache_lucene_queries_spans_SpanContainQuery$SpanContainWeight_H
#define org_apache_lucene_queries_spans_SpanContainQuery$SpanContainWeight_H

#include "org/apache/lucene/queries/spans/SpanWeight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermStates;
        class Term;
      }
      namespace queries {
        namespace spans {
          class SpanContainQuery;
        }
      }
      namespace search {
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanContainQuery$SpanContainWeight : public ::org::apache::lucene::queries::spans::SpanWeight {
           public:
            enum {
              mid_init$_9d2f43e541263e92,
              mid_extractTermStates_6a7e23584beb7c0f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanContainQuery$SpanContainWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanContainQuery$SpanContainWeight(const SpanContainQuery$SpanContainWeight& obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {}

            SpanContainQuery$SpanContainWeight(const ::org::apache::lucene::queries::spans::SpanContainQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::org::apache::lucene::queries::spans::SpanWeight &, const ::org::apache::lucene::queries::spans::SpanWeight &, jfloat);

            void extractTermStates(const ::java::util::Map &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanContainQuery$SpanContainWeight);
          extern PyTypeObject *PY_TYPE(SpanContainQuery$SpanContainWeight);

          class t_SpanContainQuery$SpanContainWeight {
          public:
            PyObject_HEAD
            SpanContainQuery$SpanContainWeight object;
            static PyObject *wrap_Object(const SpanContainQuery$SpanContainWeight&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
