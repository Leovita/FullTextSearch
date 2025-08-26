#ifndef org_apache_lucene_search_similarities_ClassicSimilarity_H
#define org_apache_lucene_search_similarities_ClassicSimilarity_H

#include "org/apache/lucene/search/similarities/TFIDFSimilarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        class TermStatistics;
        class CollectionStatistics;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_f5dd97eebf6a215a,
              mid_idf_49931e962a3f57e4,
              mid_idfExplain_684e0a1764dc292f,
              mid_lengthNorm_5873a23b935a9d49,
              mid_tf_760c23641efab431,
              mid_toString_e7df854526d67fa3,
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
