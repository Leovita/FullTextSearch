#ifndef org_apache_lucene_analysis_fa_PersianStemFilterFactory_H
#define org_apache_lucene_analysis_fa_PersianStemFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace fa {
          class PersianStemFilter;
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
        namespace fa {

          class PersianStemFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_63abb054de6c8042,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PersianStemFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PersianStemFilterFactory(const PersianStemFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            PersianStemFilterFactory();
            PersianStemFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::fa::PersianStemFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace fa {
          extern PyType_Def PY_TYPE_DEF(PersianStemFilterFactory);
          extern PyTypeObject *PY_TYPE(PersianStemFilterFactory);

          class t_PersianStemFilterFactory {
          public:
            PyObject_HEAD
            PersianStemFilterFactory object;
            static PyObject *wrap_Object(const PersianStemFilterFactory&);
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
