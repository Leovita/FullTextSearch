#ifndef org_apache_lucene_analysis_ckb_SoraniStemFilterFactory_H
#define org_apache_lucene_analysis_ckb_SoraniStemFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ckb {
          class SoraniStemFilter;
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
        namespace ckb {

          class SoraniStemFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_0f60af1935c9043c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SoraniStemFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SoraniStemFilterFactory(const SoraniStemFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            SoraniStemFilterFactory();
            SoraniStemFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::ckb::SoraniStemFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace ckb {
          extern PyType_Def PY_TYPE_DEF(SoraniStemFilterFactory);
          extern PyTypeObject *PY_TYPE(SoraniStemFilterFactory);

          class t_SoraniStemFilterFactory {
          public:
            PyObject_HEAD
            SoraniStemFilterFactory object;
            static PyObject *wrap_Object(const SoraniStemFilterFactory&);
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
