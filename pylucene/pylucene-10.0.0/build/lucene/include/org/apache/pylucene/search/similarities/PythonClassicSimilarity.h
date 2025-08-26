#ifndef org_apache_pylucene_search_similarities_PythonClassicSimilarity_H
#define org_apache_pylucene_search_similarities_PythonClassicSimilarity_H

#include "org/apache/lucene/search/similarities/ClassicSimilarity.h"

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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {

          class PythonClassicSimilarity : public ::org::apache::lucene::search::similarities::ClassicSimilarity {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_idf_49931e962a3f57e4,
              mid_idfExplain_9cf8582f72982b4d,
              mid_lengthNorm_5873a23b935a9d49,
              mid_pythonExtension_0f176418e3e16541,
              mid_pythonExtension_1d3149fac12f2af3,
              mid_tf_760c23641efab431,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonClassicSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::ClassicSimilarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonClassicSimilarity(const PythonClassicSimilarity& obj) : ::org::apache::lucene::search::similarities::ClassicSimilarity(obj) {}

            PythonClassicSimilarity();

            jfloat idf(jlong, jlong) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            jfloat lengthNorm(jint) const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            jfloat tf(jfloat) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(PythonClassicSimilarity);
          extern PyTypeObject *PY_TYPE(PythonClassicSimilarity);

          class t_PythonClassicSimilarity {
          public:
            PyObject_HEAD
            PythonClassicSimilarity object;
            static PyObject *wrap_Object(const PythonClassicSimilarity&);
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
