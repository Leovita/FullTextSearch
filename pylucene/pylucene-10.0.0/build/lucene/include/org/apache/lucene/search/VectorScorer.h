#ifndef org_apache_lucene_search_VectorScorer_H
#define org_apache_lucene_search_VectorScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
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

        class VectorScorer : public ::java::lang::Object {
         public:
          enum {
            mid_iterator_fc644a826c65d236,
            mid_score_9b6c3480dac00edf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit VectorScorer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          VectorScorer(const VectorScorer& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
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
        extern PyType_Def PY_TYPE_DEF(VectorScorer);
        extern PyTypeObject *PY_TYPE(VectorScorer);

        class t_VectorScorer {
        public:
          PyObject_HEAD
          VectorScorer object;
          static PyObject *wrap_Object(const VectorScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
