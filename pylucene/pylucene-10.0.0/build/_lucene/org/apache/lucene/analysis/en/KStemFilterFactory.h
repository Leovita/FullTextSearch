#ifndef org_apache_lucene_analysis_en_KStemFilterFactory_H
#define org_apache_lucene_analysis_en_KStemFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class TokenFilter;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace en {

          class KStemFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_1a59f0bb49337b2d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KStemFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KStemFilterFactory(const KStemFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            KStemFilterFactory();
            KStemFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
      namespace analysis {
        namespace en {
          extern PyType_Def PY_TYPE_DEF(KStemFilterFactory);
          extern PyTypeObject *PY_TYPE(KStemFilterFactory);

          class t_KStemFilterFactory {
          public:
            PyObject_HEAD
            KStemFilterFactory object;
            static PyObject *wrap_Object(const KStemFilterFactory&);
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
