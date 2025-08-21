#ifndef org_apache_lucene_search_similarities_NormalizationZ_H
#define org_apache_lucene_search_similarities_NormalizationZ_H

#include "org/apache/lucene/search/similarities/Normalization.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicStats;
        }
        class Explanation;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class NormalizationZ : public ::org::apache::lucene::search::similarities::Normalization {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_c771a95b0227fb6a,
              mid_explain_9818494c02db3b22,
              mid_getZ_9b6c3480dac00edf,
              mid_tfn_4520853cec1acecd,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalizationZ(jobject obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NormalizationZ(const NormalizationZ& obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {}

            NormalizationZ();
            NormalizationZ(jfloat);

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
            jfloat getZ() const;
            jdouble tfn(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
            ::java::lang::String toString() const;
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
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(NormalizationZ);
          extern PyTypeObject *PY_TYPE(NormalizationZ);

          class t_NormalizationZ {
          public:
            PyObject_HEAD
            NormalizationZ object;
            static PyObject *wrap_Object(const NormalizationZ&);
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
