#ifndef org_apache_lucene_search_MultiTermQuery$TopTermsBlendedFreqScoringRewrite_H
#define org_apache_lucene_search_MultiTermQuery$TopTermsBlendedFreqScoringRewrite_H

#include "org/apache/lucene/search/TopTermsRewrite.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BlendedTermQuery$Builder;
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
      namespace search {

        class MultiTermQuery$TopTermsBlendedFreqScoringRewrite : public ::org::apache::lucene::search::TopTermsRewrite {
         public:
          enum {
            mid_init$_8226bd0b0fc13dba,
            mid_getTopLevelBuilder_67f2250fac61b3a9,
            mid_getMaxSize_bd89ce15dad49192,
            mid_addClause_4cf4485a96db610d,
            mid_build_710cb61a40fbdbb1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermQuery$TopTermsBlendedFreqScoringRewrite(jobject obj) : ::org::apache::lucene::search::TopTermsRewrite(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiTermQuery$TopTermsBlendedFreqScoringRewrite(const MultiTermQuery$TopTermsBlendedFreqScoringRewrite& obj) : ::org::apache::lucene::search::TopTermsRewrite(obj) {}

          MultiTermQuery$TopTermsBlendedFreqScoringRewrite(jint);
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
        extern PyType_Def PY_TYPE_DEF(MultiTermQuery$TopTermsBlendedFreqScoringRewrite);
        extern PyTypeObject *PY_TYPE(MultiTermQuery$TopTermsBlendedFreqScoringRewrite);

        class t_MultiTermQuery$TopTermsBlendedFreqScoringRewrite {
        public:
          PyObject_HEAD
          MultiTermQuery$TopTermsBlendedFreqScoringRewrite object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiTermQuery$TopTermsBlendedFreqScoringRewrite *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiTermQuery$TopTermsBlendedFreqScoringRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiTermQuery$TopTermsBlendedFreqScoringRewrite&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
