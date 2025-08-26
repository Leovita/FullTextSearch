#ifndef org_apache_pylucene_search_PythonSimpleCollector_H
#define org_apache_pylucene_search_PythonSimpleCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Scorable;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {

        class PythonSimpleCollector : public ::org::apache::lucene::search::SimpleCollector {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_collect_8226bd0b0fc13dba,
            mid_collect_a18b0cdf76a9509e,
            mid_doSetNextReader_32243afefe6b151f,
            mid_pythonExtension_0f176418e3e16541,
            mid_pythonExtension_1d3149fac12f2af3,
            mid_scoreMode_23e7061dcdc84768,
            mid_setScorer_c06bdf7d53c6460a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonSimpleCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonSimpleCollector(const PythonSimpleCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

          PythonSimpleCollector();

          void collect(jint) const;
          void collect(jint, jfloat) const;
          void doSetNextReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(PythonSimpleCollector);
        extern PyTypeObject *PY_TYPE(PythonSimpleCollector);

        class t_PythonSimpleCollector {
        public:
          PyObject_HEAD
          PythonSimpleCollector object;
          static PyObject *wrap_Object(const PythonSimpleCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
