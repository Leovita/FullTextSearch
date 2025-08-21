#ifndef org_apache_lucene_analysis_de_GermanStemFilterFactory_H
#define org_apache_lucene_analysis_de_GermanStemFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace de {
          class GermanStemFilter;
        }
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace de {

          class GermanStemFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_07f95c305fbcb12d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GermanStemFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GermanStemFilterFactory(const GermanStemFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            GermanStemFilterFactory();
            GermanStemFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::de::GermanStemFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace de {
          extern PyType_Def PY_TYPE_DEF(GermanStemFilterFactory);
          extern PyTypeObject *PY_TYPE(GermanStemFilterFactory);

          class t_GermanStemFilterFactory {
          public:
            PyObject_HEAD
            GermanStemFilterFactory object;
            static PyObject *wrap_Object(const GermanStemFilterFactory&);
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
