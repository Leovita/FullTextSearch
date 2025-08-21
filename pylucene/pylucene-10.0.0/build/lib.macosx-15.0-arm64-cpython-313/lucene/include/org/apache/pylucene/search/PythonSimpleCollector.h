#ifndef org_apache_pylucene_search_PythonSimpleCollector_H
#define org_apache_pylucene_search_PythonSimpleCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        class ScoreMode;
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
            mid_init$_3720c61b0679eb3e,
            mid_collect_540b2b23d51b1efd,
            mid_collect_06e0b8d4c1d7906b,
            mid_doSetNextReader_b7b06dce0a4097ed,
            mid_pythonExtension_16939d9d0a9a9721,
            mid_pythonExtension_8b3d46852b435a94,
            mid_scoreMode_45dfdcf7e901559d,
            mid_setScorer_dd42dde4c0a7db1e,
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
