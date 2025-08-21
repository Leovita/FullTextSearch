#ifndef org_apache_lucene_search_similarities_ClassicSimilarity_H
#define org_apache_lucene_search_similarities_ClassicSimilarity_H

#include "org/apache/lucene/search/similarities/TFIDFSimilarity.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class CollectionStatistics;
        class Explanation;
        class TermStatistics;
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

          class ClassicSimilarity : public ::org::apache::lucene::search::similarities::TFIDFSimilarity {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_b110fc3a58c081ab,
              mid_idf_080f674c1bc73c17,
              mid_idfExplain_ab8a1aa08a5185a2,
              mid_lengthNorm_29cfa01aaad92564,
              mid_tf_8fa359a2bc20a127,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ClassicSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::TFIDFSimilarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ClassicSimilarity(const ClassicSimilarity& obj) : ::org::apache::lucene::search::similarities::TFIDFSimilarity(obj) {}

            ClassicSimilarity();
            ClassicSimilarity(jboolean);

            jfloat idf(jlong, jlong) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const ::org::apache::lucene::search::TermStatistics &) const;
            jfloat lengthNorm(jint) const;
            jfloat tf(jfloat) const;
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
          extern PyType_Def PY_TYPE_DEF(ClassicSimilarity);
          extern PyTypeObject *PY_TYPE(ClassicSimilarity);

          class t_ClassicSimilarity {
          public:
            PyObject_HEAD
            ClassicSimilarity object;
            static PyObject *wrap_Object(const ClassicSimilarity&);
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
