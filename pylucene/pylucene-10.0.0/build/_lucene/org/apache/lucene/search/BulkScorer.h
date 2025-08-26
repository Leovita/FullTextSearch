#ifndef org_apache_lucene_search_BulkScorer_H
#define org_apache_lucene_search_BulkScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafCollector;
      }
      namespace util {
        class Bits;
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

        class BulkScorer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_cost_0f176418e3e16541,
            mid_score_15251593bde60840,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BulkScorer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BulkScorer(const BulkScorer& obj) : ::java::lang::Object(obj) {}

          BulkScorer();

          jlong cost() const;
          jint score(const ::org::apache::lucene::search::LeafCollector &, const ::org::apache::lucene::util::Bits &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(BulkScorer);
        extern PyTypeObject *PY_TYPE(BulkScorer);

        class t_BulkScorer {
        public:
          PyObject_HEAD
          BulkScorer object;
          static PyObject *wrap_Object(const BulkScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
