#ifndef org_apache_lucene_search_ConstantScoreWeight_H
#define org_apache_lucene_search_ConstantScoreWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class Explanation;
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

        class ConstantScoreWeight : public ::org::apache::lucene::search::Weight {
         public:
          enum {
            mid_explain_478bccbc961eab03,
            mid_score_9b6c3480dac00edf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConstantScoreWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConstantScoreWeight(const ConstantScoreWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(ConstantScoreWeight);
        extern PyTypeObject *PY_TYPE(ConstantScoreWeight);

        class t_ConstantScoreWeight {
        public:
          PyObject_HEAD
          ConstantScoreWeight object;
          static PyObject *wrap_Object(const ConstantScoreWeight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
