#ifndef org_apache_lucene_search_LeafCollector_H
#define org_apache_lucene_search_LeafCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
        class DocIdStream;
        class Scorable;
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
    namespace lucene {
      namespace search {

        class LeafCollector : public ::java::lang::Object {
         public:
          enum {
            mid_collect_88a1df634c710f78,
            mid_collect_8226bd0b0fc13dba,
            mid_competitiveIterator_b78969502cbf4939,
            mid_finish_e7bdbe105ce1bafb,
            mid_setScorer_c06bdf7d53c6460a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafCollector(const LeafCollector& obj) : ::java::lang::Object(obj) {}

          void collect(const ::org::apache::lucene::search::DocIdStream &) const;
          void collect(jint) const;
          ::org::apache::lucene::search::DocIdSetIterator competitiveIterator() const;
          void finish() const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(LeafCollector);
        extern PyTypeObject *PY_TYPE(LeafCollector);

        class t_LeafCollector {
        public:
          PyObject_HEAD
          LeafCollector object;
          static PyObject *wrap_Object(const LeafCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
